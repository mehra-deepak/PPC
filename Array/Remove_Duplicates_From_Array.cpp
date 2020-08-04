#include<iostream>
#include<vector>
using namespace std;
void removeDuplicates(int arr[], int n)
{
    vector<int> vect;
    
    int current = arr[0];
    
    vect.push_back(current);
    
    for(int i=1;i<n;i++)
    {
        if(current==arr[i])
        {
            continue;
        }
        else
        {
            vect.push_back(arr[i]);
            current=arr[i];
            
        }
    }
    
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
    
    removeDuplicates(arr , n);
}