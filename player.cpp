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
    else if (song == 3)
    {
        add(659, 500);
        add(622, 500);
        add(659, 500);
        add(622, 500);
        add(659, 500);
        add(494, 500);
        add(587, 500);
        add(523, 500);
        add(440, 500);
        add(0, 500);
        add(262, 500);
        add(330, 500);
        add(440, 500);
        add(494, 500);
        add(0, 500);
        add(330, 500);
        add(415, 500);
        add(494, 500);
        add(523, 500);
        add(0, 500);
        add(494, 500);
        add(523, 500);
        add(587, 500);
        add(659, 500);
        add(0, 500);
        add(349, 500);
        add(698, 500);
        add(659, 500);
        add(587, 500);
        add(0, 500);
        add(330, 500);
        add(659, 500);
        add(587, 500);
        add(523, 500);
        add(0, 500);
        add(294, 500);
        add(587, 500);
        add(523, 500);
        add(494, 500);
    }
    else if (song == 4)
    {
        add(494, 500);
        add(440, 500);
        add(415, 500);
        add(440, 500);
        add(523, 500);
        add(0, 500);
        add(587, 500);
        add(523, 500);
        add(494, 500);
        add(523, 500);
        add(659, 500);
        add(0, 500);
        add(698, 500);
        add(659, 500);
        add(622, 500);
        add(659, 500);
        add(988, 500);
        add(880, 500);
        add(831, 500);
        add(880, 500);
        add(988, 500);
        add(880, 500);
        add(831, 500);
        add(880, 500);
        add(1047, 500);
    }
    else if (song == 5)
    {
        add(784, 500);
        add(698, 500);
        add(659, 500);
        add(698, 500);
        add(587, 500);
        add(659, 500);
        add(698, 500);
        add(659, 500);
        add(587, 500);
        add(659, 500);
        add(523, 500);
        add(587, 500);
        add(659, 500);
        add(784, 500);
        add(698, 500);
        add(659, 500);
        add(587, 500);
        add(523, 500);
        add(587, 500);
        add(523, 500);
        add(494, 500);
        add(440, 500);
        add(392, 500);
        add(0, 500);
        add(784, 500);
        add(698, 500);
        add(659, 500);
        add(698, 500);
        add(587, 500);
        add(659, 500);
        add(698, 500);
        add(659, 500);
        add(587, 500);
        add(659, 500);
        add(523, 500);
        add(587, 500);
        add(659, 500);
        add(784, 500);
        add(698, 500);
        add(659, 500);
        add(587, 500);
        add(659, 500);
        add(523, 500);
    }
    else if (song == 6)
    {
        add(392, 500);
        add(392, 500);
        add(440, 500);
        add(392, 500);
        add(523, 500);
        add(494, 500);
        add(0, 500);
        add(392, 500);
        add(392, 500);
        add(440, 500);
        add(392, 500);
        add(587, 500);
        add(523, 500);
        add(0, 500);
        add(392, 500);
        add(392, 500);
        add(784, 500);
        add(659, 500);
        add(523, 500);
        add(494, 500);
        add(440, 500);
        add(440, 500);
        add(0, 500);
        add(698, 500);
        add(698, 500);
        add(659, 500);
        add(523, 500);
        add(587, 500);
        add(523, 500);
    }
    else if (song == 7)
    {
        add(587, 500);
        add(659, 500);
        add(698, 500);
        add(587, 500);
        add(698, 500);
        add(698, 500);
        add(659, 500);
        add(587, 500);
        add(659, 500);
        add(523, 500);
        add(0, 500);
        add(659, 500);
        add(698, 500);
        add(784, 500);
        add(659, 500);
        add(784, 500);
        add(784, 500);
        add(698, 500);
        add(659, 500);
        add(587, 500);
        add(0, 500);
        add(587, 500);
        add(659, 500);
        add(698, 500);
        add(784, 500);
        add(880, 500);
        add(1175, 500);
        add(1047, 500);
        add(1175, 500);
        add(1047, 500);
        add(932, 500);
        add(932, 500);
        add(880, 500);
        add(784, 500);
        add(880, 500);
        add(698, 500);
        add(0, 500);
        add(932, 500);
        add(784, 500);
        add(880, 500);
        add(698, 500);
        add(784, 500);
        add(880, 500);
        add(698, 500);
        add(659, 500);
        add(587, 500);
    }
    else if (song == 8)
    {
        add(587, 500);
        add(880, 500);
        add(784, 500);
        add(880, 500);
        add(698, 500);
        add(784, 500);
        add(880, 500);
        add(698, 500);
        add(784, 500);
        add(880, 500);
        add(784, 500);
        add(698, 500);
        add(659, 500);
        add(587, 500);
        add(659, 500);
        add(587, 500);
        add(523, 500);
        add(523, 500);
        add(587, 500);
        add(659, 500);
        add(587, 500);
        add(698, 500);
        add(659, 500);
        add(784, 500);
        add(880, 500);
        add(784, 500);
        add(698, 500);
        add(659, 500);
        add(587, 500);
        add(587, 500);
    }
    else if (song == 9)
    {
        add(523, 500);
        add(587, 500);
        add(659, 500);
        add(523, 500);
        add(0, 500);
        add(523, 500);
        add(587, 500);
        add(659, 500);
        add(523, 500);
        add(0, 500);
        add(659, 500);
        add(698, 500);
        add(784, 500);
        add(0, 500);
        add(659, 500);
        add(698, 500);
        add(784, 500);
        add(0, 500);
        add(784, 500);
        add(880, 500);
        add(784, 500);
        add(698, 500);
        add(659, 500);
        add(523, 500);
        add(0, 500);
        add(784, 500);
        add(880, 500);
        add(784, 500);
        add(698, 500);
        add(659, 500);
        add(523, 500);
        add(0, 500);
        add(523, 500);
        add(440, 500);
        add(523, 500);
    }
    else if (song == 10)
    {
        add(523, 500);
        add(698, 500);
        add(622, 500);
        add(622, 500);
        add(554, 500);
        add(554, 500);
        add(523, 500);
        add(466, 500);
        add(415, 500);
        add(466, 500);
        add(554, 500);
        add(523, 500);
        add(523, 500);
        add(0, 500);
        add(466, 500);
        add(466, 500);
        add(415, 500);
        add(466, 500);
        add(466, 500);
        add(415, 500);
        add(392, 500);
        add(349, 500);
        add(311, 500);
        add(349, 500);
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
    cout << "----> Beep Music Player <----" << endl
         << endl;
    cout << " Select which music to play:" << endl;
    cout << " 1. Mary had a little lamb" << endl;
    cout << " 2. Jingle Bells" << endl;
    cout << " 3. Fur Elise" << endl;
    cout << " 4. Turkish March" << endl;
    cout << " 5. Rondino" << endl;
    cout << " 6. Happy Birthday" << endl;
    cout << " 7. Katjusha" << endl;
    cout << " 8. Teri Meri" << endl;
    cout << " 9. Brother John" << endl;
    cout << " 10. Tum Hi Ho" << endl;

    cout << endl
         << " Your choice: ";
    cin >> song_choice;

    initSong(song_choice);
    playSong();
}