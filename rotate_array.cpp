/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void reverse(int arr[],int n,int k,int i, int j)
{
      
   int temp=0;
    while(i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        
        i++;
        j--;
    }
}
void arrayrotate(int arr[],int n,int k)
{
      reverse(arr,n,k,0,n-k-1);
      reverse(arr,n,k,n-k,n-1);
      reverse(arr,n,k,0,n-1);
           
}
void printarray(int arr[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        cout<<'\t'<<arr[i];
    }
}
int main()
{
  int arr[]={10,20,30,40,50,60};
  int n=sizeof(arr)/sizeof(arr[0]);
  int k=3;
  int i=0,j=n;
 arrayrotate(arr,n,k);
 printarray(arr,n,k);
 
  
    
    return 0;
}
