#ifndef SIMPLE_TRIANGLE_HPP
#define SIMPLE_TRIANGLE_HPP

void Simple_Triangle(int side, bool empty)
{
    if (empty)
    {
        for (int i = 0; i <= side; i++)
        {
            for (int j = 0; j <= 2*side; j++)
            {
                if (j == side-i || j == side+i  || i==side)
                    std::cout << "*";
                else
                    std::cout << " ";
            }
            std::cout << std::endl;
        }
    }
    else
    {
        for (int i = 0; i <= side; i++)
        {
            for (int j = 0; j <= 2*side; j++)
            {
                if (j>= side-i && j <= side+i)
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
                                             
                                                    
                                                         
                                                                    
                                                                  






*/

#endif