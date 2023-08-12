#include<iostream>
using namespace std;
int insertion(int arr[],int n);
int deletion(int arr[],int n);
int linear_search(int arr[],int n);
int display(int arr[],int n);
int cont(int arr[],int n);
int options(int arr[],int n);
int main()
{
    int n,i;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for( i=0 ; i < n ; i++ )
    {
        cin>>arr[i];
    }
    options(arr,n);
}

int options(int arr[],int n)
{
    char option;
    cout<<"Select an operation: "<<endl<<"a:insertion"<<endl<<"b:deletion"<<endl<<"c:linear search"<<endl<<"d:display"<<endl;
    cin>>option;
    if (option == 'a')
    {
        insertion(arr,n);
    }
    else if (option == 'b')
    {
        deletion(arr,n);
    }
    else if (option == 'c')
    {
        linear_search(arr,n);
    }
    else if (option == 'd')
    {
        display(arr,n);
    }
    else
    {
        cout<<"Invalid option"<<endl;
        cont(arr,n);
    }
}

int insertion(int arr[],int n)
{
    int pos,element,i;
	cout<<"Enter element to be inserted: "<<endl;
	cin>>element;
	cout<<"Enter position of element: "<<endl;
	cin>>pos;
	if(pos>n+1)
    {
        cout<<"Invalid position"<<endl;
    }
    else
    {
        for(i=n-1;i>=pos-1;i--)
	    {
		    arr[i+1]=arr[i];
	    }
	    arr[pos-1]=element;
	    n++;
    }
    cont(arr,n);
}

int deletion(int arr[],int n)
{
    int el,i;
	cout<<"Enter element to be deleted: "<<endl;
	cin>>el;
	for(i=0;i<n;i++)
	{
		if(arr[i]==el)
		{
			break;
		}
	}
	int j;
	for(j=i;j<n;j++)
	{
		arr[j]=arr[j+1];
	}
	n--;
    cont(arr,n);
}

int linear_search(int arr[],int n)
{
    int el,i;
    cout<<"Enter element to be searched: "<<endl;
	cin>>el;
	for(i=0;i<n;i++)
	{
		if(arr[i]==el)
		{
			break;
		}
	}
    if(i>=n)
    cout<<"element not found."<<endl;
    else
    cout<<el<<" is present on "<<i+1<<" position in the arrray."<<endl;
    cont(arr,n);
}

int display(int arr[],int n)
{
    int i;
    cout<<"Array: "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
    cont(arr,n);
}

int cont(int arr[],int n)
{
    char a;
    cout<<"Do you want to continue?(y/n): "<<endl;
    cin>>a;
    if(a=='y')
    {
        options(arr,n);
    }
    else if(a=='n')
    {
        cout<<"Thank You!"<<endl;
    }
    else
    {
        cout<<"Invalid option"<<endl;
        cont(arr,n);
    }
}