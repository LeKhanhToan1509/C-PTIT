#include<bits/stdc++.h>

using namespace std;

struct person{
    string name, ns;
};

int cmp(person a, person b){
    vector<string> v1, v2;
    stringstream ss(a.ns);
    string tmp;
    while(getline(ss, tmp, '/')){
        v1.push_back(tmp);
    }
    stringstream ss1(b.ns);
    string tmp1;
    while(getline(ss1, tmp1, '/')){
        v2.push_back(tmp1);
    }
    for(int i = 2; i >=0; i--){
        if(v1[i] != v2[i]){
            return v1[i] < v2[i];
        }
    }
}

int main(){
    int n;
    cin>>n;
    person a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i].name>>a[i].ns;
    }
    sort(a, a+n, cmp);
    cout<<a[n-1].name<<"\n"<<a[0].name;
}