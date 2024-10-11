#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int i;
    cin >> i;
    cout << endl;
    int arr[i];
    for(int j=0; j<i; j++){
        cin >> arr[j];
    }
    
    for(int k=(i-1); k>=0; k--){
        cout << arr[k] << " ";
    }
    return 0;
}
