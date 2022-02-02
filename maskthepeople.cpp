#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin>>t;

    while(t--){

        int n,a;
        cin>>n>>a;

        int unaffected  =   n-a;

        if(unaffected<=a){
            cout<<unaffected<<endl;
        }
        else{
            cout<<a<<endl;
        }
    }
    return 0;
}