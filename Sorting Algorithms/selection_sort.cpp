#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int min=i;
        for (int j = i+1; j < n ; j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;
            } 

            if(min!=i){
                 swap(arr[min],arr[i]);

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