// Deskripsi
// Terdapat M peserta Blain’s Competition of Informatics yang akan menginap di suatu hotel yang terdiri dari N kamar. Kamar ke-i pada hotel memiliki jarak Ai dari pintu masuk hotel. Jarak kamar ke-i dan kamar ke-j adalah |Ai - Aj|. Bisa saja terdapat dua kamar berbeda yang memiliki posisi yang sama.

// Setiap peserta akan menginap di sebuah kamar, dan setiap kamar hanya boleh ditempati oleh paling banyak satu peserta. Di hotel tersebut tidak terdapat Wi-Fi, sehingga mereka memutuskan bermain gim jaringan area lokal. Agar koneksinya tetap bagus, carilah jarak maksimum terkecil yang mungkin dari seluruh konfigurasi kamar hotel tersebut. Sebuah konfigurasi kamar adalah sebuah cara penempatan tiap peserta ke sebuah kamar. Jarak maksimum dari sebuah konfigurasi kamar adalah jarak terbesar antar dua kamar peserta mana pun.

// Format Masukan
// Masukan diberikan dalam format berikut:

// N M
// A1 A2 .. AN
// Format Keluaran
// Sebuah bilangan bulat yang menyatakan jarak maksimum terkecil dari konfigurasi kamar peserta.

// Contoh Masukan 1
// 3 3
// 1 2 3
// Contoh Keluaran 1
// 2
// Contoh Masukan 2
// 5 3
// 3 1 6 4 5 
// Contoh Keluaran 2
// 2
// Penjelasan
// Pada contoh pertama, banyaknya peserta sama dengan banyaknya kamar, jadi setiap kamar ditempati oleh tepat satu peserta. Maka, jarak maksimum dari konfigurasi kamar tersebut adalah |3-1| = 2

// Pada contoh kedua, agar mendapat konfigurasi dimana jarak maksimumnya minimal, peserta dapat mengisi kamar pertama, keempat, dan kelima. Maka, jarak maksimumnya adalah |5-3| = 2.

// Batasan
// 1 ≤ M ≤ N ≤ 105.
// 1 ≤ Ai ≤ 109.

#include <bits/stdc++.h>
using namespace std;

int solve(int N, int M, vector<int> A){
    sort(A.begin(), A.end());

    int res = A[N-1];

    for (int i = 0; i < N-M+1; i++){
        int jarak = A[i+M-1] - A[i];
        if (jarak < res){
            res = jarak;
        }
    }

    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N; cin >> M;

    vector<int> A(N);

    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    cout << solve(N, M, A);
    
    return 0;
}