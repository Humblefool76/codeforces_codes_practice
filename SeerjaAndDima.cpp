#include<bits/stdc++.h>
using namespace std;

void winner(int arr[], int n){

    int s= 0;
    int e= n-1;
    int seerja=0;
    int dima = 0;

    int chance =0;

    

   while(s<=e){
       
       int maxi =  max(arr[s],arr[e]);


       if(chance%2==0){
           seerja +=maxi;
       }
       else{
           dima+=maxi;
       }

       chance++;
       if(maxi == arr[s]){
           s=s+1;
       }
       else{
           e-=1;
       }

       
   }
   cout<<seerja<<" "<<dima<<endl;
    
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];  
    }
   
    winner(arr,n);
}