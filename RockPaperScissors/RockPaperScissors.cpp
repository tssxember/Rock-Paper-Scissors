#include <iostream>
#include <stdlib.h>

using namespace std;
int main() {
    srand(time(NULL));
    int computer = rand() % 3 + 1;
    int user = 0;

    cout << "===================\n";
    cout << "rock paper scisors!\n";
    cout << "===================\n";

    cout << "1) rock\n";
    cout << "2) paper\n";
    cout << "3) scisors\n";

    cout << "shoot\n";
    cin >> user;

    switch (user) {
    case 1:
        cout << "you picked rock\n";
        break;
    case 2:
        cout << "you picked paper\n";
        break;
    case 3:
        cout << "you picked scisors\n";
        break;
    default:
        cout << "choose a answer";
        break;
    }
    switch (computer) {
    case 1:
        cout << "computer picked rock\n";
        break;
    case 2:
        cout << "computer picked paper\n";
        break;
    case 3:
        cout << "computer picked scisors\n";
        break;
    default:
        cout << "choose a answer";
        break;
    }

    if (computer == user) {
        cout << "Tie"<< endl;
    }
    else if(computer == 1 && user == 2  || computer == 2 && user == 3 || computer == 3 && user == 1){
        cout << "you win!!!" << endl;
    }
    else {
        cout << "computer wins!!" << endl;
    }

}