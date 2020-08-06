/*

Wave Array 

Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array and return it. In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5..... (considering the increasing lexicographical order).

Example 1:

Input:
N = 5
arr[] = {1,2,3,4,5}
Output: 2 1 4 3 5
Explanation: Array elements after 
sorting it in wave form are 
2 1 4 3 5.

*/

#include<iostream>
using namespace std;
void waveArray(int arr[], int n)
{
    
    if(n%2==0)
    {
        for(int i=0;i<n;i+=2)
        {
            swap(arr[i], arr[i+1]);
        }
        
    }
    else
    {
        for(int i=0;i<n-1;i+=2)
        {
            swap(arr[i], arr[i+1]);
        }
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
    
    waveArray(arr, n);
}