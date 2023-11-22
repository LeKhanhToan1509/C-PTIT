#include<bits/stdc++.h>

using namespace std;

struct gv{
    int id;
    string name, nganh;
};

int main(){
    int n;
    cin>>n;
    cin.ignore();
    gv a[n];
    for(int i = 0; i < n; i++){
        a[i].id = i+1;
        getline(cin, a[i].name);
        getline(cin, a[i].nganh);
    }
    int q;
    cin>>q;
    cin.ignore();
    while(q--){
        string s;
        getline(cin, s);
        string s1;
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            s1 += toupper(tmp[0]);
        }
        cout<<"DANH SACH GIANG VIEN BO MON "<<s1<<":\n";
        for(gv x : a){
            if(x.nganh == s){
                cout<<"GV"<<setfill('0')<<setw(2)<<x.id<<" "<<x.name<<" "<<s1<<endl; 
            }
        }
    }

}