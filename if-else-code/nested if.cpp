#include <iostream>
using namespace std;


int main() {
    int num;
    cout << "Enter number between 1 and 20 : ";
    cin >> num;

    if (num >= 10){
        cout << num << " is greater than or equal to 10\n";
        if (num < 15) {
           cout << num <<" is smaller than 15\n";
        }


    }
    else {
        cout << num <<" is less than 10";
    }

    return 0;
}
