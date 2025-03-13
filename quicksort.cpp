#include<bits/stdc++.h>
using namespace std;

void quicksort(vector<int> &arr, int low, int high);
int partition(vector<int> &arr,int low,int high);

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<endl;

    vector<int> arr(n);
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    quicksort(arr,0,n-1);

    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

void quicksort(vector<int> &arr,int low,int high)
{
    if(low<high)
    {
        int partition_index=partition(arr,low,high);
        quicksort(arr,low,partition_index-1);
        quicksort(arr,partition_index+1,high);
    }
}

int partition(vector<int> &arr,int low,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while((arr[i]<=pivot) && (i<=high-1))
        {
            i++;
        }
        while ((arr[j]>pivot) && (j>=low+1))
        {
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}