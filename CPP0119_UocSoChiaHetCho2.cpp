#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt = 0;
        for(int i = 1; i*i <= n; i++){
            if(n%i==0){
                if(i%2==0)  cnt++;
                if(n/i%2==0 && i*i != n)    cnt++;
            }
        }       
        cout<<cnt<<endl;
    }

}