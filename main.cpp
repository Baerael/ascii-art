#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <ctime>

const int SLEEP = 100000;

void hill(int n)
{    
    int base = n * 2 - 1;
    int top = base / 2 * n;
    int space = n * 2;
    int star = 3;
    int t = n * 2 - 2; 
    int start = 1;

    for (int i = n; i > 0; --i)
    {
        for (int j = 0; j < top; j++)
        {
            std::cout << ' ';
        }
        std::cout << '*';

        for (int s = 1; s < start; s++) 
        {
            for (int j = 0; j < t; j++)
            {
                std::cout << ' ';
            }

            for (int j = 0; j < star; j++)
            {
                std::cout << '*';
            }
            star += 2;

        }
        start++;
        base = (i - 1)  * 2 - 1;
        top = base / 2 * (i - 1);
        t -= 2;
        star = 3;
        std::cout << std::endl;
    }
}


int main()
{
    srand((unsigned int) time(NULL));
    while (1)
    {

        for (int i = 0; i < rand() % 11 + 4; i++)
        {
            hill(i);
            usleep(SLEEP);
        }
    }


    return 0;
}
