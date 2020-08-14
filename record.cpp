#include <iostream>
#include <windows.h>
#include <conio.h>
#include <math.h>
#include <vector>

#include "note_helper.cpp"

using namespace std;

vector<float> freqs;
vector<int> durs;
int num_keys;

bool isRecording;

void play()
{
    for (int i = 0; i < freqs.size(); i++)
    {
        Beep(freqs[i], durs[i]);
    }
}

void printRecords()
{
    int line = 0;
    printf("\n");
    for(int i = 0; i < freqs.size(); i++)
    {
        printf("add(%.0f,%d);", freqs[i], durs[i]);
        line++;
        if(line == 5)
        {
            line = 0;
            printf("\n");
        }
    }
}

void recordLoop()
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
            printf("\noctave %d: ", octave);
        }
        else if (value == 77 && octave < 8)
        {
            octave++;
            printf("\noctave %d: ", octave);
        }
        else if (value == 72)
        {
            duration++;
            printf("\nduration %.2f: ", pow(2, duration));
        }
        else if (value == 80)
        {
            duration--;
            printf("\nduration %.2f: ", pow(2, duration));
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
    else if (key == 'z' || key == 'Z')
    {
        freqs.push_back(0);
        durs.push_back(500);
        printf("delay_0.50 ");
        num_keys++;
        recordLoop();
    }
    else if (key == 'x' || key == 'X')
    {
        freqs.push_back(0);
        durs.push_back(1000);
        printf(" delay_1.00 ");
        num_keys++;
        recordLoop();
    }
    else if (key == 'c' || key == 'C')
    {
        freqs.push_back(0);
        durs.push_back(2000);
        printf(" delay_2.00 ");
        num_keys++;
        recordLoop();
    }
    else if (key >= '0' && key < '9')
    {
        octave = key - '0';
        printf("\noctave %d: ", octave);
    }
    else if (key == '+')
        offset++;
    else if (key == '-')
        offset--;
    else if (key == 'r' || key == 'R')
    {
        if (isRecording)
        {
            isRecording = false;
            printf("Recording paused ");
        }
        else
        {
            isRecording = true;
            printf("Recording resumed ");
        }
    }
    else if (key == 'o' || key == 'O')
    {
        if (isRecording)
        {
            freqs.pop_back();
            durs.pop_back();
            printf("del ");
            num_keys--;
        }
        else
            printf("you should be in recording mode to delete a key\n");
    }
    else if (key == 'p' || key == 'P')
    {
        printf("\nplaying the record...");
        play();
        printf(" done: ");
    }
    else if(key == 'i' || key == 'I')
    {
        printRecords();
    }
    else if (key == 'q' || key == 'Q')
        exit(1);
    else if(key == 'v' || key == 'V')
    {
        printf("\nRecord cleared: ");
        freqs.clear();
        durs.clear();
        num_keys = 0;
    }

    if (key_pressed)
    {
        if (key_pressed == 1)
            printf("C");
        else if (key_pressed == 2)
            printf("C#");
        else if (key_pressed == 3)
            printf("D");
        else if (key_pressed == 4)
            printf("D#");
        else if (key_pressed == 5)
            printf("E");
        else if (key_pressed == 6)
            printf("F");
        else if (key_pressed == 7)
            printf("F#");
        else if (key_pressed == 8)
            printf("G");
        else if (key_pressed == 9)
            printf("G#");
        else if (key_pressed == 10)
            printf("A");
        else if (key_pressed == 11)
            printf("A#");
        else if (key_pressed == 12)
            printf("B");
        else if (key_pressed == 13)
            printf("C+");
        printf("%d_%.2f", octave, pow(2, duration));

        getFreq();
        Beep(freq, pow(2, duration) * 1000);
        if (isRecording)
        {
            freqs.push_back(freq);
            durs.push_back(pow(2, duration) * 1000);
            num_keys++;
        }
        printf(" ");
    }
    recordLoop();
}

void initRecord()
{
    freq_A4 = 440;
    offset = 0;

    duration = 0;
    octave = 4;

    system("cls");

    gotoxy(0, 1);
    cout << " ----> Beep Music <----" << endl
         << endl;
    cout << " Playing instructions remain same" << endl;
    cout << " Press R to start/stop recording" << endl;
    cout << " Press Z, X and C to add delays of 0.5, 1 and 2 seconds respectively" << endl;
    cout << " Press O to delete the previous key" << endl;
    cout << " Press P to play the notes recorded so far" << endl;
    cout << " Press V to clear the record" << endl;
    cout << " Press I to generate the record" << endl;
    cout << " Press Q to exit" << endl
         << endl;

    cout << "Recording:";

    isRecording = true;
    num_keys = 0;

    recordLoop();
}