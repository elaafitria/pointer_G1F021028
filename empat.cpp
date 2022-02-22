#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	//membuat pointer p1, p2, p3
	int *p1, *p2, *p3;
	
	//memberikan nilai pada variabel
	a = 10, b = 15, c = 27;
	
	//mencetak nilai dan alamat dari masing-masing variabel
	cout << "Nilai dari a = " << a << endl;
	cout << "Alamat dari a = " << &a << endl;
	cout << "Nilai dari b = " << b << endl;
	cout << "Alamat dari b = " << &b << endl;
	cout << "Nilai dari c = " << c << endl;
	cout << "Alamat dari c = " << &c << endl << endl;
	
	//memberikan referensi alamat untuk pointer p1
	p1 = &a;
	cout << "p1 = &a" << endl;
	cout << "Isi dari p1 = " << *p1 << endl;
	cout << "Referensi alamat dari p1 = " << p1 << endl;
	cout << "Alamat dari p1 = " << &p1 << endl << endl;
	
	//memberikan referensi alamat untuk pointer p2
	p2 = &b;
	cout << "p2 = &b" << endl;
	cout << "Isi dari p2 setelah diubah = " << *p2 << endl;
	cout << "Referensi alamat dari p2 = " << p2 << endl;
	cout << "Alamat dari p2 = " << &p2 << endl << endl;
	
	//mengganti nilai variabel dari pointer 
	*p1 = c;
	cout << "*p1 = c" << endl;
	cout << "Isi dari p1 setelah diubah= " << *p1 << endl;
	cout << "Referensi alamat dari p1 = " << p1 << endl << endl;
	
	//mengganti nilai variabel 
	a = *p2;
	cout << "a = *p2" << endl;
	cout << "Isi dari a setelah diubah = " << a << endl;
	cout << "Alamat dari a = " << &a << endl << endl;
	
	//mengganti nilai dari variabel
	b = 6;
	cout << "b = 6" << endl;
	cout << "Isi dari b setelah diubah = " << b << endl;
	cout << "Alamat dari b = " << &b << endl << endl;
	
	//memberi referensi alamat untuk pointer
	p3 = &b;
	cout << "p3 = &b" << endl;
	cout << "Isi dari p3 = " << *p3 << endl;
	cout << "Referensi alamat dari p3 = " << p3 << endl << endl;
	
	//mengganti referensi alamat pointer
	p3 = &c;
	cout << "p3 = &c" << endl;
	cout << "Isi dari p3 = " << *p3 << endl;
	cout << "Referensi alamat dari p3 = " << p3 << endl;
	cout << "Alamat dari p3 = " << &p3 << endl << endl;
	
	//mengganti nilai dari variabel menggunakan nilai dari pointer
	*p1 = *p3;
	cout << "*p1 = *p3" << endl;
	cout << "Isi dari p1 = " << *p1 << endl;
	cout << "Referensi alamat dari p1 = " << p1 << endl;
	cout << "Alamat dari p1 = " << &p1 << endl << endl;
	return 0;
}
