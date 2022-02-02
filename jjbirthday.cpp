#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k=0;
        cin>>n;
        char ch[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','y','z'};
        string s="";

        for(int i=0;i<n;i++){

            if(k==25){
                k=0;
            }
            s+=ch[k];
            k++;
        }
        cout<<s<<endl;


    }
    return 0;
}