#include <iostream>
using namespace std;
int main(){
	int x = 5, y = 10;
	int *p1, *p2;
	
	//mencetak data variabel awal x dan y
	cout << "Isi x awal = " << x << endl;
	cout << "Alamat memori x = " << &x << endl;
	cout << "Isi y awal = " << y << endl << endl;
	cout << "Alamat memori y = " << &y << endl;
	
	//memberi alamat referensi untuk pointer p1
	p1 = &y;
	cout << "Memberi referensi alamat p1 = &y" << endl;
	cout << "Isi dari *p1 = " << *p1 << endl;
    cout << "Referensi alamat dari p1 = " << p1 << endl;
    cout << "Alamat memori *p1 = " << &p1 << endl << endl;
    
    //memberi alamat referensi untuk pointer p2
	p2 = &x;
    cout << "Memberi referensi alamat p2 = &x" << endl;
	cout << "Isi dari *p2 = " << *p2 << endl;
    	//cout << "Alamat memori x = " << p2 << endl;
    cout << "Referensi alamat dari p2 = " << p2 << endl;
    cout << "Alamat memori *p2 = " << &p2 << endl << endl;
    
	//mengubah data variabel menggunakan pointer
	*p1 = *p2;
    cout << "Mengubah *p1 <-- *p2" << endl;
    cout << "Isi dari *p1 = " << *p1 << endl;
    cout << "Alamat memori y = " << p1 << endl;
    cout << "Alamat memori *p1 = " << &p1 << endl << endl;
    cout << "Isi dari *p2 = " << *p2 << endl;
    cout << "Alamat memori x = " << p2 << endl;
    cout << "Alamat memori *p2 = " << &p2 << endl << endl;
    
    //mengubah data variabel p2 dari pointer
	*p2 = 7;
    cout << "Mengubah *p2 = 7" << endl;
    cout << "Isi dari *p2 setelah diubah = " << *p2 << endl;
    cout << "Referensi alamat dari p2 = " << p2 << endl;
    
    //mengubah alamat referensi p1 menjadi p2
    p1 = p2;
	cout << "Memberi referensi alamat p1 = p2" << endl;
	//mencetak isi dan alamat serta referensi alamat p1 setelah diubah
	cout << "Isi dari *p1 = " << *p1 << endl;
    cout << "Alamat memori y = " << p1 << endl;
    cout << "Referensi alamat dari p1 = " << p1 << endl;
    cout << "Alamat memori *p1 = " << &p1 << endl << endl;
    
    //mengubah alamat referensi p1 menjadi &x
    p1 = &x;
    //mencetak p1
    cout << "Mengubah referensi alamat p1 menjadi &x" << endl;
    cout << "Isi dari *p1 = " << *p1 << endl;
    cout << "Referensi alamat dari p1 = " << p1 << endl << endl;
    
    //mengubah data variabel p1 menjadi y
	*p1 = y;
    //mencetak p1 setelah diubah ke y
    cout << "Mengubah *p1 menjadi y" << endl;
    cout << "Isi dari *p1 = " << *p1 << endl;
    cout << "Alamat referensi dari *p1 = " << p1 << endl << endl;
	
	return 0;
}
