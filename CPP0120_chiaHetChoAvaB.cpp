#include<bits/stdc++.h>

using namespace std;

int lcm(int a, int b){
    return 1ll*a*b/__gcd(a, b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, a, b;
        cin>>n>>m>>a>>b;
        int c = lcm(a, b);
        int f_a = ceil((double)n/a) * a;
        int l_a = m/a*a;
        int f_b = ceil((double)n/b)*b;
        int l_b = m/b*b;
        int f_c = ceil((double)n/c)*c;
        int l_c = m/c*c;    
        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        for(int i = f_a; i <= l_a; i+=a){
            cnt1++;
        }
        for(int i = f_b; i <= l_b; i+=b){
            cnt2++;
        }
        for(int i = f_c; i <= l_c; i+=c){
            cnt3++;
        }
        cout<<cnt1+cnt2-cnt3<<endl;
    }

}