#include <iostream>
#include <math.h>
#include <windows.h>
#include <conio.h>

using namespace std;

void playLoop()
{
    key_pressed = 0;
    int key, value;
    do
    {

    } while (!kbhit());

    key = getch();
    if (key == 0xE0)
    {
        value = getch();
        if (value == 75 && octave > 0)
        {
            octave--;
            gotoxy(0,4);
            printf(" Octave: %d", octave);
        }
        else if (value == 77 && octave < 8)
        {
            octave++;
            gotoxy(0,4);
            printf(" Octave: %d", octave);
        }
        else if (value == 72)
        {
            duration++;
            gotoxy(0,5);
            printf(" Duration: %.3f", pow(2, duration));
        }
        else if (value == 80)
        {
            duration--;
            gotoxy(0,5);
            printf(" Duration: %.3f", pow(2, duration));
        }
    }
    else if (key == 'a' || key == 'A')
        key_pressed = 1;
    else if (key == 'w' || key == 'W')
        key_pressed = 2;
    else if (key == 's' || key == 'S')
        key_pressed = 3;
    else if (key == 'e' || key == 'E')
        key_pressed = 4;
    else if (key == 'd' || key == 'D')
        key_pressed = 5;
    else if (key == 'f' || key == 'F')
        key_pressed = 6;
    else if (key == 't' || key == 'T')
        key_pressed = 7;
    else if (key == 'g' || key == 'G')
        key_pressed = 8;
    else if (key == 'y' || key == 'Y')
        key_pressed = 9;
    else if (key == 'h' || key == 'H')
        key_pressed = 10;
    else if (key == 'u' || key == 'U')
        key_pressed = 11;
    else if (key == 'j' || key == 'J')
        key_pressed = 12;
    else if (key == 'k' || key == 'K')
        key_pressed = 13;
    else if (key >= '0' && key < '9')
    {
        octave = key - '0';
        gotoxy(0,4);
        printf(" Octave: %d", octave);
    }
    else if(key == '+')
    {
        offset++;
        gotoxy(0,8);
        printf(" Offset: %d ", offset);
    }
    else if(key == '-')
    {
        offset--;
        gotoxy(0,8);
        printf(" Offset: %d ", offset);
    }
    else if(key == 'q' || key == 'Q')
        exit(1);
    
    if (key_pressed)
    {
        gotoxy(14, 3);
        if (key_pressed == 1)
            printf("C ");
        else if (key_pressed == 2)
            printf("C#");
        else if (key_pressed == 3)
            printf("D ");
        else if (key_pressed == 4)
            printf("D#");
        else if (key_pressed == 5)
            printf("E ");
        else if (key_pressed == 6)
            printf("F ");
        else if (key_pressed == 7)
            printf("F#");
        else if (key_pressed == 8)
            printf("G ");
        else if (key_pressed == 9)
            printf("G#");
        else if (key_pressed == 10)
            printf("A ");
        else if (key_pressed == 11)
            printf("A#");
        else if (key_pressed == 12)
            printf("B ");
        else if (key_pressed == 13)
            printf("C+");
        else
            printf("  ");

        getFreq();
        gotoxy(0,6);
        printf(" Frequency: %d  ", int(freq));
        Beep(freq, pow(2, duration) * 1000);
    }
    playLoop();
}

void initLoop()
{
    freq_A4 = 440;
    offset = 0;

    duration = -1;
    octave = 5;

    system("cls");

    gotoxy(0, 1);
    cout << " ----> Beep Music <----" << endl
         << endl;
    cout << " Current key: " << endl;
    cout << " Octave: " << octave << endl;
    cout << " Duration: " << int(pow(2, duration)) << endl;
    cout << " Frequency: " << freq_A4 << endl << endl;
    cout << " Offset: " << offset << endl;
    cout << " Fundamental mode: " << freq_A4 << endl << endl;

    cout << " INSTRUCTIONS:" << endl << endl;
    printf("   W   E     T   Y   U\n");
    printf(" A   S   D F   G   H   J K\n\n");

    cout << "Press left and right arrow keys to control octave number OR directly press the octave number" << endl;
    cout << "Press up and down keys to control duration of the key" << endl;
    cout << "Press + or - to control the offset" << endl;
    cout << "Press Q to exit" << endl;

    playLoop();
}