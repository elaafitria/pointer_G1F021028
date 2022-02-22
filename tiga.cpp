#include <iostream>
using namespace std;
int main() {
	int a,b,c;
	//membuat pointer
	int *p1, *p2, *p3;
	//memberikan nilai pada variabel
	a = 10, b = 15;
	
	cout << "Nilai dari a = " << a << endl;
	cout << "Alamat dari a = " << &a << endl;
	cout << "Nilai dari b = " << b << endl;
	cout << "Alamat dari b = " << &b << endl;
	cout << "Nilai dari c = " << c << endl;
	cout << "Alamat dari c = " << &c << endl << endl;
	
	//memberi referensi alamat ke p1
	p1 = &b;
	//mencetak nilai dari p1
	cout << "p1 = &b" << endl;
	cout << "Isi dari p1 = " << *p1 << endl;
	cout << "Referensi alamat dari p1 = " << p1 << endl;
	cout << "Alamat dari p1 = " << &p1 << endl << endl;
	
	//memberi referensi alamat pada p2
	p2 = p1;
	//mencetak nilai, referensi alamat dan alamat dari p2 setelah diubah
	cout << "p2 = &p1" << endl;
	cout << "Isi dari p2 = " << *p2 << endl;
	cout << "Referensi alamat dari p2 = " << p2 << endl;
	cout << "Alamat dari p2 = " << &p2 << endl << endl;
	
	//mendeklarasikan data variabel c
	c = 27;
	cout << "Nilai dari c = " << c << endl;
	cout << "Alamat dari c = " << &c << endl << endl;
	
	//mengganti referensi alamat pada p1
	p1 = &c;
	//mencetak isi, referensi alamat dan alamat dari p1 setelah diubah
	cout << "p1 = &c" << endl;
	cout << "Isi dari p1 = " << *p1 << endl;
	cout << "Referensi alamat dari p1 = " << p1 << endl;
	cout << "Alamat dari p1 = " << &p1 << endl << endl;
	
	//mengganti nilai variabel dengan pointer
	a = *p1;
	//mencetak isi dari p1 setelah diubah 
	cout << "a = *p1" << endl;
	cout << "Isi dari a = " << a << endl;
	cout << "Referensi alamat dari p1 = " << p1 << endl << endl;
	
	//mengganti referensi alamat untuk pointer p3
	p3 = &b;
	//mencetak isi dari p3 setelah diubah 
	cout << "p3 = &b" << endl;
	cout << "Isi dari p3 = " << *p3 << endl;
	cout << "Referensi alamat dari p3 = " << p3 << endl << endl;
	
	//mengganti nilai variabel
	*p2 = 8;
	//mencetak isi dari p2 setelah diubah 
	cout << "*p2 = 8" << endl;
	cout << "Isi dari p2 = " << *p2 << endl;
	cout << "Referensi alamat dari p2 = " << p2 << endl;
	cout << "Alamat dari p2 = " << &p2 << endl << endl;
	return 0;
}
