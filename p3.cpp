#include<iostream>
using namespace std;

int main()
{

float number, squre,avg, i;

cout<<"Enter natural number\n";
cin>>number;

for( i=1 ;i<=number;i++)
{
squre+=i*i;


}
avg =squre/2;
cout<< "sum of squre is "<<squre;
cout<<"average of squre is "<<avg;

}