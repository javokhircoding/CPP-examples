#include <iostream>
using namespace std;
int main(){
    int km, m, dm, sm, mm;
    cout << "KM= "; cin>>km;
    m = km * 1000;
    dm = m * 10;
    sm = m * 100;
    mm = sm * 10;
    cout<<km<<"km - "<<m<<"metr-"<<dm<<"dm-"<<sm<<"santimetr-"<<mm<<"millimetr";
    return 0;
}