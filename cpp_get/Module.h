#pragma once
#include <string>

namespace businessModels {
    class Module
    {
        unsigned int m_Id;
        std::string m_Name;

        Module(const char* name);
    };
}

