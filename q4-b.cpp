#include<iostream>
using namespace std;
int main() 
{
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3]={{1,2,3},{3,4,5},{5,6,7}};
    int i,j,k,arr[3][3];

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arr[i][j]=0;
            for(k=0;k<3;k++)
            {
                arr[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    cout<<"Multiplication of two matrix is : "<<endl;
    for (i = 0; i < 3 ; i++)
    {
        for ( j = 0; j < 3 ; j++)
        {
            cout<<"\t"<<arr[i][j];
        }
        cout<<endl;
    }
}