#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(long long &x : a){
            cin>>x;
        }
        int cnt = 0;
        for(long long x : a){
            if(x != 0){
                cout<<x<<" ";
            }
            else cnt++;
        }
        while(cnt--){
            cout<<"0 ";
        }
        cout<<endl;
    }

}