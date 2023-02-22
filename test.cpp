#include<bits/stdc++.h>
using namespace std;

double func(double x){
    return x*x*x + x*x + 2;
}

double error = 0.01;
void bisection(double a, double b){
    if(func(a)*func(b)>=0){
        cout<<"Not right assumed of a and b\n";
        return;
    }
    double m;
    while((b-a)>=error){
        m = (a+b/2.0);
        if(func(m) == 0){
            cout<<"Root is = "<<m<<endl;
            return;
        }else if(func(a)*func(m)<0){
            b = m;
        }else{
            a = m;
        }
    }
}

void FalseMethod(double a,double b){
    double x0;
    do{
        x0 = (a*func(b)-b*func(a))/(func(b)- func(a));
        if(func(x0) == 0){
            cout<<"Root is = "<<x0<<endl;
            return;
        }else if(func(a)*func(x0)<0){
            b = x0;
        }else{
            a = x0;
        }
    }while(fabs(func(x0))> error);
    cout<<"Root is = " <<x0<<endl;
}

int main(){
    double a,b;
    cin>>a>>b;
    FalseMethod(a,b);
}

