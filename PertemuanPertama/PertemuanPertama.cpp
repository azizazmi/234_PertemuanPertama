// PertemuanPertama.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	//Begin
	//numeric nAlas, nTinggi, nLuas
	//display 'Masukkan Alas = '
	//accept nAlas
	//display 'Masukkan Tinggi = '
	//accept nTinggi
	//compute nLuas = nAlas*nTinggi/2
	//display 'Luasnya = ' + nLuas
	//End

	float nAlas, nTinggi, nLuas;
	cout << "Masukkan Alas = ";
	cin >> nAlas;
	cout << "Masukkan Tinggi = ";
	cin >> nTinggi;
	nLuas = nAlas * nTinggi / 2;
	cout << "Luasnya = " << nLuas;
	
	int panjang, lebar, luas;
	cout << "Masukkan panjang = ";
	cin >> panjang;
	cout << "Masukkan lebar = ";
	cin >> lebar;
	luas = panjang * lebar;
	cout << "Luasnya adalah = " << luas;


}

