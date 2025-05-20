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

void insertionSortAscending(vector<int>& arr){
  int n = arr.size();
  for(int i = 1; i < n; i++){
      int key = arr[i];
      int j = i - 1;
      
      while(j >= 0 && arr[j] > key){
          arr[j+1] = arr[j];
          j--;
      }
      arr[j+1] = key;
  }
}

void insertionSortDescending(vector<int>& arr){
  int n = arr.size();
  for(int i = 1; i < n; i++){
      int key = arr[i];
      int j = i - 1;
      
      while(j >= 0 && arr[j] < key){
          arr[j+1] = arr[j];
          j--;
      }
      arr[j+1] = key;
  }
}

void sortingData(){
  system("cls");
  
  if(userData.empty()){
      cout << "Data masih kosong. Silakan input data terlebih dahulu." << endl;
  } else {
      char pilihan;
      cout << "Pilih metode sorting:" << endl;
      cout << "A. Ascending (kecil ke besar)" << endl;
      cout << "B. Descending (besar ke kecil)" << endl;
      cout << "Pilihan Anda (A/B): ";
      cin >> pilihan;
      
      vector<int> sortedData = userData; // Membuat salinan data
      
      if(pilihan == 'A' || pilihan == 'a'){
          insertionSortAscending(sortedData);
          cout << "\nHasil sorting secara Ascending:" << endl;
      } else if(pilihan == 'B' || pilihan == 'b'){
          insertionSortDescending(sortedData);
          cout << "\nHasil sorting secara Descending:" << endl;
      } else {
          cout << "\nPilihan tidak valid. Kembali ke menu utama." << endl;
          getch();
          return;
      }
      
      // Menampilkan hasil sorting
      for(int i = 0; i < sortedData.size(); i++){
          cout << "Data ke-" << (i+1) << ": " << sortedData[i] << endl;
      }
  }
  
  cout << "\nTekan apa aja deh kembali ke menu...";
  getch();
}

void Sepatah_Kata(){
  system("cls");
  cout << "Mudahan Nilai Bagus" << endl;
  cout << "Tekan apa aja deh kembali ke menu...";
  getch();
}

int main() {
  char pl;
  do {
      dMenu();
      pl = getch();
      switch (pl) {
          case '1':
              inputData();
              break;
          case '2':
              tampilkanData();
              break;
          case '3':
              sortingData();
              break;
          case '4':
              Sepatah_Kata();
              break;
          case '5':
              system("cls");
              cout << "Makasih Yaw telah menggunakan program ini!" << endl;
              break;
          default:
              system("cls");
              cout << "Pilihan Gak Tersedia" << endl;
              cout << "Tekan apa aja deh kembali ke menu...";
              getch();
              break;
      }
  } while (pl != '5');
  
  return 0;
}