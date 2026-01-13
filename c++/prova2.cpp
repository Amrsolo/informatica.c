/*#include<iostream>
using namespace std;

FRAZIONE(){}
FRAZIONE(int n, int d){}
FRAZIONE(int a,float b){}
*/
 #include <iostream>
using namespace std;

class FRAZIONE {
private:
    int numeratore;
    int denominatore;

public:
    // Costruttore vuoto
    FRAZIONE() {
        numeratore = 0;
        denominatore = 1;
    }

    // Costruttore con due interi
    FRAZIONE(int n, int d) {
        numeratore = n;
        denominatore = d;
    }

    // Costruttore con int e float
    FRAZIONE(int a, float b) {
        numeratore = a;
        denominatore = (int)b;
    }

    // Metodo per stampare la frazione
    void stampa() {
        cout << numeratore << "/" << denominatore << endl;
    }
};

int main() {
    FRAZIONE f1;
    FRAZIONE f2(3, 4);
    FRAZIONE f3(5, 2.7);

    f1.stampa();
    f2.stampa();
    f3.stampa();

    return 0;
}
