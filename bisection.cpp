#include<bits/stdc++.h>

using namespace std;

double func(double x){
    return 3*x - cos(x) -1 ;
}

double e = 0.01;
double c;

void Bisection(double a, double b){
    if(func(a)*func(b)>= 0){
        cout<<"Invalid A and B ";
        return;
    }
    while((b-a)>=e){
        c = a+b/2;
        if(func(c) == 0.0){
            cout<<"Root is = "<<c<<endl;
            break;
        }else if (func(c)*func(a)<0){
            cout<<"Root is = "<<c<<endl;
            a = c;
        }else{
            cout<<"Root is = "<<c<<endl;
            b = c;
        }
    }
}

int main(){
    double a,b;
    cin>>a>>b;
    Bisection(a,b);
    cout<<"Accurate root calculate is = " <<c<<endl;
}
