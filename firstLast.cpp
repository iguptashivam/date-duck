#include<iostream>
using namespace std;
int firstOccr(int arr[],int n,int key)
{
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int lastOccur(int arr[],int n,int key)
{
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            s=mid+1;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array : ";
    for(int i=0;i<n;i++) cin>>arr[i];
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    cout<<firstOccr(arr,n,key)<<endl;
    cout<<lastOccur(arr,n,key)<<endl;
}
