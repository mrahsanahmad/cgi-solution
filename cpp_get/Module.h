#pragma once
#include <string>

namespace businessModels {
    class Module
    {
        unsigned int m_Id;
        std::string m_Name;
    public:
        Module(const char* name, unsigned int id);
    };
}

