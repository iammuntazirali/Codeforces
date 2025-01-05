#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,a,b;
    cin >> n >> k;
    for(int i = 0; i < k; ++i){
        cin >> a;
        if(a==0){
            cout << i << endl;  
            return 0;
        }
    }
    for(int i = k; i < n; ++i){
        cin >> b;
        if(b!=a){         
            cout << i << endl;  
            return 0;
        }
    }
    cout << n << endl;         
}








































































