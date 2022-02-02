#include<bits/stdc++.h>
using namespace std;

int crime_counts(int arr[], int n){

    int count =0;
    int pos_count=0;

    for(int i=0;i<n;i++){

        if(arr[i]>=1){

            pos_count = pos_count + arr[i];
        } 
        else if(arr[i]<0 and pos_count<=0){
            count++;

        }
        else if(arr[i]<0 and pos_count>0){
            pos_count--;
        }

    }
    return count;

}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    cout<<crime_counts(arr,n)<<endl;


}