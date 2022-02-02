#include<bits/stdc++.h>
using namespace std;

void upper_lower(string s,int len){

    int low_count = 0;
    int up_count =0;

    for(int i=0;i<len;i++){

        if(s[i]>='a'&& s[i]<='z'){
            low_count++;
        }
        else{
            up_count++;
        }
    }

    if(low_count>up_count or low_count==up_count){
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<endl;
    }
    else{
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s<<endl;
    }

}


int main(){


    string s;
    cin>>s;

    int len = s.length();
    upper_lower(s,len);

}