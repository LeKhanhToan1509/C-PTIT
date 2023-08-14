#include<bits/stdc++.h>

using namespace std;

int used[10005];

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> v;
        while(n%2 == 0){
            v.push_back(2);
            n/=2;
        }
        for(int i = 3; i*i <= n; i+=2){
            while(n%i==0){
                v.push_back(i);
                n/=i;
            }
        }
        if(n > 1)   v.push_back(n);
        if(k > v.size()){
            cout<<"-1";
        }
        else{
            cout<<v[k-1];
        }
        cout<<endl;
    }
}