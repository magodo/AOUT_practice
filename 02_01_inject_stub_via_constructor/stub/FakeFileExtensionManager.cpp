/*************************************************************************
 Author: Zhaoting Weng
 Created Time: Tue 02 Aug 2016 08:58:47 AM CST
 File Name: FakeFileExtensionManager.cpp
 Description: 
 ************************************************************************/

#include "FakeFileExtensionManager.hpp"

FakeFileExtensionManager::FakeFileExtensionManager():
    m_isValid(0)
{
    /* empty */
}

FakeFileExtensionManager::~FakeFileExtensionManager()
{
    /* empty */
}

bool FakeFileExtensionManager::IsValid(std::string filename)
{
    return m_isValid;
}

void FakeFileExtensionManager::setIsValid(bool is)
{
    m_isValid = is;
}
