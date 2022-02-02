#include<bits/stdc++.h>
using namespace std;

int main(){
    int num=0;
    int pas=1;
    string val = "";
    cin>>val;
    
    for(int i=0;i<val.size();i++){
        for(int j=0;j<i;j++){
            
            if(val[i]==val[j]){
                num=num+1;
              
            }
        }
        if(num==0){
            pas++;
        }
        num=0;
    }
    if(pas%2==0){
        cout<<"IGNORE HIM!" <<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
        
    }
}