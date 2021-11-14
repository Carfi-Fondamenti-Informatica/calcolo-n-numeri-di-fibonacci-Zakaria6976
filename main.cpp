#include <iostream>
using namespace std;

int main() {
    int n=0, i=0, j=1, k=1, l=1;
    cin >> n;
    if (n>1){
        cout << 1 <<endl;
        for (l=0;l<n-1;l++){
            k=i+j;
            cout << k <<endl;
            i=j;
            j=k;
        }
    }else{
        cout << "errore" <<endl;
    }
    return 0;
}
