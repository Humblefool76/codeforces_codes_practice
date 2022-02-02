#include<bits/stdc++.h>
using namespace std;

int vanyaFence(int n,int h,int a[]){

    int ans = 0;

    for(int i=0;i<n;i++){
        
        if(a[i]<=h){
            ans = ans+1;
        }
        else{
            ans = ans+2;
        }
    }
    return ans;

}

int main(){

    int n,h;
    cin>>n>>h;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    

    cout<<vanyaFence(n,h,a)<<endl;
}