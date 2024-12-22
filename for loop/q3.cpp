// Factorial of a Number: Write a C++ program that calculates the factorial of a number using a for loop.

#include<iostream>
using namespace std;

int main(){
    int n,f=1;
    cin>>n;
    for(int i=n;i>=1;i--){
        f*=i;
    }
    cout<<f;
    return 0;
}