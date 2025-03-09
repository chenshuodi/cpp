#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int calc(int a, string z, int b) {
    if (z == "+") {
        return a + b;
    } else if (z == "-") {
        return a - b;
    } else if (z == "*") {
        return a * b;
    } else {
        return 0;
    }
}

int game() {
    srand(time(0));
    int ans = rand() % 100 + 1;
    int guess;

    do {
        cout << "GUESS THE NUMBER (1-100): ";
        cin >> guess;

        if (guess < ans) {
            cout << "NO, YOUR ANSWER IS SMALL." << endl;
        } else if (guess > ans) {
            cout << "NO, YOUR ANSWER IS BIG." << endl;
        }
    } while (ans != guess);

    cout << "YES, YOUR ANSWER IS BINGO." << endl;
    cout << "ANSWER IS " << ans << "." << endl;
    return 0;
}

