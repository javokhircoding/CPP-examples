#include <iostream>
using namespace std;
int main(){
    int a, bi, ik, uch; bool natija;
    cout<<"A'ni kiriting: "; cin >> a;
    uch = a - [a/10]*10;
    ik = (a%100 - uch)/10;
    bi = a/100;
    natija = uch > ik and ik > bi;
    cout <<"Mulohaza qiiymati: "<<narija<<boolalpha<<" "<<natija;
    return 0;
}