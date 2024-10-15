#include <iostream>

using namespace std;


//Perpangkatan 2^3 --> powerby(2,3)
int powerby(int x,int y){
  if (y == 0){
    return 1;
  }
  return powerby(x, y-1)*x;
}

//perkalian 2x3 --> multiplication(2,3)
int multiplication(int x ,int y){
    if (y == 0){
        return 0;
    }
    return x + multiplication(x,y-1);
}

//fibonnaci 0,1,1,2,3,4 f(4) --> 3,fibonnaci(4)
int fibonnaci(int n){
    if (n == 0 || n == 1){
        return n;
    }
    return fibonnaci(n-1) + fibonnaci(n-2);
}
//hitungbunga hitungbunga(tabungan awal, bunga persentase, berapa lama)
int hitungbunga(int duitawal, int bunga, int n){
    if (n == 0){
        return duitawal;
    }
    return hitungbunga(duitawal + duitawal*bunga/100,bunga, n-1);
}

//perkembangan_bakteri(berapa banyak awal, berkembang berapa banyak;contoh 2x, berapa lama)
int perkembangan_bakteri(int awal, int perkembangan, int n){
    if (n == 0){
        return awal;
    }
    return perkembangan_bakteri(awal*perkembangan, perkembangan, n-1);
}

//banyak cara hanoi tower()
int hanoi_tower(int n){
    if (n == 0){
        return 1;
    }
    return 2*hanoi_tower(n-1)+1;
}



int main(){
    cout << hanoi_tower(4) << endl;
}
