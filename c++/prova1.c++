#include <iostream>

using namespace std;

class frezione{
    private;

    int nem;
    int dem;

    public:
    frezione(int n, int d){
        nem=n;
        dem=d;          
}

    void stampa(){
        cout<<nem<<"/"<<dem<<endl;
    }
};