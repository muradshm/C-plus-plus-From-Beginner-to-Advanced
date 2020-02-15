#include <iostream>
using namespace std;

int main() {

    const int minNum = 10;
    const int maxNum = 100;
    int num ;
    cout << "this is program to check the number \n";
    cout << "please enter your number : ";
    cin >> num;
    if ( num >= minNum ) {
        cout << "\n ================= if Statement 1 ================= \n";
        cout << num << " is greater than or equal to " << minNum;

    }

    if ( num <= maxNum ) {
        cout << "\n ================= if Statement 2 ================= \n";
        cout << num << " is less than or equal to " << maxNum;

    }

    if ( num >= minNum && num <= maxNum ) {
        cout << "\n ================= if Statement 3 ================= \n";
        cout << num << " is in range" ;

    }

    if ( num == minNum || num == maxNum ) {
        cout << "\n ================= if Statement 4 ================= \n";
        cout << num << " is on a boundary" ;

    }





    return 0;
}
