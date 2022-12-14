#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i - 1; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void print_ele(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}


int main()
{

    int arr[] = {15, 16, 6, 8, 5};
    int n;
    cout<<"Enter the elemt"<<endl;
    cin >> n;
    bubble_sort(arr, n);
    cout<<"After printing"<<endl;
    print_ele(arr,n);
}