#include<bits/stdc++.h>

using namespace std;

int main(){
    string tmp;
    int first = 1;
    while(cin>>tmp){
        char res = tmp[tmp.size()-1];
        if(res == '.' || res == '!' || res == '?'){
            tmp.pop_back();
            cout<<tmp<<endl;
            first = 1;
            continue;
        }
        if(first){
            cout<<(char)toupper(tmp[0]);
            for(int i = 1; i < tmp.size(); i++){
                cout<<(char)tolower(tmp[i]);
            }
            cout<<" ";
            first = 0;
        }
        else{
            for(char x : tmp){
                cout<<(char)tolower(x);
            }
            cout<<" ";
        }
        
    }        

}
