#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        int cnt = 0, chan = 0, le = 0;
        while(ss >> tmp){
            int num = stoi(tmp);
            if(num % 2 == 0) chan++;
            else le++;
            cnt++;
        }
        if((chan > le && cnt % 2 == 0) || (le > chan && cnt % 2 == 1)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
