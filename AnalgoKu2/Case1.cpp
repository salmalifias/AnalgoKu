/*
Nama	: Salma Alifia Shafira
Kelas	: B
NPM 	: 140810180058
*/

#include<iostream>
using namespace std;

int main(){
    int i, n, maks;

    cout << "Jumlah data : "; cin >> n;
    int x[n];
    for(i=1; i<=n; i++){
        cout << "x [ " << i <<" ] : "; cin >> x[i];
    }
    maks = x[1];
    i = 2;
    while(i<n){
        if(x[i] > maks){
            maks = x[i];
        }
        i = i+1;
    }
    cout << "Maks = " << maks;
}


