//Write a program to print every third number beginning from 2 until number < 100, & calculate their sum & avg


#include<iostream>
using namespace std;

int main()
{

int sum , avg,num;

for(int i=3;i<=98;i++)
{
i+=2;
cout<<"3 rd number is "<<i<<endl;
sum=sum+i;

}
cout<<"sum is "<<sum;

}