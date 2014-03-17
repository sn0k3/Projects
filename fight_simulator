// Simple try for simulator.It isn't something hard, but i like it. :)
/* Боен симулатор v1.0
* Написано от sn0k3 */
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int score = 0;
    int life = 100;

    cout << "Your life: " << life << "%" << endl;
    cout << "Score: " << score << endl;
    cout << "------------------------------- " << endl;
    cout << "Press enter to simulate attack " << endl;
    cin.get();

    do {

    life = life - 1;
    score = score + 1;
    cout << "You are attacked by " << "monster." << endl;
    cout << "Your life: " << life << "%" << endl;
    cout << "Score: " << score << endl;
    cin.get();

    } while(life != 0);

    cout << "Game over! You are dead. Press enter to exit." << endl;
    cin.get();

    return 0;
}
