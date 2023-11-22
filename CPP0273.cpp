#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int sum = 0;
        for(int &x : a){
            cin>>x;
            sum += x;
        }       
        int m = -1;
        int s1 = 0;
        for(int i = 0; i < n; i++){
            s1 += a[i];
            if(s1 + a[i+1] + s1 == sum){
                m = i + 2;
                break;
            }
        }   
        cout<<m<<endl;
    }

}