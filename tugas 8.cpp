

#include <iostream> 
using namespace std; 
 
 
// prototype 
int tambahkan(int a, int b); 
 
 
// variabel global 
 	int a, b; 
 
 
 // program utama 
 int main (){ 
 		cout << "Masukan Nilai A : "; 
 		cin >> a; 
 		cout << "Masukan Nilai B : "; 
 		cin >> b; 
 		cout << "Hasil : " << tambahkan (a, b) << endl; 
 		return 0; 
 } 
 
 
 int tambahkan (int a, int b){ 
 		return a + b; 
 } 
