#include <iostream>
#include <string>
using namespace std;

class Product {
public :
    string name;
    int code;

    void print() {
        cout << "product " << code << " is " << name << endl;
    }
};

int main() {
    Product p1;
    Product p2;
    cin >> p2.name >> p2.code;
    p1.name = "codetree";
    p1.code = 50;
    p1.print();
    p2.print();
    
    return 0;
}