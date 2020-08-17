#include <iostream>
#include <windows.h>
#include <time.h>
#include <math.h>
#include "note_helper.cpp"

using namespace std;

void randomMusic()
{
    srand(time(NULL));

    cout << " <--- Beep Random Music ---> " << endl
         << endl;
    cout << " If you wanna stop the music, close the window!" << endl;

    freq_A4 = 440;
    offset = 0;

    octave = 5;
    duration = 0;
    int duration_factor;
    int octave_factor;

    while (1)
    {
        key_pressed = (rand() % 14) + 1;
        duration_factor = (rand() % 16) + 1;
        octave_factor = (rand() % 9) + 1;

        if (duration_factor < 12)
            duration = -1;
        else if (duration_factor < 15)
            duration = 0;
        else 
            duration = 1;

        if (octave_factor == 1)
            octave--;
        else if (octave_factor == 8)
            octave++;
        if(octave < 4)
            octave++;
        if(octave > 7)
            octave--;

        getFreq();
        cout << "(" << freq << " "<< duration << ")";
        Beep(freq, pow(2, duration) * 1000);
    }
}