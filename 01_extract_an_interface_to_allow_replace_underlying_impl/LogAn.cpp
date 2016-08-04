/*************************************************************************
 Author: Zhaoting Weng
 Created Time: Tue 02 Aug 2016 08:48:34 AM CST
 File Name: LogAn.cpp
 Description: 
 ************************************************************************/

#include "LogAn.hpp"

LogAn::IsValidLogFileName(std::string filename)
{
    IFileExtensionManager mgr = FileExtensionManager();
    return mgr.IsValid(filename);
}
