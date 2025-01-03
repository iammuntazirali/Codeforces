#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,number(0);
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(s[1] == '+'){
            number += 1;
        }
        else{
            number -= 1;
        }
    }
    cout << number << endl;
}


// ---------------------------------------------------------------------------------------------------------------------------------------------------------------------


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count = 0;
    while (n--){
        string s;
        cin >> s;
        if(s[1] == '+'){
            count++;
        }
        else{
            count--;
        }
    }
    cout << count << endl;
}



// ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x(0);
    cin >> n;
    string s;
    while(n--){
        cin >> s;
        if(s[1] == '+'){
            ++x;
        }
        else{
            --x;
        }
    }
    cout << x << endl;
}