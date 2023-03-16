#include <iostream>

using namespace std;

void jumlah_bilangan(){
    int x,y;
    cout<< "Masukkan Bilangan X = ";
    cin >> x;
    cout << "Masukkan Bilangan Y = ";
    cin >> y;
    cout<< "Jadi Jumlah X + Y adalah = "<< x+y << endl;
}

void selisih_bilangan(){
    int x,y;
    cout<< "Masukkan Bilangan X = ";
    cin >> x;
    cout << "Masukkan Bilangan Y = ";
    cin >> y;
    cout<< "Jadi Selisih X - Y adalah = "<< x-y << endl;
}

void jumlah_elemen_arry(){
   int array[5] = {5,4,3,2,1};
    cout<< "Jadi Jumlah elemen array adalah = " << array[0]+array[1]+array[2]+array[3]+array[4];
}

void rata_rata_elemen_arry(){
   int array[5] = {2,4,6,8,10};
    cout<< "Jadi Rata-rata elemen array adalah = " << (array[0]+array[1]+array[2]+array[3]+array[4])/5;
}
int main()
{
    jumlah_bilangan();
    selisih_bilangan();
    jumlah_elemen_arry();
    rata_rata_elemen_arry();
    return 0;
}
