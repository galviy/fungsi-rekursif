#include <iostream>
using namespace std;

int jumlah_digit(int n) {
    if (n == 0) {
        return 0;
    } else {
        cout << n / 10 << endl;
        return n % 10 + jumlah_digit(n / 10);
        
        /*hasil dari n mod 10 selalu digit terakhir dari bil n*/
        /*hasil dari n/10 selalu menghapus nilai paling belakang
        100/10 = 10
        655/10 = 65 -> pendekatan kebawah
         */
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
       cout << jumlah_digit(1982304556) << endl;
}
