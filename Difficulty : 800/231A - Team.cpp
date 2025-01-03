#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,number(0);
    cin >> n;
    while(n--){
        int petya,vasya,tonya;
        cin >> petya >> vasya >> tonya;
        if(petya+vasya+tonya>=2){
            number += 1;
        }
    }
    cout << number << endl;
}


// ------------------------------------------------------------------------------------------------------------------------------------------------------


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count = 0;
    while(n--){
        int petya,vasya,tonya;
        cin >> petya >> vasya >> tonya;
        if(petya+vasya+tonya>=2){
            count++;
        }
    }
    cout << count << endl;
}



















