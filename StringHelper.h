#ifndef StringHelper.h
#define StringHelper.h

#include <string>
#include <iostream>

namespace Utils::String{

    class Larger
    {
        public:
        // 문자열을 대문자로 변환
        static std::string toUpperCase(const std::string& str); 
        
        Larger() = delete;
        ~Larger() = delete;
    };

    class Smaller
    {
        public:
        // 문자열을 소문자로 변환
        static std::string toLowerCase(const std::string& str);

        Smaller() = delete;
        ~Smaller() = delete;
    };

    class ContainDetect
    {
        public:
        // 문자열 포함 여부 확인
        static bool contains(const std::string& text, const std::string& pattern);

        ContainDetect() = delete;
        ~ContainDetect() = delete;
    };

}

#endif