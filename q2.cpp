#include<iostream>
using namespace std;
int sort(int arr[])
{
    //bubble sort
    int i,j;
    for(i=0;i<7;i++)
    {
        for(j=0;j<6-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"Sorted array:"<<endl;
    for(i=0;i<6;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int arr[7]={64,34,25,12,22,11,90};
    sort(arr);
}