/*

Find Immediate Smaller Than X 
Given an array arr[] of size N containing positive integers and an integer X. You need to find the value in the array which is smaller than X and closest to it.

Input Format:
The input line contains T, denotes the number of test cases. Each test case contains three lines. First-line contains N. Second line contains elements of array space-separated. The third line contains an integer X.

Output Format:
For each testcase in a new line, you need to print the element which is closest to it. If not found then print "-1" without quotes.

User Task:
Since this is a functional problem you need to complete the given function immediateSmaller() which takes 3 arguments(array arr, N and X) and returns the answer. The printing is done by the driver code.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= T <= 100
1 <= N <= 103
1 <= arr[i], X <= 104

Sample Input:
2
5
4 67 13 12 15
16
5
1 2 3 4 5
1

Sample Output:
15
-1

*/



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int immediateSmaller(int arr[], int n, int x)
{
    
    int maxi = INT_MIN;
    for(int i=0; i<n;i++)
    {
        if(arr[i] < x)
        {
             maxi = max(arr[i],maxi);
        }
        
    }
    if(maxi == INT_MIN)
    {
        return -1;
    }
    else
    {
        return maxi;
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
    
    int x;
    cin>>x;
    
    cout<<immediateSmaller(arr, n, x);
}