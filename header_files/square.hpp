#ifndef SQUARE_HPP
#define SQUARE_HPP
#include <iomanip>
#include <iostream>
using namespace std;
void Square(int side, bool empty)
{

    if (empty)
    {
        for (int i = 0; i <= side; i++)
        {
            for (int j = 0; j <= side; j++)
            {
                if (i == 0 || j == 0 || j == side || i == side)
                    std::cout << std::setw(3) << "*";
                else
                    std::cout << std::setw(3) << " ";
            }
            std::cout << std::endl;
        }
    }
    else
    {
        for (int i = 0; i <= side; i++)
        {
            for (int j = 0; j <= side; j++)
            {
                std::cout << std::setw(3) << "*";
            }
            std::cout << std::endl;
        }
    }
}

void iosange(int side, bool empty)
{

    if (empty)
    {
        for (int i = 0; i <= 2 *side; i++)
        {
            for (int j = 0; j <= 2 *side; j++)
            {
                if (j ==side - i || j ==side + i || j == i -side || j == 3 *side - i)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 0; i <= 2 * side; i++)
        { //

            if (i <= side)
            {
                for (int j = 0; j <= 2 * side; j++)
                {
                    if ((j >= side - i && j <= side + i))
                    {
                        cout << "*";
                    }

                    else
                    {
                        cout << " ";
                    }
                }
            }
            else
            {
                for (int j = 0; j <= 2 *side; j++)
                {
                    if ((j >= i -side && j <= 3 *side - i))
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }
    }
}

#endif