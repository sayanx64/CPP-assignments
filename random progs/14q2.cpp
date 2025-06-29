#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter row and column: "; cin>>r>>c;
    int A[r][c];
    cout<<"Enter the elements of binary matrix: ";
    for(int i =0; i<r; i++){
        for(int j = 0; j<c; j++){
            cin>>A[i][j];
        }
    }
    for(int i = 0; i<r; i++){
        int f=0;
        for(int j = 0; j<i; j++){
            f=1;
            for(int k =0; k<=c; k++){
                if(A[i][k] != A[j][k]){
                    f=0;
                }
                if(f==1){
                    break;
                }
            }
            if(f==0){
                for(int j=0; j<c; j++){
                    cout<<A[i][j]<<" ";
                }
                printf("\n");
            }
        }
    }
    return 0;
}