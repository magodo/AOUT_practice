/*************************************************************************
 Author: Zhaoting Weng
 Created Time: Tue 02 Aug 2016 08:48:34 AM CST
 File Name: LogAn.cpp
 Description: 
 ************************************************************************/

#include "LogAn.hpp"
#include "FileExtensionManager.hpp"
#include "IFileExtensionManager.hpp"

/*======================================
 * Constructor
 * =====================================*/
LogAn::LogAn()
{
    m_manager = new FileExtensionManager();
}

LogAn::LogAn(IFileExtensionManager* manager):
    m_manager(manager)
{
    /* empty */
}

/*======================================
 * Destructor
 * =====================================*/
LogAn::~LogAn()
{
    delete m_manager;
}

/*======================================
 * Setter
 * =====================================*/
void LogAn::SetFileExtMgr(IFileExtensionManager *mgr)
{
    delete m_manager;
    m_manager = mgr;
}

bool LogAn::IsValidLogFileName(std::string filename)
{
    return m_manager->IsValid(filename);
}
