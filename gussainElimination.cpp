#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,j,k,n;
    cout<<"Enter the number of Equation\n";
    cin>>n;
    float mat[n][n+1];
    float res[n];
    cout<<"Enter the Elements of augmented matrix\n";
    for(i=0;i<n;i++){
        for(j=0;j<n+1;j++){
            cin>>mat[i][j];
        }
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(abs(mat[i][i])<abs(mat[j][i])){
                for(k=0;k<n+1;k++){
                    swap(mat[i][k],mat[j][k]);
                }
            }
        }
    }
    /* performing Gaussian elimination */
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            float f = mat[j][i]/mat[i][i];
            for(k=0;k<n+1;k++){
                mat[j][k] = mat[j][k] - f*mat[i][k];
            }
        }
    }
    /* Backward substitution for discovering values of unknowns */
    for(i=n-1;i>=0;i--){
        res[i] = mat[i][n];
        for(j=i+1;j<n;j++){
            if(i!=j){
                res[i] = res[i] - mat[i][j]*res[j];
            }
        }
        res[i] = res[i]/mat[i][i];
    }
    cout<<"The values of unknowns for the equation "<<endl;
    for(i=0;i<n;i++)
        cout<<res[i]<<endl;
}
