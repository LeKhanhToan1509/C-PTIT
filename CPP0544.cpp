#include<bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;

struct p{
    double x, y;
};

double lengh(p a, p b){
    return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

double s(double a, double b, double c){
    return (sqrt((a+b+c)*(a+b-c)*(a-b+c)*(b+c-a)))/16;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        p a, b, c;
        cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
        double m = lengh(a, b), n = lengh(b, c), p = lengh(a, c);
        if(m + n > p && m + p > n && n+p > m){
            int S = s(m, n, p);
            double R = m*n*p/S/2;
            cout<<fixed<<setprecision(3)<<R<<endl;
        }   
        else cout<<"INVALID\n";
    }

}