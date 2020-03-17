/*
Nama	: Salma Alifia Shafira
Kelas	: B
NPM 	: 140810180058
*/
	
#include<iostream>
using namespace std;

int main()
{
	
	int n, i, arr[100], cari, awal, akhir, tengah;
	
	cout<<"Masukkan banyak data : ";cin>>n;
	
	for (i=0; i<n; i++)
	{
		cout<<"Data ke-"<<i+1<<" :";
		cin>>arr[i];
	}
	
	cout<<"\nMasukkan data yang akan di cari :"; cin>>cari;
	awal = 0;
	akhir = n-1;
	
	while (awal <= akhir)
	{
		tengah = (awal+akhir)/2;
		if(arr[tengah] < cari)
		{
			awal = tengah + 1;

		}
		else if(arr[tengah] == cari)
		{
			cout<<cari<<" ditemukan pada data ke-"<<tengah+1<<"\n";
			break;
		}
		else
		{
			 akhir = tengah - 1;
		}
		tengah = (awal + akhir)/2;
	}
	
	if(awal > akhir)
	{
		cout<<"Data "<<cari<<" Tidak Ditemukan!";
	}
	
	return 0;
}
