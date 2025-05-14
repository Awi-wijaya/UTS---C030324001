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

void outputData() {
    system("cls");
    cout << "Array yang diinput: ";
    for (int i = 0; i < n; ++i) {
        cout << array[i];
        if (i != n - 1) cout << ", "; 
    }
    getch();
}

void bubbleSort() {
    system("cls");
    // Melakukan bubble sort
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                // Tukar array[j] dan array[j + 1]
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // Menampilkan hasil setelah pengurutan
    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; ++i) {
        cout << array[i];
        if (i != n - 1) cout << ", "; 
    }
    getch();
}

void SepatahKata(){
  system("cls");
  cout<<"Bersatu kita teguh bercerai kawin lagi";
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