#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt = 0;
        int len = 0;
        int m = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == '0'){
                cnt++;
            }
            if(s[i] == '1'){
                cnt-=2;
                len+=3;
                if(cnt >= 0){
                    m = max(m, len);  
                }
                if(cnt < 0){
                    cnt = 0;
                    len = 0;
                }
                
            }
        }
        cout<<m<<endl;
    }
}
