// To cancel the process type " SHUTDOWN -a " in CMD
// without "", the program is created by me sn0k3
// v 0.1 ( Alpha )
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string ime;
    int chislo;
    srand(time(0));
    int chislo_random = rand() % 10 + 1;

    cout << "What's your name?";
    cin >> ime;

    cout << ime << " try to guess the number (1-10): ";
    cin >> chislo;

    if(chislo == chislo_random)
    {
        cout << "Congratulations! You did it!" << endl;
    }
    else
    {
        cout << "The Number was: " << chislo_random << endl;
        cout << "Your computer/laptop will be shut down! :)" << endl;
        system("SHUTDOWN -s");
    }
    system("Pause");
    return 0;
}
