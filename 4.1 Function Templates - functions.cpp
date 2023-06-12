#include <iostream>
using namespace std;

//your code goes here
template <class T>
T myMax(T a, T b) {
    if (a<b) {
        return b;
    } else {
        return a;
    }
}


int main () {
    double x, y;
    cin>>x>>y;
    int a, b;
    cin>>a>>b;
    cout << myMax(x, y) << endl;
    cout << myMax(a, b) << endl;
}