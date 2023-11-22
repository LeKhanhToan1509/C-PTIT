#include<bits/stdc++.h>

using namespace std;

int check(long long n){
    int cnt = 0;
    while(n){
        cnt++;
        n/=10;
    }
    return cnt;
}

long long lcm(long long a, long long b){
    return a*b/__gcd(a, b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x, y, z, n;
        cin>>x>>y>>z>>n;
        long long bcnn;
        bcnn = lcm(lcm(x, y), z);
        long long k = pow(10, n-1)/bcnn;
        long long m = bcnn;
        while(check(m) < n){
            m = bcnn*k;
            k++;
        }
        if(check(m) == n){
            cout<<m<<endl;
        }
        else cout<<"-1\n";
    }

}