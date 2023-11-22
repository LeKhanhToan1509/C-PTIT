#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int &x : a){
            cin>>x;
        }
        sort(a, a+n);
        int check = 0;
        for(int i = 0; i < n-1; i++){
            if(binary_search(a, a + n, a[i] + k)){
                check = 1;
                break;
            }
        }
        if(check)   cout<<"1\n";
        else cout<<"-1\n";
    }

}