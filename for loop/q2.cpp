// Sum of Numbers from 1 to N: Write a program that calculates the sum of the first N natural numbers using a for loop.

#include<iostream>
using namespace std;

int main(){
    int num,sum=0;
    cin>>num;
    for(int i=1;i<=num;i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}
