#include<bits/stdc++.h>

using namespace std;

long long solve(long long a, long long b, long long c){
    if(b == 1)  return a%c;
    long long res = solve(a, b/2, c);
    res%=c;
    if(b%2==0)  return (res + res)%c;
    else return (res + res + a%c)%c;
}   
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b, c;
        cin>>a>>b>>c;
        cout<<solve(a, b, c)<<endl;       
    }

}