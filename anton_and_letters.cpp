#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    getline(cin,s,'}');
    int n = s.size();
    remove(s.begin(), s.end(), ' ');

    vector<int> freq(n-1);

    for(int i=1;i<n;i++){
        if(s[i]!=','){
            freq[s[i]- 97]++;   
        }  
    }
    int count=0;

    for(int i=0;i<n;i++){
        if(freq[i]!=0){
            count++;
        }
    }

    cout<<count<<endl;
    
}


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     set <char> j;
//     getline(cin,s);
//     for(int i=0; i<s.length(); i++)
//     {
//         if(s[i]>='a' && s[i]<='z')
//             j.insert(s[i]);
//     }
//     cout<<j.size()<<endl;
//     return 0;
// }