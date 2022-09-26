#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, pc;
    do
    {
        cout << "\nДобро пожаловать в игру камень/ножницы/бумага \n выберете свое орудие \n 0 - камень \n 1 - ножницы\n 2 - бумага\n если надоело - нажми 3\n";
        do
        {
            cin >> n;
        } while (n < 0 && n > 2);
        pc = rand() % 3;
        if (pc == n)
        {
            cout << "Каша\n";
        }
        else
        {
            switch (n)
            {
            case 0:if (pc == 1)
            {
                cout << "Вы выиграли\n";
            }
                  else
            {
                cout << "Nope, у противника бумага\n\n";
            }
                  break;
            case 1: if (pc == 2)
            {
                cout << "Вы выиграли\n";
            }
                  else
            {
                cout << "Nope,у противника камень\n\n";
            }
                  break;

            case 2:
                if (pc == 0)
                {
                    cout << "Вы выиграли\n\n";
                }
                else
                {
                    cout << "Nope, у противника ножницы\n\n";
                }
                break;
            }

        }


    } while (n != 3);
    return 0;
}