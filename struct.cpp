#include<iostream>
using namespace std;
struct student{
    int roll;
    char section;
}s1,s2;
// yet to be completed
int main(){
    cin>>s1.roll>>s1.section;
    cout<<sizeof(s1.roll)<<endl<<sizeof(s1.section)<<endl;
    cout<<s1.roll<<endl<<s1.section;
    return 0;
}