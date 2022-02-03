#include<bits/stdc++.h>
#define e endl
using namespace std;


void solve(){

    int n,x;
    cin>>n>>x;
    int rem_icecream =x;
    int distress_child =0;

    while(n--){
        char sign;
        int d;
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





int main(){

    int t=1;
    while(t--){
        solve();
    }
    return 0;

}
