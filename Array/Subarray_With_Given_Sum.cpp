/*

Subarray with given sum 
Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

Example 1:

Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12.

*/

#include<iostream>
using namespace std;
void subarraySum(int arr[], int n, int s)
{
   
 
    int i=0,j=0,sum=arr[0];
    while(j<n)
    {
        if(sum==s)
        {
            cout<<i+1<<" "<<j+1;
            return;
        }
        if(sum<s)
        {
            j++;
            sum+=arr[j];
        }
        else
        {
            sum-=arr[i];
            i++;
        }
    }
    cout<<-1;
    return;
    
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
    
    int s;
    
    cin>>s;

    subarraySum(arr, n, s);
}