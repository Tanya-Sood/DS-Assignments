//how to write a program to find sum of every row and every column in a two-dimensional array in c++?
#include<iostream>
using namespace std;
int main() 
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j,row_sum[3]={0},column_sum[3]={0};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            row_sum[i]+=arr[i][j];
            column_sum[i]+=arr[j][i];
        }
    }

    for(i=0;i<3;i++)
    {
        cout<<"Sum of row "<<i<<" :"<<row_sum[i]<<endl;
    }
    for(i=0;i<3;i++)
    {
        cout<<"Sum of column "<<i<<" :"<<column_sum[i]<<endl;
    }
}