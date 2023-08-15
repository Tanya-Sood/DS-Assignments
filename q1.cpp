#include<iostream>
using namespace std;
int sort(int arr[])
{
    //bubble sort
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<5-i;j++)
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

int search(int arr[],int start,int end,int el)
{
    //binary search
    int count=0;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==el)
        {
            cout<<"Element is present at position:"<<mid+1;
            count=1;
            break;
        }
        else if(arr[mid]<el)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    if(count!=1)
    {
        cout<<"Element not found";
    }
}

int main()
{
    int arr[6]={3,2,6,4,5,1};
    sort(arr);
    int el;
    cout<<"Enter element:"<<endl;
    cin>>el;
    int start=0;
    int end=5;
    search(arr,start,end,el);
}
