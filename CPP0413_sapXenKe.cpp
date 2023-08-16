#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int m = n/2;
        for(int &x : a){
            cin>>x;
        }       
        sort(a, a+n);
        vector<int> b, c;
        for(int i = 0; i < n; i++){
            if(i < m){
                b.push_back(a[i]);
            }
            else{
                c.push_back(a[i]);
            }
        }
        reverse(c.begin(), c.end());
        for(int i = 0; i < m; i++){
            cout<<c[i]<<" "<<b[i]<<" ";
        }
        if(n%2 == 1)    cout<<c[m];    
        cout<<endl;
    }

}