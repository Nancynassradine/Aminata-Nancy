#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void convertToBinary(int num) {
    if (num == 0) {
        return;
    }
    convertToBinary(num / 2);
    cout << (num % 2)<<endl;
}

int main() {
    int input;

    while (true) {
        cout << "Enter a decimal number : ";
        cin >> input;

        if (input == -1) {
            cout << "The program stopped." << endl;
            break;
        }

        if (input == 0) {
            cout << "The Binary value of decimal no. " << input << " is : 0" << endl;
        } else {
            cout << "The Binary value of decimal no. " << input << " is : ";
            convertToBinary(input);
            cout << endl;
        }
    }

    return 0;
}
