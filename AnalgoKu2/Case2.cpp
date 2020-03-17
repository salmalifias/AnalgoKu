/*
Nama	: Salma Alifia Shafira
Kelas	: B
NPM 	: 140810180058
*/

#include <iostream>
using namespace std;

main()
{
    int n, cari, A[100], index, jwb;
	bool ketemu = false;
	
	cout << "Masukan banyak data =  "; cin >> n;
	
	for(int i=0; i<n; i++)
	{
	   cout << "Data ke-" << i+1 << " : ";
	   cin >> A[i];
	}
	
	cout << "\nMasukan data yang akan dicari : "; cin >> cari;
	  
	for(int i=0; i<n; i++){
	    if(A[i] == cari){
	 	    ketemu = true;
	        index = i;
	    	i = n;
	   }
	}
	
	if(ketemu == true){
	   cout << "\nData ketemu! pada data ke-" << index+1;
	}
	else{
	   cout << "\nMaaf. Data tidak ditemukan!";
	}
	
	return 0;
}
