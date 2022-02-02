#include<bits/stdc++.h>
using namespace std;


int main(){

    int n,m,xi,yi;
    cin>>n;
    int a[100];

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    cin>>m;

    while(m--){
        cin>>xi>>yi;

        
        a[xi-1] = a[xi-1] + (yi-1);
        a[xi+1] = a[xi+1] + (a[xi]-yi);
        a[xi] =0;
        
        
    }

    for(int i=1;i<=n;i++){
        cout<<a[i]<<endl;
    }

}