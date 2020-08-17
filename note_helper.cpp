#ifndef NOTE_HELPER
#define NOTE_HELPER

#include <iostream>
#include <windows.h>
#include <math.h>
#include <ctime>
#include <vector>

using namespace std;

// permanent params
float freq_A4;
int offset;

// runtime params
float freq;
int duration;

// temporary params
int octave, key_pressed, key_no;

void getFreq()
{
    key_no = (offset + 3) + (octave - 1) * 12 + key_pressed;
    freq = pow(2, (key_no - 49.0) / 12.0) * freq_A4;
}

void gotoxy(short x, short y)
{
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void delay(int milli)
{
    clock_t start = clock();

    while(clock() - start < milli);
}

#endif