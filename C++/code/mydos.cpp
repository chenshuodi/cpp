#include <iostream>
#include <cstdlib>
#include <ctime>
#include "mod.cpp"
using namespace std;

int main() {
    string code;
    do {
        cout << "</>";
        cin >> code;  // Ìí¼ÓÊäÈë²Ù×÷

        if (code == "exit") {
            cout << "BYE." << endl;
            break;
        } else if (code == "calc") {
            int num1, num2;
            string operators;
            cout << "NUMBER1:" << endl;
            cin >> num1;
            cout << "OPERATOR:" << endl;
            cin >> operators;
            cout << "NUMBER2:" << endl;
            cin >> num2;

            int result = calc(num1, operators, num2);
            if (result == 0) {
                cout << "FALL ON STONY GROUND." << endl;
                cout << "RESULT: " << result << "." << endl;
            }
        } else if (code == "game") {
            game();
        } else {
            cout << code << " NOT AN ORDER." << endl;
        }
    } while (true);

    return 0;
}

