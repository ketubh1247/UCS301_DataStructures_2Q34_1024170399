#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, c;
    cout<<"Enter number of rows and cols: ";
    cin>>r>>c;

    int A[50][50];
    cout<<"Enter matrix elements: ";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin>>A[i][j];

    cout<<"Sum of rows: ";
    for(int i = 0; i < r; i++){
        int sumr = 0;
        for(int j = 0; j < c; j++){
            sumr += A[i][j];
        }
        cout<<sumr<<" ";
    }
    cout<<endl;

    cout<<"Sum of cols: ";
    for(int i = 0; i < c; i++){
        int sumc = 0;
        for(int j = 0; j < r; j++){
            sumc += A[j][i];
        }
        cout<<sumc<<" ";
    }
    cout<<endl;

    return 0;
}