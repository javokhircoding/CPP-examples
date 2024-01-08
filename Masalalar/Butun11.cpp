#include <iostream>
using namespace std;
int mamin(){
    int a, b, n, o;  //1 ta qo'lqop uchu b santirmetr, a metrli materialdan nechta qo'lqop jufti tikish mumkin, ortganini mm da chhiqarish kk
    cout << "1 ta qo'lqop uchun necha sm: "; cin >> b;
    cout << "Necha metr mato: "; cin >> a;
    a = a * 100; // mert > sm
    n = a/b;
    cout << n/2 <<"Juft qo'lqop tikish mumkin"<<endl;
    o = a%b;
    o *= 10;
    cout << "Ortib qolhan mato "<<o<<"mm";
    return 0;
}