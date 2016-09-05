/*************************************************************************
 Author: Zhaoting Weng
 Created Time: Tue 02 Aug 2016 08:48:34 AM CST
 File Name: LogAn.cpp
 Description: 
 ************************************************************************/

#include "ExtensionManagerFactory.hpp"
#include "LogAn.hpp"

LogAn::LogAn()
{
    m_manager = ExtensionManagerFactory::Create();
}

LogAn::~LogAn()
{ /* empty */ }

bool LogAn::IsValidLogFileName(std::string filename)
{
    return m_manager->IsValid(filename);
}
