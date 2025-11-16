#include <bits/stdc++.h>
using namespace std;

const int MAX_cap = 100;

void createArray(int arr[], int &n){
    cout<<"Enter number of elements (max " << MAX_cap << "): ";
    cin >> n;
    if(n < 0) n = 0;
    if(n > MAX_cap){
        cout<<"Too many elements. Setting to max " << MAX_cap << ".\n";
        n = MAX_cap;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"Element "<<i<<": ";
        cin>>arr[i];
    }
}

void displayArray(int arr[], int n){
    if(n==0){
        cout<<"Array is empty"<<endl;
        return;
    }
    cout<<"Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertElement(int arr[], int &n){
    if(n >= MAX_cap){
        cout<<"Array is full. Cannot insert."<<endl;
        return;
    }
    int pos, val;
    cout<<"Enter position to insert (0 to "<<n<<"): ";
    cin>>pos;
    if(pos < 0 || pos > n){
        cout<<"Invalid position"<<endl;
        return; 
    }
    cout<<"Enter value to insert: ";
    cin>>val;

    for (int i = n-1; i >= pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = val;
    n++;
    cout<<"Inserted!"<<endl;
}

void deleteElement(int arr[], int n){
    if(n == 0){
        cout<<"Array is Empty!"<<endl;
        return;
    }

    int pos;
    cout<<"Enter position to delete (0 to "<<n-1<<"): ";
    cin>>pos;
    if(pos < 0 || pos > n-1){
        cout<<"Invalid position!"<<endl;
        return;
    }
    for (int i = pos; i < n-1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    cout<<"Deleted!"<<endl;
}

void linearSearch(int arr[], int n){
    if(n == 0){
        cout<<"Array is empty!"<<endl;
        return;
    }
    int key;
    cout<<"Enter value to search: ";
    cin>>key;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == key){
            cout<<"Found at index" << i <<endl;
            return;
        }
    }
    cout<<"Not found"<<endl;
}

int main(){
    int arr[MAX_cap];
    int n = 0;
    int choice;
    do{
        cout<<"\n----MENU----\n";
        cout<<"1. CREATE\n2. DISPLAY\n3. INSERT\n4. DELETE\n5. LINEAR SEARCH\n6. EXIT\n";
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice){
            case 1: 
                createArray(arr, n); 
                break;
            case 2:
                displayArray(arr, n);
                break;
            case 3:
                insertElement(arr, n);
                break;
            case 4:
                deleteElement(arr, n);
                break;
            case 5:
                linearSearch(arr, n);
                break;
            case 6:
                cout<<"Exiting"<<endl;
                break;
            default:
                cout<<"Invalid choice."<<endl;
        }
    } while(choice != 6);

    return 0;
}