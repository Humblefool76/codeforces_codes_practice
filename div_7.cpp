#include<bits/stdc++.h>
using namespace std;

void solve(int n){

    if(n%7==0){
        cout<<n<<endl;
        return;
    }

    n=n/10 *10;
    while(n%7!=0){

        n++;
    }
    cout<<n<<endl;
}




int main(){


    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solve(n);

    }

    return 0;

}