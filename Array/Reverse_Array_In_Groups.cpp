#include<iostream>
using namespace std;
void reverseInGroups(int arr[], int n, int k)
{
    int i;

    for(i=0;i<n-k;i+=k)
    {
        int left = i;

        int right = i+k-1;

        while(left<right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }

    int left = i;

    int right = n-1;

    while(left<right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }


    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
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

    int k;

    cin>>k;

    reverseInGroups(arr,n,k);
}
