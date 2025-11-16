#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(int arr[], int &n){
    if(n <= 1) return;
    int write = 0;
    for (int i = 0; i < n; i++)
    {
        bool seen = false;
        for (int j = 0; j < write; j++)
        {
            if(arr[j] == arr[i]){
                seen = true;
                break;
            }
        }
        if(!seen){
            arr[write] = arr[i];
            write++;
        }
    }
    n = write; 
}

int main(){
    int arr[] = {2, 5, 2, 3 ,5, 1, 3};
    int n = 7;
    cout<<"Before: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    removeDuplicates(arr, n);
    cout<<"After (unique): ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}