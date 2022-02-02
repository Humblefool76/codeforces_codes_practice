#include<bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin>>t;
    while(t--)
    {
       int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i].first;
        }
        for(int i = 0; i < n; i++) {
            cin >> v[i].second;
        }
        sort(v.begin(),v.end());
        for(int i = 0; i < n; i++) {
            if(k < v[i].first) {
                break;
            }
            k += v[i].second;
        }
        cout << k << endl;
    }
    return 0;
}
