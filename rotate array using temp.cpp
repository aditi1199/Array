/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void leftrotate(int arr[],int n,int k)
{
    int i,j;
    int temp;
    for(j=0;j<k;j++)
    {
        temp=arr[0];
        for(i=0;i<n;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
}


void printarray(int arr[],int n,int k)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<'\t'<<arr[i];
    }
}
int main()
{
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    leftrotate(arr,n,k);
    printarray(arr,n,k);

    return 0;
}
