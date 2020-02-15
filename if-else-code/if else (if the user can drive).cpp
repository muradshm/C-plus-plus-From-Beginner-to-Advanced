#include <iostream>
using namespace std;

int main() {

    //test if the user can drive or not

    const int ageToDrive = 18;
    int age;
    cout << " Enter your age : " ;
    cin >> age;

    if (age >= ageToDrive ){
        cout << "Yes - you can drive \n" ;
    }else {
    cout << "No - you can't drive \n";
    }

    return 0;
}