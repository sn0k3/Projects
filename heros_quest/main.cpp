// Really Simple game.I tried to create micro-game. :p
#include <iostream>
using namespace std;

int main()
{
    string warrior;
    int ability;

    cout << "Welcome to hero's quest. v0.1\n" << endl;

    cout << "Village with name Sanotori has been attacked by Smaugh.\n" << endl;

    cout << "Smaugh is one from the 7 black dragons.The village needs a savior. \n"<<endl;

    cout << "Name your hero: ";
    cin >> warrior;

    cout << "The greatest warrior " << warrior << " will protect the village.";
    cout << "\n He used his " << endl;
    cout << "1) Charge" << endl;
    cout << "2) Disarm" << endl;
    cout << "3) Fire Arrow" << endl;

    cin >> ability;
    switch(ability)
    {
    case 1:
    cout << "He used charge to kill the dragon..He almost died, but.." << endl;
    cout << "He killed the dragon! Congratulations!You win!" << endl;
    break;

    case 2:
        cout << warrior << " used disarm, but that didnt worked on the dragon.";
        cout << "\n So the dragon killed " << warrior << endl;
        cout << "Game over! Sorry, you lost!";
        break;

    case 3:
        cout << "The Mighty warrior forgot his crossbow, and he died in fight.." << endl;
        cout << "Game over!You have been eaten! You lost!" << endl;
        break;
    }
    return 0;
}
