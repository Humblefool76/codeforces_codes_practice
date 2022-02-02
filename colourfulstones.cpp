#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    string t;
    cin>>t;


    int count =1;

    int j=0;

    

    for(;j<t.size();j++){ 
        
        if(s[count-1]==t[j]){
            count++;
        }
    }

    cout<<count<<endl;

    

    
}