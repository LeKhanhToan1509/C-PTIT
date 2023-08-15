#include<bits/stdc++.h>

using namespace std;

string MIN(int n, int k){
    int a[n];
    a[0] = 1;
    k--;
    int i = n-1;
    while(i > 0){
        if(k >= 9){
            a[i] = 9;
            k-=9;
            --i;
        }
        else{
            a[i] = k;
            k = 0;
            i--;
        }
    }
    a[0] += k;
    string s;
    for(int i = 0; i < n; i++){
        s+=a[i]+'0';
    }
    return s;
}

string MAX(int n, int k){
    int a[n];
    int i = 0;
    while(i < n){
        if(k >= 9){
            a[i] = 9;
            k-=9;
            i++;
        }
        else{
            a[i] = k;
            k = 0;
            i++;
        }
    }
    string s;
    for(int i = 0; i < n; i++){
        s+=a[i]+'0';
    }
    return s;
}
    
int main(){
    int n, k;
    cin>>n>>k;
    if((double)k/n > 9 || k == 0){
        cout<<"-1 -1";
        return 0;
    } 
    cout<<MIN(n, k)<<" "<<MAX(n, k);


}