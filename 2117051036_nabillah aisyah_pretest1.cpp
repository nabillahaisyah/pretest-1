#include <iostream>
using namespace std;
int main (){
	//input
	
	string nama_pendaftar;
	string nomor_hp_pendaftar;
	string alamat_pendaftar;
	string alasan_mendaftar;
	
	cout<<"nama pendaftar =";
	getline (cin,nama_pendaftar);
	cout<<"nomor hp pendaftar =";
	getline (cin,nomor_hp_pendaftar);
	cout<<"alamat pendaftar =";
	getline (cin,alamat_pendaftar);
	cout<<"alasan mendaftar =";
	getline (cin,alasan_mendaftar);
	
	//output
	cout <<"nama pendaftar      = "<<nama_pendaftar<<endl;
	cout <<"nomor hp pendaftar  = "<<nomor_hp_pendaftar<<endl;
	cout <<"alamat pendaftar    =" <<alamat_pendaftar<<endl;
	cout <<"alasan mendaftar    =" <<alasan_mendaftar<<endl;
	
	return 0;
}

