#ifndef INVERTED_TRIANGLE_HPP
#define INVERTED_TRIANGLE_HPP


void Inverted_Triangle(int side , bool empty){

  if (empty)
  {
    for (int i = 0; i <= side; i++)
    {
        for (int j = 0; j <= 2*side; j++)
        {
           if (j==i || j==2*side-i || i==0)
           {
            std::cout<<"*";
           }
           else
           {
            std::cout<<" ";
           }
           
           
        }
        std::cout<<std::endl;
        
    }
    
  }
  else
  {
    for (int i = 0; i <= side; i++)
    {
        for (int j = 0; j <= 2*side; j++)
        {
           if (j>=i &&j<=2*side-i || i==0)
           {
            std::cout<<"*";
           }
           else
           {
            std::cout<<" ";
           }
           
           
        }
        std::cout<<std::endl;
        
    }
  }
  
  
}

/*
         **********                                                    
          ********                                            
           ******                                              
            ****     
             * *
              * 




*/   




#endif                                                                                                         