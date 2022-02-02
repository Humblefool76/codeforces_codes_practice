#include<bits/stdc++.h>
using namespace std;

void solveOrNot(int n)
{
    int p,v,t;
    int count =0;
    while(n){
        cin>>p>>v>>t;

        if((p+v+t)>1){
            count+=1;
        }
        n=n-1;
    }
    cout<<count<<endl;

}

int main(){

    int n;
    cin>>n;
    
    solveOrNot(n);

    

    return 0;
}