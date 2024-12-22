// Count the Digits of a Number: Write a C++ program that counts the number of digits in a given number using a for loop and an if condition.

#include<iostream>
using namespace std;

int main(){
    int num,sum=0;
    cin>>num;
    for(;num!=0;num/=10){
        sum+=num%10;
    }
    cout<<sum;
    return 0;
}