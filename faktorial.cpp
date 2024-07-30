#include <iostream>
using namespace std;

int faktorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return faktorial(n - 1) * n;
    }
}
int main() {
    cout << faktorial(5) << endl;
    /*
    faktorial (5) = faktorial(4)*5
                  = (faktorial (3)*4)*5
                  = ((faktorial (2)*3)*4)*5
                  = (((faktorial 1*2)*3)*4)*5
                  = (((1*2)*3)*4)*5
    */
}
