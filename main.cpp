#include <iostream>
#include <iomanip>
#include "palindrome.h"

int main() {
    std::cout << std::boolalpha;
    std::cout << palindrome("pizza") << std::endl;
    std::cout << palindrome("caac") << std::endl;
    std::cout << palindrome("gbablgskag") << std::endl;
    std::cout << palindrome("kkkkkkk") << std::endl;
    std::cout << palindrome("ggg") << std::endl;


    return 0;
}
