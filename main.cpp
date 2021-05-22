#include <iostream>

using namespace std;

int main()
{
    long long int a, x = 0, y = 1, valor, cont = 2;
    cin >> valor;
    if (valor == 0){
        cout <<endl;
    }else{
        if (valor == 1){
            cout << "0" <<endl;
        }else{
            cout << x << " " << y;
            while (cont < valor){
                a = y;
                y = x + y;
                x = a;
                cout << " " << y;
                cont++;
            }
            cout <<endl;
        }
    }
    return 0;
}
