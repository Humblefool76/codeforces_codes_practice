#include<bits/stdc++.h>
using namespace std;


int count_calories(string s,int a1,int a2,int a3,int a4){

    int counter=0;

    for(int i=0;i<s.size();i++){
        
        switch(s[i]){
            case '1':
                counter = counter +  a1;
                break;
            
            case '2':
                counter = counter + a2;
                break;

            case '3':
                counter = counter +  a3;
                break;
            
            case '4':
                counter = counter +  a4;
                break;

            default:
            ;

        }


    }
    return counter;

}


int main(){

    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;

    string s ="";
    cin>>s;

    cout<<count_calories(s,a1,a2,a3,a4)<<endl;

}