#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        double diem = 10;
        char de1[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
        char de2[15] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'}; 
        if(s[2] == '1'){
            int j = 0;
            for(int i = 4; i < s.size(); i+=2){
                if(s[i] != de1[j]){
                    diem -= (double)10/15;
                }
                j++;
            }
        }
        else{
            int j = 0;
            for(int i = 4; i < s.size(); i+=2){
                if(s[i] != de2[j]){
                    diem -= (double)10/15;
                }
                j++;
            }
        }
        cout<<fixed<<setprecision(2)<<diem<<endl;
    }
}