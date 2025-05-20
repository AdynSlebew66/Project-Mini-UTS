#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;


void dMenu(){
system("cls");
cout<<"Aplikasi Sorting Bubblqe"<<"\n";       
cout<<"1. Memasukkan Data"<<"\n";            
cout<<"2. Menampilkan Data"<<"\n";            
cout<<"3. Sorting"<<"\n";           
cout<<"4. Sepatah Kata"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}

void inputData(){
  system("cls");
  userData.clear(); // Menghapus data lama jika ada
  
  int jumlah;
  cout << "Masukkan jumlah data yang ingin diinput: ";
  cin >> jumlah;
  
  for(int i = 0; i < jumlah; i++){
      int nilai;
      cout << "Masukkan data ke-" << (i+1) << ": ";
      cin >> nilai;
      userData.push_back(nilai);
  }
  
  cout << "\nData berhasil disimpan!" << endl;
  cout << "Tekan apa saja untuk kembali ke menu...";
  getch();
}

void tampilkanData(){
  system("cls");
  
  if(userData.empty()){
      cout << "Data masih kosong. Silakan input data terlebih dahulu." << endl;
  } else {
      cout << "Berikut adalah data yang telah diinputkan:" << endl;
      for(int i = 0; i < userData.size(); i++){
          cout << "Data ke-" << (i+1) << ": " << userData[i] << endl;
      }
  }
  
  cout << "\nTekan apa saja untuk kembali ke menu...";
  getch();
}
