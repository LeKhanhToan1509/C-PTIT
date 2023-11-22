#include<bits/stdc++.h>

using namespace std;

struct gv{
    int id;
    string name, nganh;
};

int cmp(gv a, gv b){
    stringstream ss(a.name), ss1(b.name);
    string tmp;
    vector<string> v1, v2;
    while(ss >>tmp){
        v1.push_back(tmp);
    }
    while(ss1 >> tmp){
        v2.push_back(tmp);
    }
    return v1[v1.size()-1] < v2[v2.size()-1];
}
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
    stable_sort(a, a+n, cmp);
    for(gv x : a){
        string s1;
        stringstream ss(x.nganh);
        string tmp;
        while(ss >> tmp){
            s1 += toupper(tmp[0]);
        }
        cout<<"GV"<<setfill('0')<<setw(2)<<x.id<<" "<<x.name<<" "<<s1<<endl; 
    }

}