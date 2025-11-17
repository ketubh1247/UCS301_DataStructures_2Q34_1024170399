#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int high = n-1, low = 0;
    while(low <= high){
        int mid = (high+low)/2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) low = mid+1;
        else high = mid - 1;
    }
    return -1;
}

int main(){
    int arr[] = {2, 5, 7, 9, 12, 18, 25};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the key to search: ";
    cin>>key;
    int idx = binarySearch(arr, n, key);
    if(idx != -1) cout<<"Found at index "<<idx<<endl;
    else cout<<"Not Found";
    return 0;
}