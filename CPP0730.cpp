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
        long long sum1 = 0, sum2 = -1e9;
        int check = 0;
        for(int i = 0; i < n; i++){
            sum1 += a[i];
            if(a[i] > 0)    check = 1;
            if(sum1 < 0)    sum1 = 0;
            sum2 = max(sum1, sum2);
        }
        if(check)
            cout<<sum2<<endl;
        else{
            cout<<*max_element(a, a+n);
        }
    }

}