#include <iostream>
#include <string>
using namespace std;

class Painting {
    public:
        //define the constructor
        Painting(string s)
        {
            name = s;
            cout << name << endl;
        }

    private:
        string name;
        
};
int main() {
    string name;
    cin >> name;

    Painting painting(name);

    return 0;
}