#include<bits/stdc++.h>

using namespace std;

long long pow(long long a, long long b, long long m){
    if(b==1)    return a%m;
    long long res = pow(a, b/2, m);
    long long x = (res%m * res%m)%m;
    if(b%2==0)  return x;
    else return x*(a%m)%m;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        long long b, m;
        cin>>a>>b>>m;
        long long du = 0;
        for(int i = 0; i < a.size(); i++){
            du = (du*10 + (a[i] - '0'))%m;
        }
        cout<<pow(du, b, m)<<endl;
    }
}