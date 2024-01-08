#include <iostream>
using namespace std;
int main(){
    int a, b, c, son1, son2, son3;
    cout<<"A= "; cin >> a;
    cout<<"B= "; cin >> b;
    cout<<"C= "; cin >> c;
    son1 = (a<b && a<c)*a + (b<a && b<c)*b + (c<a && c<b)*c;
    son3 = (b<a && c<a)*a + (a<b && c<b)*b + (a<c && b<c)*c;
    son2 = ((b<a && a<c)||(c<a && a<b))*a;
    son2 = son2 + ((a<b && b<c)||(c<b && b<a))*b;
    son2 = son2 + ((a<c && c<b)||(b<c && c<a))*c;
    cout<< son1 << '<' << son2 << '<' << son3;
    return 0;
}