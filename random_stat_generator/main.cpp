// Stats Program
// Version: 1.0
// Author: Hristo Hristov (sn0k3)
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void begin_creating();

int main()
{
    char key;
    cout << "Press enter to begin..";
    if(cin.get() == '\n')
    {
        begin_creating();
    }
    else
    {
        cout << "Why you pressed " << int(cin.get()) << " ?" << endl;
    }

    return 0;
}
void begin_creating()
{
    int progress = 0;
    while(progress != 100)
    {
         cout << "Loading: " << progress << "% ready." << endl;
         progress = progress + 1;
         system("cls");
    }
    cout << "Ready.";

    srand(time(0));
    int health = rand() % 100 + 1;
    int weapon = rand() % 4;
    if(weapon == 0)
    {
        system("cls");
        cout << "You are spawned! " << endl;
        cout << "Health: " << health << "%" << " | " << "Weapon: Nothing" << endl;
    }
    if(weapon == 1)
    {
        system("cls");
        cout << "You are spawned! " << endl;
        cout << "Health: " << health << "%" << " | " << "Weapon: Knife" << endl;
    }
    if(weapon == 2)
    {
        int ammo = rand() % 27;
        system("cls");
        cout << "You are spawned! " << endl;
        cout << "Health: " << health << "%" << " | " << "Weapon: M4a1 " << "| Ammo: " << ammo << endl;
    }
    if(weapon == 3)
    {
        int ammo = rand() % 8;
        system("cls");
        cout << "You are spawned! " << endl;
        cout << "Health: " << health << "%" << " | " << "Weapon: Desert Eagle " << "| Ammo: " << ammo << endl;
    }
}
