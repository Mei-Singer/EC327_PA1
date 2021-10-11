#include <iostream>
#include <string>
using namespace std;

//function prototypes
int isValid(int num);
void palindrome(int num);

int main()
{       
        //prompt user for number
        int num;
        cout << "Enter a number: ";
        cin >> num;
        
        //check if input is valid
        isValid(num);
	int x;
	if (x == 1)
	{
        	return 0;
	}
	
	else
	{
		//Invoke palindrome function
		palindrome(num);
	}
	return 0;
}

//Input must only contain numbers 0-9
int isValid(int num)
{
	int x;
        string N = to_string(num);
        for (int i = 0; i < N.length(); i++)
        {
                if (isdigit(N[i]) == false)
                {
                        return 0;
            	}
		else
		{
			
			int x = 1;
			return x;
		}
	}
	return x;
}


//Palindrome function
void palindrome(int num)
{
        int x = num;
        int temp;
        int reverse = 0;

        do
        {
                temp = num % 10;
                reverse = (reverse * 10) + temp;
                num = num / 10;
        }
                while (num != 0);

        if (x == reverse)
        {
                cout << "This is a palindrome." << endl;
        }
        else
        {
                cout << "This is not a palindrome." << endl;
        }
}


