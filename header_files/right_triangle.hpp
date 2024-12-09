#ifndef RIGHT_TRIANGLE_HPP
#define RIGHT_TRIANGLE_HPP // right_triangle
void Right_Triangle(int height, bool empty)
{

    if (empty)
    {
        for (int i = 0; i <= height; i++)
        {
            for (int j = 0; j <= height; j++)
            {
                if (j == i || j==0 || i==height)
                    std::cout << "*";
                else
                    std::cout << " ";
            }
            std::cout << std::endl;
        }
    }
    else
    {
        for (int i = 0; i <= height; i++)
        {
            for (int j = 0; j <= height; j++)
            {
                if (j <= i)
                    std::cout << "*";
                else
                    std::cout << " ";
            }
            std::cout << std::endl;
        }
    }
}

/*

*
**
***
****
*****
******
*/
#endif