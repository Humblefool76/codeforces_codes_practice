#include<bits/stdc++.h>
using namespace std;

int countNeighbour(string s,int n){

    int count=0;
    for(int i=0;i<s.size();i++){

        if(s[i+1]==s[i]){
            count++;
        }

    }
    return count;
}



int main(){

    int n;
    cin>>n;
    string s ="";
    cin>>s;

    cout<<countNeighbour(s,n)<<endl;

}