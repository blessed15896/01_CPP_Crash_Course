// helloworld 
#include <iostream>

/*
This is a multiline comment.
The compiler will ignore it.
*/
int main()
{
    std::cout << "There are " << 219 << " ways I love you." << std::endl;
    std::cout << std::format("There are {} ways I love you.", 219) << std::endl;
    std::cout << std::format("{} + {} = {}", 2, 4, 6) << std::endl;
    return 0;
}

