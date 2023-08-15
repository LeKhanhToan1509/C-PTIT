#include<bits/stdc++.h>

using namespace std;

int used[10005];

int main(){
    int n;
    cin>>n;
    int a[101];
    memset(used, 0, sizeof(used));
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    for(int i = 0; i < n; i++){
        if(!used[a[i]]){
            cout<<a[i]<<" ";
            used[a[i]] = 1;
        }
    }
                
}