#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include "Q2.h"
using namespace std;

int main()
{
        //Prompt user to choose rock, paper, or scissors
        int choice,n;
        cout << "Choose Rock (0), Paper (1), or Scissors (2):" << endl;
        cin >> choice;


        //Generate a number between 0 and 2
        srand(time(NULL));
        n = rand() % 3;
        cout << n << endl;

        //Invoke computer choice function
        cout << "Computer chooses: ";
        cout << compChoice(n) << endl;

        //Invoke game function
        cout << gameResult(choice,n) << endl;

        return 0;
}