#include<bits/stdc++.h>
#define e endl
using namespace std;


void solve(){

    int n;
    cin>>n;
    string s;

    while(n--){

        cin>>s;
        cout<<s[0]<<(s.size()-2)<<s[s.size()-1]<<e;
    }
}





int main(){

    int t=1;
    while(t--){
        solve();
    }
    return 0;

}
