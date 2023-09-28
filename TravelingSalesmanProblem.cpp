// Implementation of the nearest neighbor algorithm for TSP
// (Note: This is a heuristic and may not always provide the optimal solution)

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

struct Point {
    int x, y;
};

double distance(Point a, Point b) {
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int nearestNeighborTSP(vector<Point>& points) {
    int n = points.size();
    vector<bool> visited(n, false);
    visited[0] = true;
    int totalDistance = 0;
    int current = 0;

    for (int i = 0; i < n - 1; i++) {
        int nearestCity = -1;
        double minDist = INT_MAX;

        for (int j = 0; j < n; j++) {
            if (!visited[j] && j != current) {
                double dist = distance(points[current], points[j]);
                if (dist < minDist) {
                    minDist = dist;
                    nearestCity = j;
                }
            }
        }

        visited[nearestCity] = true;
        totalDistance += minDist;
        current = nearestCity;
    }

    // Return to the starting city to complete the tour
    totalDistance += distance(points[current], points[0]);
    return totalDistance;
}

int main() {
    vector<Point> points = {{0, 0}, {2, 4}, {3, 1}, {5, 3}, {6, 0}};
    int minDistance = nearestNeighborTSP(points);
    cout << "Minimum Distance for TSP: " << minDistance << endl;
    return 0;
}
