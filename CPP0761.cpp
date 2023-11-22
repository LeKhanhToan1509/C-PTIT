#include<bits/stdc++.h>

using namespace std;

long long chia(string x, int y){
    long long du = 0;
    for(int i = 0; i < x.size(); i++){
        du = (du*10 + (x[i] - '0'))%y;
    }
    return du;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long y;
        string x;
        cin>>y>>x;
        long long z = chia(x, y);
        cout<<__gcd(z, y)<<endl;
    }

}