#include <bits/stdc++.h>
using namespace std;

int main(){
    int r1, c1, r2, c2;
    cout<<"Enter rows and cols for matrix A: ";
    cin>>r1>>c1;
    cout<<"Enter rows and cols for matrix B: ";
    cin>>r2>>c2;
    if(c1 != r2){
        cout<<"Matrix Multiplication not possible. c1 must be equal to r2!"<<endl;
        return 0;
    }

    int A[50][50], B[50][50], C[50][50];
    cout<<"Enter A elements: "<<endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin>>A[i][j];
        }
    }

    cout<<"Enter B elements: "<<endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin>>B[i][j];
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            C[i][j] = 0;
        }
    }

    // multiplication
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                C[i][j] += A[i][k] * B[k][j];
    
    cout<<"Product Matrix: "<<endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}