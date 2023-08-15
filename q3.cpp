#include<iostream>
using namespace std;
int main()
{
    int arr[7]={1,2,4,5,7,8,9};
    int start=0,end=6,missing;
    
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]>mid+1)
        {
            missing=arr[mid]-1;
            end=mid-1;
        }
        else if(arr[mid]=mid+1)
        {
            start=mid+1;
        }
    }

    if(missing==0)
    {
        cout<<"No element missing";
    }
    else
    {
        cout<<"Missing element is: "<<missing;
    }
}