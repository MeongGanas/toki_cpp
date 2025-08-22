// Deskripsi
// Diberikan sebuah grid yang tersusun atas 
// N
// N baris dan 
// M
// M kolom, dengan 
// N
// N dan 
// M
// M keduanya adalah genap. Tiap sel hanya bisa mengandung paling banyak satu pion di setiap waktu. Sebuah gerakan valid adalah melompati sebuah pion melewati pion di sebelahnya ke sebuah sel yang berada di sisi yang berlawanan dari pion yang dilompati. Loncatan ini bisa dilakukan secara horizontal, vertikal, ataupun diagonal, seperti yang diilustrasikan oleh gambar berikut:

		
// Loncatan vertikal	Loncatan horizontal	Loncatan diagonal
// Awalnya, tiap sel yang berada di 
// N
// /
// 2
// N/2 baris pertama dan 
// M
// /
// 2
// M/2 kolom pertama ditempati oleh sebuah pion. Anda ingin melakukan beberapa gerakan sedemikian sehingga semua pion berakhir di 
// N
// /
// 2
// N/2 baris terakhir dan 
// M
// /
// 2
// M/2 kolom terakhir dari grid. Posisi relatif mereka pada akhirnya tidak harus sama dengan posisi relatif mereka pada awalnya. Tentukan apakah hal ini mungkin dilakukan.

// Masukan
// N M
// Keluaran
// Keluarkan Yes apabila semua pion di bagian kiri atas bisa dipindah ke bagian kanan bawah, atau No bila sebalikanya.

// Contoh Masukan 1
// 4 4
// Contoh Keluaran 1
// Yes
// Contoh Masukan 2
// 6 4
// Contoh Keluaran 2
// No
// Penjelasan
// Berikut adalah ilustrasi dari sebuah cara untuk memindahkan semua pion dari bagian kiri atas ke bagian kanan bawah.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N;
    cin >> M;

    if ((N / 2) % 2 == 0 && (M / 2) % 2 == 0){
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}