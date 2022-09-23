#include <iostream>
using namespace std;
 //Лабораторна робота №1 
//Демиденка Тимофія
int main()
{
    //#1
    short yearBirth = 2004;
    string firstName = "Tim";
    string lastName = "Demydenko";
    cout << "> First Name : " << firstName << "\n> Last Name : "<< lastName << "\n> Year of Birth : "<< yearBirth << "\n\n";

    //#2
    int usNumber = rand() % 100; cout << "Your number is : " << usNumber << "\n\n";

    //#3
    double usNumberD; cout << "Enter double number : "; cin >> usNumberD; cout << "Double number is : " << usNumberD << endl;
    int usNumberI; cout << "\nEnter inte number : "; cin >> usNumberI;  cout << "Your number is : " << usNumberI << endl;

    //#4
    char initials[2];
    cout << "\nEnter your initials (with enter): \n"; cin >> initials[0]; cin >> initials[1];
    if (isupper(initials[0]) && isupper(initials[1])) cout << "Your initials: " << initials[0] << "." << initials[1];
    else cout << "Your initials: " << char(toupper(initials[0])) << "." << char(toupper(initials[1])) << "\n\n";

    //#5
    int count = 0;
    while (count != 7) { count++; for (int i = 0; i < count; i++) cout << "*"; cout << endl; }

}

