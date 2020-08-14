#include <iostream>

#include "keyboard.cpp"

using namespace std;

int main()
{
    cout << "----> Beep music <----" << endl << endl;
    cout << "1. Play keyboard" << endl;
    cout << "2. Record music" << endl;
    cout << "3. Play loaded music" << endl << endl;
    cout << "Your choice: ";

    int choice;
    cin >> choice;

    if(choice == 1)
    {
        initLoop();
    }
    return 0;
}