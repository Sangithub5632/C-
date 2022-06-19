//Write a program to Print all numbers between -n & +n.


#include<iostream>
using namespace std;
int main()
{

int num , value , loop ;
cout<<"Enter the value";
cin>> num;

value = num*2;
loop = num - value;

for(int i = loop; i<=num; i++)
{

cout<<"\nValue is "<<i;
 
}



}