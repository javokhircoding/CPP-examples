#include <iostream>
using namespace std;
int main(){
    int a, b, o, n;
    cout << "A uzunlikdagi kesma: "; cin >> a;
    cout << "B uzunlikdagi kesma: "; cin >> b;
    if (a<b){
        n = a/b;
        o = a%b;
        cout <<a<<"uzunlikdagi kesmada "<<n<<"ta "<<b<<"uzunlikdagi kesma bor va ortichchasi "<<o<<" uzunlikka ega"
    }else{
        n = a/b;
        cout <<a<<"uzunlikdagi kesmada "<<n<<"ta "<<b<<"uzunlikdagi kesma bor va ortichchasi yo'q"<<endl;
    }
    return 0;
}