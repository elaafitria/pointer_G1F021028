#include <iostream>
using namespace std;
int main(){
	int x = 5;
	int y = 10;
	int *p1 = &x;
	
	//mengakses data variabel x dari pointer
	cout << "Isi dari *p1 = " << *p1 << endl;
	cout << "Isi x awal = " << x << endl;
	cout << "Alamat memori *p1 = " << &p1 << endl;
    cout << "Alamat memori x = " << p1 << endl << endl;
	
	//mengubah data variabel x dari pointer
	*p1 = 7;
	//melihat isi variabel x 
	cout << "*p1 = 7 "<< endl;
	cout << "Isi x setelah diubah = " << x << endl << endl;
	
	int *p2 = &y;
	//mengubah isi variabel x
	x = *p2;
	cout << "x = *p2 "<< endl;
	cout << "Isi x setelah diubah = " << x << endl << endl;
	
	//mengubah isi variabel x ke y
	x = y;
	cout << "x = y "<< endl;
	cout << "Isi x setelah diubah = " << x << endl << endl;
	 
	//menguubah variabel p1 dan p2
	p1 = &y;
	//mencetak referensi alamat memori pointer
    cout << "referensi alamat memori p1 = " << p1 << endl;
    p2 = &x;
	cout << "referensi alamat memori p2 = " << p2 << endl;
    
    //mengubah data variabel p1 ke p2
    p1 = p2;
    cout << "referensi alamat memori p1 = " << p1 << endl;
    cout << "referensi alamat memori p2 = " << p2 << endl;
	return 0;
}
