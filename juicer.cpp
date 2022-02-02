#include<bits/stdc++.h>
using namespace std;

int waste_count(int a[],int n,int b,int d){

    int w_c=0;
    int sum =0;
    

    for(int i=0;i<n;i++){

        if(a[i]>b){
            continue;  
        }
        else{
            sum+=a[i];
        }

        if(sum>d){
                w_c++;
                sum = 0;7r
                
        }
    }

    return w_c;

}

int main(){

    int n,b,d;
    cin>>n>>b>>d;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int w_c = waste_count(a,n,b,d);

    cout<<w_c<<endl;
    return 0;
    
    
    

}


