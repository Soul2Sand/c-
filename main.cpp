/*
+==========================+
|                                                         |
|                                                         |
| by: *****                                          |
|                                                         |
|                                                         |
+==========================+
*/
#include <iostream>
#include <string>

using namespace std;

int main() {

// variabel
int bil1,bil2,pil;
int umur;
int secretnum = 7;
int guess;
int guesscount = 0;
int guesslimit = 3;
bool outofguesses = false;
char op;
string nama;
//*********************
  
// judul
cout << "Pemrograman C++" << endl;
cout << endl;
cout << endl; 
//**********************
  
// perkenalan diri
cout << "Masukkan nama kamu > ";
getline(cin, nama); // input nama
cout << "Masukkan umur kamu > ";
cin >> umur; // input umur
cout << endl;
// *********************

// sapaan
cout << "Hallo " << nama << "!" << endl;
cout << endl;
cout << endl;
// *********************

// memilih 
cout << "Pilih" << endl;
cout << endl;
cout << "1. Kalkulator" << endl;
cout << "2. Tebak Angka" << endl;
cout << endl;
// ***********************

// input pilihan
cout <<"Masukkan Pilihan:";
  cin >> pil; // inpit pilihan
// ***********************

// menjalankan script
switch(pil){
  // kalkulator
  case 1:{
    cout << "Masukkan bilangan perama >";
    cin >> bil1;
    cout << "Masukkan operator >";
    cin >> op;
    cout << "Masukkan bilangan kedua >";
    cin >> bil2;
    int result;
    if(op == '+'){
      result = bil1 + bil2;
    } else if(op == '-'){
      result = bil1 - bil2;
    } else if(op == '/'){
      result = bil1 / bil2;
    } else if(op == '*'){
      result = bil1 * bil2;
    } else{
      cout << "Terjadi Kesalahan";
    }
    // hasil
    cout << endl;
    cout << "+=-=-=-=-=-=-=-=-=-=-=-=+" << endl;
    cout << "| Hasil~ " << result << "              |" << endl;
    cout << "+=-=-=-=-=-=-=-=-=-=-=-=+" << endl;
    // ****************
    return 0;
  }
  // *********************************

  // Game Tebak Gambar
  case 2:{
    while(secretnum != guess && !outofguesses) {
      if(guesscount < guesslimit){
        cout << endl;
        cout << "Masukkan angka•"; // input angka
        cin >> guess;
        guesscount++;
      } else{
        outofguesses = true;
      }
    }
    if(outofguesses){
      cout << endl;
      cout << "Kamu Kalah" << endl;
    } else{
      cout << endl;
      cout << "Kamu Menang!" << endl;
    }
    return 0;
  }
}
// *********************************

}