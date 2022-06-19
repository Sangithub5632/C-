
 //Write a program to Print all numbers between given two numbers x & y including x & y, & calculate their sum & avg.

#include<iostream>
using namespace std;
int main()
{

float num1,num2, j,sum,avg ,i , avnum;
cout<<"Enter the Num1,num2";
cin>>num1;
cin>>num2;
for(i=num1;i<=num2;i++)
{

// j=j+1;

cout<<"\nNumber is "<<i;
sum = sum+i;
avnum = num2-num1+1;
avg = sum/avnum;

}
cout<<"\nsum of n number is  "<<sum;
cout<<"\n avg is "<<(float)avg;


}