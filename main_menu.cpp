#include <iostream>

#include "note_helper.cpp"
#include "keyboard.cpp"
#include "record.cpp"
#include "player.cpp"

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
    else if(choice == 2)
    {
        initRecord();
    }
    else if(choice == 3)
    {
        player();
    }
    return 0;
}