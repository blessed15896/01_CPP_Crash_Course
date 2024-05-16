#include <print>;
#include <array>;

using namespace std;

int main()
{
    {
        // Structured bindings with std::array.
        array values{ 11, 22, 33 };
		auto [x, y, z] {values};
        println("x = {}, y = {}, z = {}", x, y, z);
    }
}

