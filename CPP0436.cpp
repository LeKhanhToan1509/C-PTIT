#include<bits/stdc++.h>

using namespace std;

int lower_bour(vector<int> a, int x){
    int l = 0, r = a.size()-1;
    int res = -1;
    while(l <= r){
        int m = (l+r)/2;
        if(a[m] > x){
            r = m-1;
            res = m;
        }
        else l = m+1;
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        set<int> se;
        vector<int> v;
        for(int &x : a){
            cin>>x;
            se.insert(x);
        }       
        for(int x : se){
            v.push_back(x);
        }
        for(int x : a){
            int k = lower_bour(v, x); 
            if(k == -1) cout<<"_ ";
            else cout<<v[k]<<" ";
        }
        cout<<endl;
    }

}