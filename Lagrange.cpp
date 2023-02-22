#include<bits/stdc++.h>
using namespace std;

int main(){
    float x[100],y[100],xp = 0,yp,p;
    int i,j,n;
    cout<<"Enter number of data: ";
    cin>>n;
    cout<<"Enter data: ";
    for(i=0;i<n;i++){
        cin>>x[i];
        cin>>y[i];
    }
    cout<<"Enter interpolation point: ";
    cin>>xp;
    for(i=1;i<=n;i++){
        p = 1;
        for(j=1;j<=n;j++){
            if(i!=j){
                p = p*(xp-x[j])/(x[i]-x[j]);
            }
        }
        yp = yp + p *y[i];
    }
    cout<<"Interpolated value at "<<xp<<" is "<<yp;
    return 0;
}
