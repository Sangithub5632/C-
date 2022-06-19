#include<iostream>
using namespace std;

int main()
{

float Number , naturalsum , a , b , average , i;

cout<<"Enter Natural number";
cin>>Number;

for (i = 0 ; i <= Number ; i++)
{


cout<<"Number " <<i<<"\n";


}





a = Number + 1;
b = a/2;
naturalsum = Number*b;
average = b;
cout<<"sum of Natural number "<<Number <<" is " <<naturalsum <<"and average is " <<average;
}