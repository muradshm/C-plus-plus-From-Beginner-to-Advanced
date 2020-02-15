#include <iostream>
using namespace std;

int main() {
    /*int time = 20;
    if (time < 18) {
    cout << "Good day.";
    } else {
    cout << "Good evening.";
    }*/
    int time = 16;
    string result;

    result = (time < 18) ?  "Good day." : "Good evening.";

    cout << result;

    return 0;
}
