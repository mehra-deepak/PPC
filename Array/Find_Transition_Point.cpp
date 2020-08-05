/*

You are given a sorted array containing only numbers 0 and 1. 
Find the transition point efficiently.
The transition point is a point where "0" ends and "1" begins (0 based indexing).
Note that, if there is no "1" exists, print -1.
Note that, in case of all 1s print 0.

Example:

Input
2
5
0 0 0 1 1
4
0 0 0 0

Output
3
-1

*/


#include<iostream>
using namespace std;

void findTransition(int arr[], int n)
{
    
    int i=0;
    
    while(arr[i] != 1)
    {
        i++;
    }
    if(i>=n)
    {
        cout<<-1;
    }
    else
    {
        cout<<i;
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
    
    findTransition(arr,n);
    
}












































