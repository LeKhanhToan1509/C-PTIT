#include<bits/stdc++.h>

using namespace std;

map<int, int> mp;

int cmp(int a, int b){
    if(mp[a] == mp[b]){
        return a < b;
    }
    return mp[a] > mp[b];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        mp.clear();
        int n;
        cin>>n;
        int a[n];
        for(int &x : a){
            cin>>x;
        }       
        for(int x : a){
            mp[x]++;
        }        
        sort(a, a+n, cmp);
        for(int x : a){
            cout<<x<<" ";
        }
        cout<<endl;
    }

}