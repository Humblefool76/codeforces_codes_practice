#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int anton=0;
    int dnaik=0;

    for(int i=0;i<n;i++){

        if(arr[i]=='A'){
            anton = anton +1;
        }
        else if(arr[i]=='D'){
            dnaik = dnaik +1;
        }
    }

    if(anton>dnaik){
        cout<<"Anton"<<endl;
    }
    else if(anton==dnaik){
        cout<<"Friendship"<<endl;
    }
    else{
        cout<<"Danik"<<endl;
    }
}