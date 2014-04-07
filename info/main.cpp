#include <iostream>
#include <cstdlib>
using namespace std;
// Mini Project if i can say it that.
// v0.1
// 06.04.2014
void info();
void sites();
void infoAndpause();

int main()
{
    int izbor;

    cout << "Type what do you want to see: [1-3]" << endl;
    cout << "1.Information about me." << endl;
    cout << "2.Sites/blogs which I follow." << endl;
    cout << "3.Info about this program." << endl;
    cin >> izbor;

    switch(izbor)
    {
    case 1:
        system("cls");
        info();
    break;

    case 2:
        system("cls");
        sites();
    break;

    case 3:
        system("cls");
        infoAndpause();
    break;
    }
    system("Pause");
    return 0;
}

void info()
{
    cout << "----------------------" << endl;
    cout << "|Information about me|" << endl;
    cout << "----------------------" << endl;
    cout << "Name: Hristo" << endl;
    cout << "mail: ih999@abv.bg" << endl;
    cout << "tumblr: ico0y.tumblr.com" << endl;
    cout << "GitHub: sn0k3" << endl;
}

void sites()
{
    cout << " ---------------------------------" << endl;
    cout << " |Blogs / sites, which im following" << endl;
    cout << " ---------------------------------" << endl;
    cout << " |1. vladimirsan.com    |" << endl;
    cout << " |2. lostdecadegames.com|" << endl;
    cout << " |3. fabiensanglard.net |" << endl;
    cout << " |4. #4                 |"<< endl;
}

void infoAndpause()
{
    cout << "The Program [if i can say it that] is created by me [sn0k3]" << endl;
    cout << "Version: Alpha 0.1" << endl;
    system("Pause");
}
