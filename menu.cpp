#include <iostream>
#include <conio.h>
using namespace std;

const int MAX_SIZE = 100; // Ukuran maksimum array
int array[MAX_SIZE]; // Array dibuat global agar bisa digunakan di semua fungsi
int n; // Jumlah elemen array

void dMenu(){
system("cls");
cout<<"Aplikasi Sorting Array"<<"\n";       
cout<<"1. Masukan Data"<<"\n";
cout<<"2. Tampilkan data"<<"\n";
cout<<"3. Sorting data"<<"\n";
cout<<"4. Sepatah Kata"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        
}

void inputData() {
    system("cls");
    cout << "Masukkan jumlah elemen array (maksimal " << MAX_SIZE << "): ";
    cin >> n;
    if (n > MAX_SIZE) {
        cout << "Jumlah elemen melebihi batas maksimum!" << endl;
        getch();
        return;
    }
    cout << "Masukkan " << n << " angka:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> array[i];
    }
}

void showData() {
  system("cls");
    if (!dataTersedia) {
        cout << "\nBelum ada data! Silakan input data terlebih dahulu.\n";
    } else {
        cout << "\nIsi array saat ini: ";
        for (int i = 0; i < N; i++) {
            cout << data[i] << " ";
        }
    }
    cout << "\n\nTekan tombol untuk kembali...";
    getch();
}

void insertionSort() {
    if (!dataTersedia) {
        cout << "\nBelum ada data yang bisa diurutkan!\n";
        cout << "Silakan input data terlebih dahulu.\n";
        getch();
        return;
    }

    system("cls");
    cout << "=== PROSES INSERTION SORT ===\n\n";

    for (int i = 1; i < N; i++) {
        int key = data[i];
        int j = i - 1;

        cout << "Langkah ke-" << i << " (key = " << key << "):\n";

        // Proses geser elemen yang lebih besar dari key
        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j--;
        }

        data[j + 1] = key;

        // Tampilkan array setelah langkah ini
        cout << "Array: ";
        for (int k = 0; k < N; k++) {
            cout << data[k] << " ";
        }
        cout << "\n\n";
    }

    cout << "=== HASIL AKHIR SETELAH SORTING ===\n";
    cout<<  "Metode Sorting Insertion Ascending";
    for (int i = 0; i < N; i++) {
        cout << data[i] << " ";
    }

    cout << "\n\nTekan tombol untuk kembali...";
    getch();
}

void SepatahKata(){
  system("cls");
  cout<<"Bersatu kita tegus bercerai kawin lagi";
  cout<<"Poliban 2025";
  getch();
}


int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    mPertama("pertama");
    inputData();
    break;
   case '2':
    mPertama("ke- dua");
    showData();
    break;  
    case '3':
    mPertama("ke- tiga");
     insertionSort();
    break;
    case '4':
    SepatahKata();
    break;
    case '5':
    cout<<"\nTerimakasih sudah mencoba program saya :)"<<endl;
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}