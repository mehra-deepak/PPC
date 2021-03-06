/*

Given an array A of N positive numbers. The task is to find the first Equilibium Point in the array. 
Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

Example 1:

Input:
N = 1
A[] = {1}
Output: 1
Explanation: Since its the only 
element hence its the only equilibrium 
point. 
Example 2:

Input:
N = 5
A[] = {1,3,5,2,2}
Output: 3
Explanation: For second test case 
equilibrium point is at position 3 
as elements before it (1+3) = 
elements after it (2+2).

*/

#include<iostream>
using namespace std;
int equilibriumPoint(int arr[], int n)
{
    int sum=0;
    
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    
    int leftsum=0;
    
    for(int i=0;i<n;i++)
    {
        sum-=arr[i];
        if(leftsum == sum)
        return i+1;
        
        leftsum+=arr[i];
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
    
    cout<<equilibriumPoint(arr, n);
    
}