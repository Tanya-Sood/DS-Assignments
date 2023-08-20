#include<iostream>
using namespace std;
int print(int arr[][4])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<'\t'<<arr[i][j];
        }
        cout<<endl;
    }
}

int diagonal(int arr[][4])
{
    int i,j;
    cout<<"Enter elements of the matrix:"<<endl;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j)
            {
                cin>>arr[i][j];
            }
        }
    }
    print(arr);
}

int tri_diagonal(int arr[][4])
{
    int i,j;
    cout<<"Enter elements of the matrix:"<<endl;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j|i==j+1|i==j-1)
            {
                cin>>arr[i][j];
            }
        }
    }
    print(arr);
}

int lower_triangular(int arr[][4])
{
    int i,j;
    cout<<"Enter elements of the matrix:"<<endl;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i>=j)
            {
                cin>>arr[i][j];
            }
        }
    }
    print(arr);
}

int upper_triangular(int arr[][4])
{
    int i,j;
    cout<<"Enter elements of the matrix:"<<endl;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i<=j)
            {
                cin>>arr[i][j];
            }
        }
    }
    print(arr);
}

int symmetric(int arr[][4])
{
    int i,j;
    cout<<"Enter elements of the matrix:"<<endl;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i<=j)
            {
                cin>>arr[i][j];
                arr[j][i]=arr[i][j];
            }
        }
    }
    print(arr);
}

int main()
{
    char option;
    cout<<"Select the type of matrix:"<<endl;
    cout<<"(a)Diagonal Matrix"<<endl<<"(b)Tri-diagonal Matrix"<<endl<<"(c)Lower triangular Matrix"<<endl<<"(d)Upper triangular Matrix"<<endl<<"(e)Symmetric Matrix"<<endl;
    cin>>option;
    int arr[4][4]={0};
    if(option=='a')
    {
        diagonal(arr);
    }
    else if(option=='b')
    {
        tri_diagonal(arr);
    }
    else if(option=='c')
    {
        lower_triangular(arr);
    }
    else if(option=='d')
    {
        upper_triangular(arr);
    }
    else if(option=='e')
    {
        symmetric(arr);
    }
    else
    {
        cout<<"Option Invalid";
    }
}
