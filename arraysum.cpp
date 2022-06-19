#include<iostream>
using namespace std;

int main()
{


int sum[3][3];
int a[3][3]={1,5,7,6,7,2,7,9,6};
int b[3][3]={6,8,9,3,7,9,7,9,2};


for (int i=0;i<3;i++)
{
for (int j=0;j<3;j++)
{
sum [i][j]=a[i][j] + b[i][j];
// cout<<sum<<"\t";

}
cout<<endl;
}
for (int i=0;i<3;i++)
{
for (int j=0;j<3;j++)
{
cout<<sum[i][j]<<"\t";
// cout<<sum<<"\t";

}
cout<<endl;
}


}