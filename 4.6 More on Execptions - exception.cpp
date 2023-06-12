#include <iostream>
using namespace std;

int main() {
    string menu[] = {"fruits", "chicken", "fish", "cake"};
    try {
        int x;
        cin >> x;
        //your code goes here
        if (x > 3) {
            throw 404;
        }
        cout << menu[x] << endl;
    }
    catch(int e) {
        //and here
        cout << e << " - not found" << endl;
    }
}