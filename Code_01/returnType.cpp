#include <iostream>

using namespace std;

void swapNumber(int& x, int& y){

    int temp = x;
    x = y;
    y = temp;

}

int main(){

    int a = 10, b = 25;

    swapNumber(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
}