#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp=arr[i],j;
        for (j =i-1;j>=0 && arr[j]>temp;j--)
        {
            arr[j+1]=arr[j];
            
        }
        arr[j+1]=temp;
    }
}

void print_ele(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}


int main()
{

    int arr[] = {4,5,10,1,6};
    int n;
    cout<<"Enter the elemt"<<endl;
    cin >> n;
    bubble_sort(arr, n);
    cout<<"After printing"<<endl;
    print_ele(arr,n);
}