#include<bits/stdc++.h>

using namespace std;

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
        int i = 0, j = n-1;
        int cnt = 0;
        while(i <= j){
            if(a[i] < a[j]){
                a[i+1] += a[i];
                i++;
                cnt++;
            }
            else if(a[i] > a[j]){
                a[j-1] += a[j];
                j--;
                cnt++;
            }
            if(a[i]==a[j]){
                i++;
                j--;
            }
        }
        cout<<cnt<<endl;
    }

}