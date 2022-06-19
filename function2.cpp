#include<iostream>
using namespace std;

int sum(int num1,int num2)
{
return(num1+num2);
}
int sub(int num1 ,int  num2)
{
return(num1-num2);

}
int main()
{
int a ,b;
cin>>a>>b;
cout<<"sum is "<<sum(a,b);
cout<<"sub is "<<sub(a,b);

return 0;
}