#include <iostream>
#include <vector>
#include <windows.h>
#include "note_helper.cpp"

using namespace std;

vector<int> player_freq;
vector<int> player_dur;

void player();

void add(int freq, int dur)
{
    player_freq.push_back(freq);
    player_dur.push_back(dur);
}

void initSong(int song)
{
    player_freq.clear();
    player_dur.clear();
    if (song == 1)
    {
        add(659, 1000);
        add(587, 500);
        add(523, 500);
        add(587, 500);
        add(659, 500);
        add(659, 500);
        add(659, 1000);
        add(0, 500);
        add(587, 500);
        add(587, 500);
        add(587, 1000);
        add(0, 500);
        add(659, 500);
        add(784, 500);
        add(784, 1000);
        add(0, 500);
        add(659, 1000);
        add(587, 500);
        add(523, 500);
        add(587, 500);
        add(659, 500);
        add(659, 500);
        add(659, 500);
        add(659, 500);
        add(587, 500);
        add(587, 500);
        add(659, 500);
        add(587, 500);
        add(523, 1000);
    }
    else if (song == 2)
    {
        add(659, 500);
        add(659, 500);
        add(659, 500);
        add(0, 500);
        add(659, 500);
        add(659, 500);
        add(659, 500);
        add(0, 500);
        add(659, 500);
        add(784, 500);
        add(523, 500);
        add(587, 500);
        add(659, 500);
        add(0, 500);
        add(698, 500);
        add(698, 500);
        add(698, 500);
        add(698, 500);
        add(698, 500);
        add(659, 500);
        add(659, 500);
        add(659, 500);
        add(659, 500);
        add(587, 500);
        add(587, 500);
        add(659, 500);
        add(587, 500);
        add(0, 500);
        add(784, 500);
        add(0, 500);
        add(659, 500);
        add(659, 500);
        add(659, 500);
        add(0, 500);
        add(659, 500);
        add(659, 500);
        add(659, 500);
        add(0, 500);
        add(659, 500);
        add(784, 500);
        add(523, 500);
        add(587, 500);
        add(659, 500);
        add(0, 500);
        add(698, 500);
        add(698, 500);
        add(698, 500);
        add(698, 500);
        add(698, 500);
        add(659, 500);
        add(659, 500);
        add(659, 500);
        add(784, 500);
        add(784, 500);
        add(698, 500);
        add(587, 500);
        add(523, 500);
    }
}

void playSong()
{
    for (int i = 0; i <= player_freq.size(); i++)
    {
        if (player_freq[i] == 0)
            delay(player_dur[i]);
        else
            Beep(player_freq[i], player_dur[i]);
    }
    player();
}

void player()
{
    int song_choice;
    cout << "----> Beep Music <----" << endl
         << endl;
    cout << " Select which music to play:" << endl;
    cout << " 1. Mary had a little lamb" << endl;
    cout << " 2. Jingle Bells" << endl;

    cout << endl
         << " Your choice: ";
    cin >> song_choice;

    initSong(song_choice);
    playSong();
}