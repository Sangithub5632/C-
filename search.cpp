#include<iostream>
using namespace std;

int main()
{
int array[]={4,5,8,6,3};
int num;
cin>>num;
for(int i=0;i<5;i++)
{
if(array[i]==num)
{

    cout<<"Element found in "<<"\t"<<i;
    return 0;
}

}
cout<<"not found";

}