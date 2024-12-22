// Sum of Odd Numbers: Write a program that calculates the sum of all odd numbers between 1 and N, where N is a user input.

#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    for(int i=1;i<=num;i+=2){
        cout<<i<<" ";
    }
    return 0;
}
