#include<iostream>
using namespace std;
int main()
{
    system("cls");
int num1,num2,ch;
cout<<"Enter the Two Num\n";
cin>>num1>>num2;
cout<<"Enter The Your Choice... 1 add , 2 Substraction , 3 division , 4 multipication\n";

cin>>ch;

switch (ch)
{
case 1:
    cout<<"\nsum "<<(num1 + num2);
    break;

case 2:
    cout<<"\n Sub "<<(num1-num2);
    break;

case 3:
    cout<<"\n multi"<<(num1*num2);
    break;

case 4:
    cout<<"\n div"<<(num1/num2);
    break;

default:
    cout<<"invalid choice";
    break;
}



}