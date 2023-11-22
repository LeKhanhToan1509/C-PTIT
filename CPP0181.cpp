#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, x, y;
        cin>>a>>x>>y;
        int k = __gcd(x, y);
        while(k--){
            cout<<a;
        }       
        cout<<endl;
    }

}