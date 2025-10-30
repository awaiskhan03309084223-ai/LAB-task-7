#include<iostream>
using namespace std;
int main()
{
    int c;
    do {
        cout << "1.Add 2.Sub 3.Exit: ";
        cin >> c;
        switch (c) {
        case 1: {
            int a, b;
            cout << "Nums: ";
            cin >> a >> b;
            cout << "answer=" << a + b << endl;
            break;
        }
        case 2: {
            int a, b;
            cout << "Nums: ";
            cin >> a >> b;
            cout << "answer=" << a - b << endl;
            break;
        }
        case 3: break;
        default: cout << "Invalid\n";
        }
    } while (c != 3);
    return 0;
}