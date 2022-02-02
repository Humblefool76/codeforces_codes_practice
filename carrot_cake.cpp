#include<bits/stdc++.h>
using namespace std;


int main(){

    int n,t,k,d;
    cin>>n>>t>>k>>d;

    int first_oven_time ;
    int second_oven_time;

    if(n%k==0){
        first_oven_time = t*(n/k);
    }

    else{
        first_oven_time = n/k;
        first_oven_time++;
        first_oven_time *= t;
    }

    second_oven_time = t+d;

    if(first_oven_time<=second_oven_time){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}