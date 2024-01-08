#include <iostream>
using namespace std;
int main(){
    // Ax+B=0 A==0; bo'lsa tenglama yechimga ega emas!
    int a, b; bool natija;
    cout<<"A= "; cin>>a;
    cout<<"B= "; cin>>b;
    natija = a == 0;
    cout << "Mulohaza natijasi: "<<natija<<boolalpha<<" "<<natija;
    return 0;
}