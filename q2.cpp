#include<iostream>
using namespace std;
int sort(int arr[]);
int func(int arr[]);
int main()
{
    int arr[9]={1,2,3,1,2,3,1,2,1};
    cout<<"Inital array:"<<endl;
    for(int i=0;i<9;i++)
    cout<<arr[i]<<endl;
    sort(arr);
    cout<<endl;
    func(arr);
}

int sort(int arr[])
{
    int i,j,temp;
    for(i=0;i<9;i++)
    {
        for(j=i;j<9;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"Sorted array:"<<endl;
    for(i=0;i<9;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int func(int arr[])
{
    int i,j,k,size=9;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[j]==arr[j+1])
            {
                for(k=j;k<size;k++)
                {
                    arr[k]=arr[k+1];
                }
                size--;
            }
        }
    }
    cout<<"Final array:"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}