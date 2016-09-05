/*************************************************************************
 Author: Zhaoting Weng
 Created Time: Mon 05 Sep 2016 11:29:47 PM CST
 Description: 
 ************************************************************************/

#include "ExtensionManagerFactory.hpp"
#include "FileExtensionManager.hpp"

IFileExtensionManager *ExtensionManagerFactory::m_custom_manager = NULL;

ExtensionManagerFactory::ExtensionManagerFactory()
{ /*empty*/ }

ExtensionManagerFactory::~ExtensionManagerFactory()
{ /*empty*/ }

void ExtensionManagerFactory::SetManager(IFileExtensionManager *mgr)
{
    m_custom_manager = mgr;
}

IFileExtensionManager *ExtensionManagerFactory::Create()
{
    if (m_custom_manager == NULL)
        return new FileExtensionManager;
    else
        return m_custom_manager;
}
