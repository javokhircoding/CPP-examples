#include <iostream>
using namespace std;
int main(){
    int a; bool natija;
    cout <<"Son kiriting: "; cin >> a;
    natija = a>0 and a >= 10000 and a <=99999;
    cout <<"Mulohaza qiymati: "<<natija<<endl;
    natija = a>0 && a >= 10000 && a <=99999;
    cout<<boolalpha<<"Mulohaza qiymati: "<<natija<<endl;
    return 0;

}