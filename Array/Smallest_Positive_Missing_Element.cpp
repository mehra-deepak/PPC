/*

Smallest Positive missing number 
You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.
Note: Expected solution in O(n) time using constant extra space.

Input:
First line consists of T test cases. First line of every test case consists of N, denoting the number of elements in array. Second line of every test case consists of elements in array.

Output:
Single line output, print the smallest positive number missing.

User Task:
The task is to complete the function findMissing() which finds the smallest positive missing number.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= T <= 100
1 <= N <= 106
-106 <= arr[i] <= 106

Example:
Input:
2
5
1 2 3 4 5
5
0 -10 1 3 -20
Output:
6
2
*/

#include<iostream>
#include<vector>
using namespace std;

int findMissing(int A[], int n) 
{
    bool present[n+1]={false};
    
    for(int i=0;i<n;i++)
    {
        if(A[i]>0 && A[i]<=n)
        {
            present[A[i]]=true;
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        if(present[i]!=true)
        {
            return i;
        }
    }
    
    return n+1;
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
    
    cout<<findMissing(arr,n);
    
    
}