// Who has the majority

/*
You are given an array arr[] of size N. You are also given two elements x and y.
Now, you need to tell which element (x or y) appears most in the array.
In other words, return the element, x or y, that has higher frequency in the array.
If both elements have the same frequency, then just return the smaller element.

N = 11
arr[] = {1,1,2,2,3,3,4,4,4,4,5}
x = 4, y = 5
Output: 4

N = 8
arr[] = {1,2,3,4,5,6,7,8}
x = 1, y = 7
Output: 1

*/

#include<iostream>
using namespace std;

int countMax(int arr[], int n, int x, int y)
{
    int countx =0;
    int county =0;
    for(int i=0;i<n;i++)
    {
        
        if(arr[i]==x)
        {
            countx++;
        }
        if(arr[i]==y)
        {
            county++;
        }
    }
    
    if(countx > county)
    {
        return x;
    }
    if(countx < county)
    {
        return y;
    }
    if(countx==county)
    {
        return min(x,y);
    }
    
}
int main()
{
    int n;
    cin>>n;
    
    int arr[10];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int x, y;
    
    cin>>x>>y;
    
    cout<<countMax(arr,n,x,y);
}
