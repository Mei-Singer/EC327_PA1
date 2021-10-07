#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
using namespace std;

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