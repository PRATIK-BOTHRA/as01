#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Before swapping the 1st number is";
    cin>>a;
    cout<<"Before swapping the 2nd number is";
    cin>>b;

    int c;
    c=b;
    b=a;
    a=c;

    cout<<"After swapping the 1st number is"<<a<<endl;
    cout<<"After swapping the 2nd number is"<<b<<endl;

    return 0;
}