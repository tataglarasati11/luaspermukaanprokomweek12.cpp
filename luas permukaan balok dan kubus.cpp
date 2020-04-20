
#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;
void header ();
void Kubus ();
void Balok ();
int hasil(int sisi, int panjang,int lebar) ;

int main()
{
	int pilih;
	char ulang;
do{
		header ();
	    cout << "Pilihan:" << endl;
	    cout << "1. Luas Permukaan Kubus "<< endl ;
		cout << "2. Luas Permukaan Balok "<< endl;
		cout << "Masukkan piihan anda : ";
	    cin	 >> pilih;
	    system("cls");
	    switch (pilih){
	    	case 1 :
				Kubus ();
			break ;
			
			case 2 :  
				Balok  ();
			break ;
			default:
				cout<<"Pilihan yang anda inginkan tidak ditemukan"<<endl;
			break;
			
		}
		cout << "apakaah ingin menghitung lagi ? "<<endl ;
		cout << "Y/T"<<endl;
		cout << " pilih : ";
		cin >> ulang;	
		system("cls");
	}while(ulang=='Y'||ulang=='y');
	cout << "Terima kasih telah menggunakan program saya untuk menghitung"<<endl<<endl;
	getch ();
	cout << "=============================="<<endl;	
	cout << "Tatag Indah Larasati"<<endl;
	cout << " D04217025"<<endl;
    cout << "=============================="<<endl;	
}
	
	void header (){
		cout << "======================================================"<< endl;
		cout << "Penggunaan Aritmatika Pada Luas Permukaan Bangun Ruang"<< endl;
		cout << "======================================================"<< endl;
	}
		
	void Kubus () {
		int s;
		int pilih;
		int luas;
		int harga;
		int total;
			  	header ();
	    		cout << "Tania mempunyai sebuah kubus dengan sisi : "  ;
	    		cin >> s;
	    		luas = 6*s*s;
				cout << "Maka luas permukaan kubus adalah " <<luas<<" m^2" 					<< endl ;
				getch ();
	    		cout << "Tania ingin membungkus sebuah kubus dengan kertas kado," <<endl; 
	    		getch ();
				cout << "apabila harga setiap m^2 kertas kado adalah Rp ";
				cin >> harga;
				getch ();
				total = harga*luas;
				cout << "maka uang yang harus dikeluarkan tania untuk membungkus kubus tersebut adalah Rp " <<total<<"\n";
				getch ();
	} 
	
void Balok (){
	int p ;
	int l ;
	int t;
	int luas;
	int harga;
	int total;
				header ();
				cout << "Pak Tarno mempunyai box berbentuk balok :  " 	<< endl ;
				getch ();
				cout << "Panjang : " ;
				cin >> p;
				cout << "Lebar   : " ;
				cin >> l;
				cout << "Tinggi  : " ;
				cin >> t;
				luas = 2*((p*l)+(p*t)+(l*t));
				cout << "Maka Luas Permukaan box tersebut adalah "<<luas<<" m^2" <<endl ;
				getch ();
				cout << "suatu hari Pak Tarno ingin mengecat box tersebut. Jika biaya pengecetan setiap 1m^2 adalah Rp " ;
				cin >> harga;
				getch ();
				total = harga*luas;
				cout <<"maka biaya yang dibutuhkan Pak Tarno untuk mengecat box tersebut adalah Rp "<<total<<"\n";
				getch ();
	    	}

