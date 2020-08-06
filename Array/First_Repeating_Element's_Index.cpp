/*

First Repeating Element 
Given an array arr[] of size N. The task is to find the first repeating element in an array of integers, i.e., an element that occurs more than once and whose index of first occurrence is smallest.

Example 1:

Input:
N = 7
arr[] = {1,5,3,4,3,5,6}
Output: 2
Explanation: 5 is appearing twice and 
its first appearence is at index 2 
which is less than 3 whose first 
occuring index is 3.

*/

#include<iostream>
using namespace std;
int firstRepeatingElement(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(arr[i]==arr[j])
            {
                return i+1;
            }
        }
    }
    
    return -1;
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
    
    cout<<firstRepeatingElement(arr, n);
}