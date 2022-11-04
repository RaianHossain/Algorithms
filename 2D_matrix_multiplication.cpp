#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the size of your matrix: ";
    int n;
    cin>>n;
    int A[n][n];
    int B[n][n];
    int C[n][n];
    cout<<"Enter matrix A: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int temp;
            cin>>temp;
            A[i][j] = temp;
        }
    }
    cout<<"Enter matrix B: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int temp;
            cin>>temp;
            B[i][j] = temp;
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            C[i][j] = 0;
            for(int k = 0; k < n; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    cout<<"Result:"<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<"\n";
    }
    

    return 0;
}