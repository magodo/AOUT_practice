/*************************************************************************
 Author: Zhaoting Weng
 Created Time: Mon 05 Sep 2016 10:20:05 PM CST
 Description: 
 ************************************************************************/

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "FileExtensionManager.hpp"
#include "FakeFileExtensionManager.hpp"
#include "ExtensionManagerFactory.hpp"
#include "LogAn.hpp"

TEST_CASE("IsValidLogFileName")
{
    FakeFileExtensionManager *stub_file_ext_mgr = new FakeFileExtensionManager;

    SECTION("Valid Filename")
    {
        stub_file_ext_mgr->SetIsValid(true);
        ExtensionManagerFactory::SetManager(stub_file_ext_mgr);
        LogAn *log_an = new LogAn;
        REQUIRE(log_an->IsValidLogFileName("foobar") == true);
    }

    SECTION("Invalid Filename")
    {
        stub_file_ext_mgr->SetIsValid(false);
        ExtensionManagerFactory::SetManager(stub_file_ext_mgr);
        LogAn *log_an = new LogAn;
        REQUIRE(log_an->IsValidLogFileName("foobar") == false);
    }
}
