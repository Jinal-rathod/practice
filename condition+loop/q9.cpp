// Sum of Even Numbers: Write a program to calculate the sum of all even numbers between 1 and N using a for loop, and print a message
// if the sum is greater than 100.

#include<iostream>
using namespace std;

int main(){
    int num,sum=0;
    cin>>num;
    for(int i=2;i<=num;i+=2){
        sum+=i;
    }
    cout<<sum<<" ";
    return 0;
}