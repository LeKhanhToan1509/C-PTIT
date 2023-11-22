#include<bits/stdc++.h>

using namespace std;

int snt(int n){
    if(n < 2)   return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0)  return 0;
    }
    return 1;
}
int cs(int n){
    int sum = 0;
    while(n){
        sum += n%10;
        n/=10;
    }
    return sum;
}

int uoc(int n){
    int sum = 0;
    while(n%2==0){
        sum += 2;
        n/=2;
    }
    for(int i = 3; i*i <= n; i+=2){
        while(n%i==0){
            sum += cs(i);
            n/=i;
        }
    }
    if(n > 2)   sum += cs(n);
    return sum;
}

int check(int n){
    return uoc(n) == cs(n) && !snt(n);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;       
        if(check(n))    cout<<"YES\n";
        else cout<<"NO\n";
    }

}