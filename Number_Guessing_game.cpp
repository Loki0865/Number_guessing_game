#include <iostream>
#include <ctime>
#include  <cstdlib>
using namespace std;
int main ()
{
    srand((unsigned int)time(NULL));
    int num = (rand() % 100) + 1;
    int guess = 0;
    do
    {
        cout << "Guess the number betweeen (0-100):";
        cin >> guess;

          if (guess > num)
            cout << "Guess lower" << endl;
            
        else if (guess < num)
            cout << "Guess higher" << endl;
        else
            cout << "Congratulations u won the game" << endl;
    } while (guess != num);
    return 0;
}