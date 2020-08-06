/*

Kadane's Algorithm 
Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

Example 1:

Input:
N = 5
arr[] = {1,2,3,-2,5}
Output: 9
Explanation: Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.

*/

#include<iostream>
using namespace std;

int maxSumSubarray(int arr[], int n)
{
    int maxSum = arr[0];
     
    int maxSumSoFar = arr[0];
    
    for(int i=1;i<n;i++)
    {
        maxSumSoFar = max(arr[i], maxSumSoFar+arr[i]);
        if(maxSumSoFar > maxSum)
        {
            maxSum = maxSumSoFar;
        }
    }
    
    return maxSum;
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
    
    cout<<maxSumSubarray(arr, n);
}