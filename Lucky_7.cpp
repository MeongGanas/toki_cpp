// Deskripsi
// Dapat dibuktikan bahwa untuk seluruh nilai N ≥ 7, terdapat setidaknya sebuah barisan A yang memenuhi syarat-syarat berikut:

// Seluruh elemen dari A adalah bilangan bulat positif.
// Jumlah dari elemen-elemen A adalah N.
// A terurut tidak menurun.
// Jika K adalah panjang A, maka AK - A1 = 1.
// Diberikan N, keluarkan barisan A mana pun yang memenuhi syarat-syarat tersebut.

// Format Masukan
// Masukan diberikan dalam format berikut:

// N
// Format Keluaran
// Baris pertama berisi sebuah bilangan bulat K yang merupakan panjang A.

// Baris kedua berisi K buah bilangan bulat positif yang merupakan A1, A2, ..., AK.

// Contoh Masukan
// 7
// Contoh Keluaran
// 2
// 3 4
// Penjelasan Contoh
// Salah satu contoh keluaran lain yang memenuhi syarat-syarat tersebut adalah:

// 3
// 2 2 3
// Batasan
// 7 ≤ N ≤ 10.000

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    int length = 0;
    string res = "";

    if (N % 2 == 1){
        int lowest = floor(N / 2);
        res += to_string(lowest) +  " " + to_string(N - lowest);
        length = 2;
    } else {
        string low_temp = "2 ";
        string high_temp = "3 ";

        int left = N - 5;

        while(left > 0){
            if (left % 2 == 0){
                left -= 2;
                low_temp += "2 ";
                length += 1;
            } else {
                left -= 3;
                high_temp += "3 ";
                length += 1;
            }
        }

        res += low_temp + high_temp;
        length += 2;
    }
    
    cout << length << endl;
    cout << res;

    return 0;
}