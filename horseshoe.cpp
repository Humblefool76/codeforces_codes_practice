#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }

    sort(arr,arr+4);

    int count=0;

    for(int i=0;i<4;i++){

        if(arr[i-1]==arr[i]){
            count++;
        }
    }

    cout<<count++<<endl;



}