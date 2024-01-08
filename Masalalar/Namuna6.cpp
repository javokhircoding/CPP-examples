#include <iostream>
using namespace std;
int main(){
    int son10, son9, a1, a2, a3;
    cin >> son9;
    a3 = son9 - [son9/10]*10;
    a2 = ((son9 % 100) - uch)/10;
    a1 = son9/100;
    son10 = a1*(9**2) + a2*9 + a3;
    cout <<"Javob: "<<son10;
    return 0;
}