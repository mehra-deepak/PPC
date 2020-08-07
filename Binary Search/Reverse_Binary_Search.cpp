//Reverse Binary Search

#include<iostream>
using namespace std;

int reverseBinarySearch(int arr[], int n, int x)
{
    int left =0;

    int right =n-1;

    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(x>arr[mid])
        {
            right = mid-1;
        }
        else
        {
            left = mid+1;
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

    int x;

    cin>>x;

    cout<<reverseBinarySearch(arr, n, x);
}
