#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	char lagi;
	int pilih, a, b, hasil;

	menu:
	system ("cls");
	            cout << "================================" << endl;
	            cout << "| Kalkulator Sederhana         |" << endl;
	            cout << "================================" << endl;
	            cout << "|    1. Penjumlahan            |" << endl;
	            cout << "|    2. Pengurangan            |" << endl;
	            cout << "|    3. Perkalian              |" << endl;
	            cout << "|    4. Pembagian              |" << endl;
	            cout << "|    5. Perpangkatan           |" << endl;
	            cout << "|    6. Akar	            |" << endl;
	            cout << "|    7. Keluar                 |" << endl;
	            cout << "================================" << endl;
	            cout << "Masukkan pilihan anda : ";
	            cin >> pilih;
	if (pilih==1)
	{
		cout << "Masukkan Bilangan Pertama : ";
		cin >> a;
		cout << "Masukkan Bilangan Kedua   : ";
		cin >> b;
		hasil = a + b;
		cout << "hasilnya adalah : " << hasil;
		cout << endl;
		cout << "Masih lanjut [y/t]? ";
		cin >> lagi;
		if (lagi == 'y')
		goto menu;
		else goto keluar;
	}
	else if (pilih==2) 
	{
		cout << "Masukkan Bilangan Pertama : ";
		cin >> a;
		cout << "Masukkan Bilangan Kedua   : ";
		cin >> b;
		hasil = a - b;
		cout << "hasilnya adalah : " << hasil;		
		cout << endl;
		cout << "Masih lanjut [y/t]? ";
		cin >> lagi;
		if (lagi == 'y')
		goto menu;
		else goto keluar;
	}
	else if (pilih==3) 
	{
		cout << "Masukkan Bilangan Pertama : ";
		cin >> a;
		cout << "Masukkan Bilangan Kedua   : ";
		cin >> b;
		hasil = a * b;
		cout << "hasilnya adalah : " << hasil;
		cout << endl;
		cout << "Masih lanjut [y/t]? ";
		cin >> lagi;
		if (lagi == 'y')
		goto menu;
		else goto keluar;
	}
	else if (pilih==4) 
	{
		cout << "Masukkan Bilangan Pertama : ";
		cin >> a;
		cout << "Masukkan Bilangan Kedua   : ";
		cin >> b;
		hasil = a / b;
		cout << "hasilnya adalah : " << hasil;
		cout << endl;
		cout << "Masih lanjut [y/t]? ";
		cin >> lagi;
		if (lagi == 'y')
		goto menu;
		else goto keluar;
	}
	else if (pilih==5) 
	{
		cout << "Masukkan Bilangan Pertama : ";
		cin >> a;
		cout << "Masukkan Bilangan Kedua   : ";
		cin >> b;
		hasil = pow(a, b);
		cout << "hasilnya adalah : " << hasil;
		cout << endl;
		cout << "Masih lanjut [y/t]? ";
		cin >> lagi;
		if (lagi == 'y')
		goto menu;
		else goto keluar;
	}
	else if (pilih==6) 
	{
		cout << "Masukkan Bilangan Pertama : ";
		cin >> a;
		hasil = sqrt(a);
		cout << "hasilnya adalah : " << hasil;
		cout << endl;
		cout << "Masih lanjut [y/t]? ";
		cin >> lagi;
		if (lagi == 'y')
		goto menu;
		else goto keluar;
	}
	else if (pilih==7) 
	{
		keluar:
		cout << endl;
        cout << "Terima kasih.";
	}
	else 
	{
		cout << "Maaf input yang anda masukkan salah, silahkan coba lagi" << endl;
		goto menu;
	}

return 0;

}
