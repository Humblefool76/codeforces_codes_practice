#include<bits/stdc++.h>

using namespace std;



int main(){

    string first ="";
    cin>>first;

    string second ="";
    cin>>second;
    
    transform(first.begin(), first.end(), first.begin(),::toupper);

    transform(second.begin(), second.end(), second.begin(),::toupper);

    if(first<second){
        cout<<-1<<endl;
    }
    else if(first>second){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }

    return 0;
}