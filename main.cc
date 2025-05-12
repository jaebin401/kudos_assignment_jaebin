#include <iostream>
#include <string>
#include "StringHelper.cc"

int main()
{
    std::string say_my_name = "you're GoD DaMn RIGHT";

    std::cout << Utils::String::Larger::toUpperCase(say_my_name) << "\n";
    std::cout << Utils::String::Smaller::toLowerCase(say_my_name) << "\n";
    std::cout << Utils::String::ContainDetect::contains(say_my_name, "damn") << "\n";
    std::cout << Utils::String::ContainDetect::contains(say_my_name, "RIGHT") << "\n";

    return 0;
}