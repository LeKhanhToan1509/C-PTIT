#include<bits/stdc++.h>

using namespace std;

struct t{
    int h, p, s;
};

int cmp(t a, t b){
    if(a.h == b.h){
        if(a.p == b.p){
            return a.s < b.s;
        }
        else return a.p < b.p;
    }    
    return a.h < b.h;
}
int main(){
    int n;
    cin>>n;
    t a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i].h>>a[i].p>>a[i].s;
    }
    sort(a, a+n, cmp);
    for(int i = 0; i < n; i++){
        cout<<a[i].h<<" "<<a[i].p<<" "<<a[i].s<<endl;
    }
}