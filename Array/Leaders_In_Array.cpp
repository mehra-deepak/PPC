/*

Leaders in an array 
Given an array A of positive integers. Your task is to find the leaders in the array.

Note: An element of array is leader if it is greater than or equal to all the elements to its right side. Also, the rightmost element is always a leader. 

Example 1:

Input:
N = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17 
as it is greater than all the elements 
to its right.  Similarly, the next 
leader is 5. The right most element 
is always a leader so it is also 
included.

*/

#include<iostream>
#include<vector>
#include<climits>
#include<bits/stdc++.h>
using namespace std;

void leadersInArray(int arr[], int n)
{
    vector<int> vect;
    int largest = INT_MIN;
    int i=n-1;
    
    while(i>=0)
    {
        if(arr[i]>largest)
        {
            vect.push_back(arr[i]);
            largest=arr[i];
        }
        i--;
    }
    
    reverse(vect.begin(),vect.end());
    
    for(int i=0;i<vect.size();i++)
    {
        cout<<vect[i]<<" ";
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
    
    leadersInArray(arr,n);
}