#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks : ";
    cin >> marks;
    if(marks<0 || marks>100) {
        cout <<"Wrong Entry" ;
    }else if (marks>=90) {
       cout <<"Excellent" ;
    }else if (marks>=80) {
       cout <<"Good" ;
    }else {
       cout <<"Failed" ;
    }
    return 0;
}