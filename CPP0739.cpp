#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int> v(s.size() + 1);
        int cnt = 1;
        for(int &x : v){
            x = cnt;
            cnt++;
        }   
        if(s[0] == 'I'){
            s = 'D' + s;
        }
        else s = 'I' + s;
        string s1;  
        int cnti = 0, cntd = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == 'D'){
                if(cnti > 0)
                    s1 += to_string(cnti) + 'I';
                cntd++;
                cnti = 0;
            }
            else{
                if(cntd > 0)
                    s1 += to_string(cntd) + 'D';
                cntd = 0;
                cnti++;
            }
        }
        vector<int> v1;
        for(int i = 1; i < s1.size(); i+=2){
            int k = s1[i-1] - '0';
            vector<int> v2; 
            if(s1[i] == 'D'){
                for(int j = 0; j < k; j++){
                    v2.push_back(v[v.size() - 2]);
                    v.erase(v.begin() + v.size() - 2);
                }
                for(int o = v2.size() - 1; o >= 0; o--){
                    v1.push_back(v2[i]);
                }
            }
            else{
                v1.push_back(v[v.size() - 1]);
                v.pop_back();
            }
        }
        for(int x : v1){
            cout<<x<<" ";
        }
        cout<<endl;
    }

}