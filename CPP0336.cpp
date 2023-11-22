#include<bits/stdc++.h>

using namespace std;

int used[26];
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1, s2;
        cin>>s1>>s2;
        map<char, int> mp, mp2;
        for(int i = 0; i < s2.size(); i++){
            mp[s2[i]] = 1;
        }
        int l = 0, r = s1.size()-1;
        while(mp[l] == 0){
            l++;
        }
        while(mp[r] == 0){
            r--;
        }
        l--;
        r++;
        for(int i = l; i <= r-s2.size(); i++){
            int sum = 0;
            mp2 = mp;
            for(int j = i; j <= r; j++){
                sum += mp2[s1[j]];
                mp2[s1[j]] = 0;
            }
            if(sum < s2.size()){
                l = i-1;
            }
        }
        for(int i = r; i >= l+s2.size(); i--){
            int sum = 0;
            mp2 = mp;
            for(int j = l; j <= r; j++){
                sum += mp2[s1[j]];
            }
            if(sum < s2.size()){
                r = i + 1;
            }
        }
        for(int i = l; i <= r; i++){
            cout<<s1[i];
        }
    }

}