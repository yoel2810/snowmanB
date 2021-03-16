#include "snowman.hpp"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    try
    {
        ariel::snowman(14134411);
    }
    catch(string message)
    {
        cout << "caught exception: " << message << endl;
    }
    
    
}