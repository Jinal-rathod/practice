// Find Factorial of a Number Using a for Loop: Write a program that calculates the factorial of a number using a while loop, and checks
// if the number is negative

#include<iostream>
using namespace std;

int main(){
    int num,f=1;
    cin>>num;
    for(int i=num;i>=1;i--){
        f*=i;
    }
    cout<<f;
    return 0;
}