/*************************************************************************
 Author: Zhaoting Weng
 Created Time: Tue 02 Aug 2016 08:58:47 AM CST
 File Name: FakeFileExtensionManager.cpp
 Description: 
 ************************************************************************/

#include "FakeFileExtensionManager.hpp"

FakeFileExtensionManager::FakeFileExtensionManager()
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

void FakeFileExtensionManager::SetIsValid(bool is)
{
    m_isValid = is;
}
