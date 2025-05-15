#include "StringHelper.h"
#include <cctype>
#include <stdexcept>  // 예외 클래스
#include <string>

std::string 
Utils::String::Larger::toUpperCase(const std::string& str) {
    if (str.empty()) {
        throw std::invalid_argument("toUpperCase(): input string is empty");
    }

    std::string result;
    result.reserve(str.size());

    for (unsigned char c : str) {
        result.push_back(static_cast<char>(std::toupper(c)));
    }

    return result;
}

std::string 
Utils::String::Smaller::toLowerCase(const std::string& str) {
    if (str.empty()) {
        throw std::invalid_argument("toLowerCase(): input string is empty");
    }

    std::string result;
    result.reserve(str.size());

    for (unsigned char c : str) {
        result.push_back(static_cast<char>(std::tolower(c)));
    }

    return result;
}

bool 
Utils::String::ContainDetect::contains(const std::string& text, const std::string& pattern) {
    if (text.empty() || pattern.empty()) {
        throw std::invalid_argument("contains(): text or pattern is empty");
    } //예외처리

    int total_len = text.length();
    int pattern_len = pattern.length();
    bool result = false;

    // algorithm idea: text 문자열을 순차 탐색, 
    // pattern[0]과 동일한 char 형이 걸리면 새로운 for문 중첩으로 진입, pattern_len 만큼 text와 pattern 비교
    for (int iter = 0; iter < total_len; iter++)
    {
        
        if (text[iter] == pattern[0])
        {
            int fail = 0;
            for (int j = 0; j<pattern_len; j++)
            {
                if (text[iter+j] == pattern[j]) continue;
                else fail++;
            }

            if (fail == 0) result = true;
        }
        
    }

    return result;
}