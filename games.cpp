#include<bits/stdc++.h>
using namespace std;

int guest_uniform(int n,int h[],int a[]){

    int count = 0;
    
    for(int i=0;i<n;i++){
       
       for(int j=0;j<n;j++){

           if(h[i]==a[j]){
               count++;
           }
       }
       
    }

    return count;

    
}


int main(){

    int n;
    cin>>n;

    int h[30],a[30];
    for(int i=0;i<n;i++){
        cin>>h[i]>>a[i];
    }

    cout<<guest_uniform(n,h,a);
}