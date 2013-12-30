// Mini System Controller v1.0
// Created by sn0k3
// Added in github: Monday, 30.12.2013 13:19
#include <iostream>
using namespace std;

int main()
{
  int choice;

  cout << "Choose what do you want to start?" << endl;
  cout << "1.Calculator" << endl;
  cout << "2.Paint" << endl;
  cout << "3.CMD" <<endl;
  cout << "4.Notepad" <<endl;
  
  cin >> choice;
  switch(choice)
  {
   case 1:
   system("calc.exe");
      break;              

   case 2:
        system("MSpaint");
   break;

   case 3:
        system("cmd");
   break;

   case 4:
        system("notepad");
   break;
        
  }

 system("Pause");
 return 0;
}
