//Write a program to print all odd/even numbers between given two numbers x & y including x & y, & their sum & avg.

#include<iostream>
using namespace std;

int main()
{
    system("cls");
int num1,num2,i,j,evnum,odnum,evsum,odsum,od1,od2,k,l;
cout<<"enter the numbers";
cin>>num1>>num2;
if(num1%2==0)
{
evnum=num1-2;
od1=num1-1;

for(i=evnum;i<num2;i++)
{
    evnum=evnum+2;
    cout<<"even number "<<evnum<<endl;
    evsum=evsum+evnum;
    for(k=evnum;k<num2;k++)
    {
    od1=od1+2;
    

    }
    
}
cout<<"odd number is"<<od2;
cout<<"sum of even num"<<evsum<<endl;

}
else{
odnum=num1-1;
for ( j = odnum;j<num2;j++)
{
    odnum=odsum+2;
    cout<<"odd number"<<j<<endl;
    odsum=odsum+1;
    
}
cout<<"sum of odd num"<<odsum;

}

}
