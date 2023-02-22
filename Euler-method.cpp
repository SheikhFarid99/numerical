#include<bits/stdc++.h>
#define f(x,y) x+y
using namespace std;

int main(){
    double x0,y0,xn,yn,h,slope;
    int i,n;
    cout<<"Enter initial condition : ";
    cin>>x0>>y0;
    cout<<"Enter calculation point: ";
    cin>>xn;
    cout<<"Enter number of step: ";
    cin>>n;

    h = (xn-x0)/n;
    for(i=0;i<n;i++){
        slope = f(x0,y0);
        yn = y0+h*slope;
        cout<< x0<<"\t"<< y0<<"\t"<< slope<<"\t"<< yn<< endl;
        y0 = yn;
        x0 = x0+h;
    }
    cout<<"Value of y at x = "<<xn<<" is "<<yn<<endl;
    return 0;
}
