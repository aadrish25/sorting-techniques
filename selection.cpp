#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<endl;

    int arr[n];
    cout<<"Enter the array elemments: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int min;
    for(int i=0;i<=n-2;i++)
    {
        min=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[min]) min=j;
        }
        swap(arr[i],arr[min]);
    }

    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}