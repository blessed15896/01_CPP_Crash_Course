#include <print>;

using namespace std;

int main()
{
    {
        // The while loop
        int i{ 0 };
        while (i < 5)
        {
            println("This is silly");
            ++i;
        }
    }
    println("");
    {
        // The do/while loop
        int i{ 100 };
        do
        {
            println("This is silly");
            ++i;
        } while (i < 5);
    }
    println("");
}

