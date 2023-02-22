#include<bits/stdc++.h>
#define f(x,y) (y*y-x*x)/(y*y+x*x)
using namespace std;

int main(){
    double x0,y0,xn,yn,h,k1,k2,k3,k4,k;
    int i,n;
    cout<<"Enter initial guess : ";
    cin>>x0>>y0;
    cout<<"Calculation point xn = ";
    cin>>xn;
    cout<<"Number of steps ";
    cin>>n;

    h = (xn-x0)/n;

    for(i=0;i<n;i++){
        k1 = h*(f(x0,y0));
        k2 = h*( f( (x0+h/2), (y0+k1/2) ));
        k3 = h*( f( (x0+h/2), (y0+k2/2) ));
        k4 = h*( f( (x0+h), (y0+k3) ));
        k = (k1+2*k2+2*k3+k4)/6;
        yn = y0 + k;
        cout<<x0<<"\t"<<y0<<"\t"<<yn<<endl;
        x0 = x0+h;
        y0 = yn;
    }
    cout<<"\nValue of y at x = "<< xn<< " is " << yn;
    return 0;

}
