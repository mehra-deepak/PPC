#include<iostream>
using namespace std;
void rotateArray(int arr[], int n)
{
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        swap(arr[i],arr[j]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[10];
    
    int n;
    
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    rotateArray(arr,n);
}