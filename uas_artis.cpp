#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Manusia {
	public :
		
		string nama, jenisKelamin, alamat;
		
		Manusia(string nama, string jenisKelamin, string alamat){
   			this->nama    = nama;
   			this->jenisKelamin = jenisKelamin;
   			this->alamat   = alamat;
  		}
		
		void set_nama(string inama, int n) {
			nama = inama;
		}
		void set_jenisKelamin(string ijenisKelamin, int n) {
			jenisKelamin = ijenisKelamin;
		}
		void set_alamat(string ialamat, int n) {
			alamat = ialamat;
		}
		
			string getNama(){
		   return this->nama;
		  }
		  
		  string getJenisKelamin(){
		   return this->jenisKelamin;
		  }
		  
		  string getAlamat(){
		   return this->alamat;
		  }
		
};

class Artis : public Manusia {
		protected :
			string nama, jenis_kelamin, alamat, label;
			int jumlah_lagu, jumlah_album;
		
		public :
		
=
		
		Artis(string nama, string jenis_kelamin, string alamat, string label, int jumlah_lagu, int jumlah_album) : Manusia(nama, jenisKelamin, alamat) {
   			this->label = label;
   			this->jumlah_lagu = jumlah_lagu;
   			this->jumlah_album = jumlah_album;
  		}
//  		
//		void set_npm(string inpm, int n) {
//			npm = inpm;
//		}
//		
//		void set_ipk(string iipk, int n) {
//			ipk = iipk;
//		}
//		
//		string getNPM(){
//		   return this->npm;
//		  }
//		  
//		  string getIPK(){
//		   return this->ipk;
//		  }
		  
		void cetak() {
			cout << "Nama		Jenis Kelamin		Alamat		Label		Jumlah Lagu		Jumlah Album" <<endl;
			
				printf("%-11s %-12s %-19s %-19s %d %d", this->nama.c_str(), this->jenis_kelamin.c_str(), this->alamat.c_str(), this->label.c_str(), this->jumlah_lagu, this->jumlah_album) ;
			
		}
};


int main() {
	int menu;
	string inama, ijenis_kelamin, ialamat, ilabel;
	
	Artis artis("Fikri", "Laki", "Gading", "Spin", "78", "10");
	artis.cetak();
	cout << endl;
	cout << endl;
	
	return 0;
}
