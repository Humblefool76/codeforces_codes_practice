#include<bits/stdc++.h>
using namespace std;

void becomeBig(int a, int b){

    int count =0;

    while(a<=b){
        a=3*a;
        b=2*b;

        count +=1;
    }
    cout<<count<<endl;
}




int main(){

    int a,b;
    cin>>a>>b;

    becomeBig(a,b);

    return 0;


}