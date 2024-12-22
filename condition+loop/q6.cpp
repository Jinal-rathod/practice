// Sum of Natural Numbers: Write a program that calculates the sum of all natural numbers from 1 to N, but skips any numbers divisible 
// by 3 using a for loop and an if condition.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%3==0){

        }else{
            cout<<i<<" ";
        }
    }
    return 0;
}