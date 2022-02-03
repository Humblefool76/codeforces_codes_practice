#include<bits/stdc++.h>
#define e endl
#define ll long long
using namespace std;


void solve(){

    ll n,x;
    cin>>n>>x;
    ll rem_icecream =x;
    ll distress_child =0;

    while(n--){
        char sign;
        ll d;
        cin>>sign>>d;

        if(sign == '+'){
            rem_icecream += d;

        }
        else {

            if(rem_icecream<d){
                distress_child++;
            }
            else{
                rem_icecream-=d;
            }

        }
        
    }
    cout<<rem_icecream<<" "<<distress_child<<e;
    
}





int32_t main(){

    ll t=1;
    while(t--){
        solve();
    }
    return 0;

}
