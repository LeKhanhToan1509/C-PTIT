#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        long long a[n], b[m];
        for(long long &x : a){
            cin>>x;
        }
        for(long long &x : b){
            cin>>x;
        }
        cout<<*max_element(a, a+n) * (*min_element(b, b+n))<<endl;
    }

}