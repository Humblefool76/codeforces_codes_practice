#include<bits/stdc++.h>

#define ll long long
using namespace std;


void solve(){

    string s;
    getline(cin,s);

    int n = s.size();
    
    int countOf_1 = 0;
    int countOf_2 = 0;
    int countOf_3 = 0;

    for(int i=0;i<n;i+=2){
        if(s[i]=='1'){
            countOf_1++;
        }
        else if(s[i]=='2'){
             countOf_2++;
        }
        else {
            countOf_3++;
        }

        
    }

    int i=0;

    while(i<n and countOf_1){

        s[i]='1';
        countOf_1--;
        i+=2;
    }
    while(i<n and countOf_2){

        s[i]='2';
        countOf_2--;
        i+=2;
    }
    while(i<n and countOf_3){

        s[i]='3';
        countOf_3--;
        i+=2;
    }
    
    cout<<s<<endl;
    
}





int32_t main(){

    ll t=1;
    while(t--){
        solve();
    }
    return 0;

}
