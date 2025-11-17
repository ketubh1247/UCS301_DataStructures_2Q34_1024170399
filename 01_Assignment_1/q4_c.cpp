#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, c;
    cout<<"Enter rows and cols: ";
    cin>>r>>c;
    int A[50][50], T[50][50];
    cout<<"Enter matrix elements: ";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin>>A[i][j];
    
    // transpose
    for (int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            T[j][i] = A[i][j];

    cout<<"Transpose Matrix: "<<endl;
    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++)
            cout<<T[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}