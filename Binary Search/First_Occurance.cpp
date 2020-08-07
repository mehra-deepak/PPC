#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int firstOccurance(int arr[], int n, int x)
{
    int l=0;
    
    int r=n-1;
    
    int res= -1;
    
    while(l<=r)
    {
        int mid=l + (r-l)/2;
        
        if(arr[mid]==x)
        {
            res = mid;
            r = mid-1;
        }
        else if(x < arr[mid])
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    
    return res;
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

    int x;

    cin>>x;

    cout<<firstOccurance(arr, n, x);
}
