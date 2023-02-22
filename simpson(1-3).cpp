#include<bits/stdc++.h>
#define f(x) 1/(1+pow(x,2))

using namespace std;
int main()
{
    float lower, upper, integration=0.0, stepSize, k;
    int i, subInterval;
    cout<<"Enter lower limit of integration: ";
    cin>>lower;
    cout<<"Enter upper limit of integration: ";
    cin>>upper;
    cout<<"Enter number of sub intervals: ";
    cin>>subInterval;

    stepSize = (lower+upper)/subInterval;

    integration = f(lower)+f(upper);
    for(i=1;i<=subInterval-1;i++){
        k = lower + i*stepSize;
        if(i%2 == 0){ // i%3
            integration += 2*f(k);
        }else{
            integration += 4*f(k); // 3
        }
    }
    integration*=stepSize/3; //(3.0/8.0)
    cout<< endl<<"Required value of integration is: "<< integration;
    return 0;

}
