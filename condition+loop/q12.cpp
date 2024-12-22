// Multiplication Table: Write a program that prints the multiplication table of a number from 1 to 10. Skip multiples of 5 using a for loop and an if condition.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
    return 0;
}