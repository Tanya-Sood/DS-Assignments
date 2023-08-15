#include <iostream>  
using namespace std;

int swap(int *arr1,int *arr2)
{
    int temp=*arr1;
    *arr1=*arr2;
    *arr2=temp;
}  

int main()  
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    cout<<"Matrix:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<'\t'<<arr[i][j];
        }
        cout<<endl;
    } 

    //transpose of arr
    for(i=0;i<3;i++)
    {
        for(j=i;j<3;j++)
        {
            swap(&arr[i][j],&arr[j][i]);
        }
    }  

    cout<<"Transpose of Matrix:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<'\t'<<arr[i][j];
        }
        cout<<endl;
    } 
}    