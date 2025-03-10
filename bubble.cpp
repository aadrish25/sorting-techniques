#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    cout<<endl;
    int arr[n];

    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int flag=0;

    for(int i=0;i<n-1;i++)
    {
        flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j+1],arr[j]);
                flag=1;
            }
        
        } 
        if(flag==0) break;     
    }

    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}