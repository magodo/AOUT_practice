#ifndef LOG_AN_HPP
#define LOG_AN_HPP

#include "IFileExtensionManager.hpp"
#include <string>

class LogAn
{
    public:
        LogAn();
        ~LogAn();
        bool IsValidLogFileName(std::string);

    private:
        IFileExtensionManager *m_manager;
};

#endif //LOG_AN_HPP
