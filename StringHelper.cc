#include "StringHelper.h"
#include <cctype>

std::string 
Utils::String::Larger::toUpperCase(const std::string& str) {
    std::string result;
    result.reserve(str.size());    //str의 크기 만큼 메모리 확보
    for (unsigned char c : str) 
    {
        // 비어있는 string인 result에 str의 요소를 upper 해서 하나씩 삽입
        result.push_back(static_cast<char>(std::toupper(c)));
    }

    return result;
}

std::string 
Utils::String::Smaller::
toLowerCase(const std::string& str)
{
    std::string result;
    result.reserve(str.size());    //str의 크기 만큼 메모리 확보
    for (unsigned char c : str) 
    {
        // 비어있는 string인 result에 str의 요소를 lower 해서 하나씩 삽입
        result.push_back(static_cast<char>(std::tolower(c)));
    }
    return result;
}

// text를 전체 문자열, pattern을 text 내 포함 여부를 확인 해야 하는 문자열로 간주
// 즉, pattern 문자열은 text 문자열의 부분집합으로 간주
bool 
Utils::String::ContainDetect::
contains(const std::string& text, const std::string& pattern)
{
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