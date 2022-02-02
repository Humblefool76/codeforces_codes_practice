#include<bits/stdc++.h>
using namespace std;

int moves(string s,int len){

    int s_moves = 0;
    int start = 0;

    for(int i=0;i<len;i++){

        // to make a = 0 ,..., z = 25
        int index = s[i]-97;

        //Pos (a-m) (0-12)=|12| & (a-p)=(0-15)=15
        int walk = abs(start - index);

        if(walk>13){
            s_moves += 26-walk;
        }
        else{
            s_moves += walk;
        }

        // to start when i was finish

        start = index;

    }
    return s_moves;
}


int main(){

    string s;
    cin>>s;

    int len = s.length();

    cout<<moves(s,len)<<endl;

    return 0;

}