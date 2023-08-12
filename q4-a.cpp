#include<iostream>
using namespace std;
int main() 
{
   int arr[5]={1,2,3,4,5};
   int i,j,temp;
   for(i=0;i<5;i++)
   {
       for(j=0;j<(5-i);j++)
       {
           temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
       }
   }
   cout<<"Reversed array:"<<endl;
   for(i=0;i<5;i++)
   {
       cout<<arr[i]<<endl;
   }
}