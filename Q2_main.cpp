#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
#include "Q2.h"
using namespace std;

//Function prototypes
string compChoice(int n);
string gameResult(int choice, int num);

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
//Print the computer's choice
string compChoice(int n)
{
        if (n == 0)
        {
                return "Rock";
        }

        else if (n == 1)
        {
                return "Paper";
        }

        else
        {
                return "Scissors";
        }
}

//Game function and print results
string gameResult(int choice, int n)
{
        if (choice == n)
        {
                return "You tie!";
        }

        else if ((choice == 0) && (n == 2))
        {
                return "You win!";
        }

        else if ((choice == 1) && (n == 0))
        {       
                return "You win!";
        }
        
        else if ((choice == 2) && (n == 1))
        {       
                return "You win!";
        }
        
        else
        {       
                return "You lose!";
        }
 
}
