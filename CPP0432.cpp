#include<bits/stdc++.h>

using namespace std;

int cmp(int a, int b){
    string s1 = to_string(a);
    string s2 = to_string(b);
    return 1ll*a*pow(10, s2.size()) + b > 1ll*b*pow(10, s1.size()) + a;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int &x : a){
            cin>>x;
        }
        sort(a, a+n, cmp);
        for(int x : a){
            cout<<x;
        }
        cout<<endl;
    }

}