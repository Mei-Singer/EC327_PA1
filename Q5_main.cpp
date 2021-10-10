#include <iostream>
using namespace std;

//Function prototypes
int toASCII (char char1);
char convert(int a, int offset);

int main()
{
        char char1;
        int offset;
        cout << "Enter character: " ;
        cin >> char1;
        cout << "Offset (enter 0 to convert case): ";
        cin >> offset;

        //Convert character to ASCII
        int a = int(char1);

        //Add the offset and display new value
        cout << "New character: " << convert (a, offset) << endl;

        return 0;
}

//Apply offset
char convert(int a, int offset)
{
        int b;
        if (offset != 0)
        {
                b = a + offset;
                if (b > 127)
                {
                        cout << "Your new character is outside ASCII bounds!" << endl;
                }
        }
        else
        {
                if ((a > 64) && (a < 91))
                {
                        b = a + 32;
                }
                else if ((a > 96) && (a < 123))
                {
                        b = a - 32;
                }
                else if ((a > 47) && (a < 58))
                {
                        b = a;
                }
                else
                {
                        return 0;
                }
        }
        return b;
}
~                                       