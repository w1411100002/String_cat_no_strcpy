/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XmlPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::XmlPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XmlPrinter >( tmp, argc, argv );
    return status;
}
bool suite_String_cat_no_strcpyTest_init = false;
#include "/var/www/html/codeit/workspace/String_cat_no_strcpy_exercise/src/String_cat_no_strcpyTest.h"

static String_cat_no_strcpyTest suite_String_cat_no_strcpyTest;

static CxxTest::List Tests_String_cat_no_strcpyTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_String_cat_no_strcpyTest( "/var/www/html/codeit/workspace/String_cat_no_strcpy_exercise/src/String_cat_no_strcpyTest.h", 5, "String_cat_no_strcpyTest", suite_String_cat_no_strcpyTest, Tests_String_cat_no_strcpyTest );

static class TestDescription_suite_String_cat_no_strcpyTest_test_Unit_Test_1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_String_cat_no_strcpyTest_test_Unit_Test_1() : CxxTest::RealTestDescription( Tests_String_cat_no_strcpyTest, suiteDescription_String_cat_no_strcpyTest, 15, "test_Unit_Test_1" ) {}
 void runTest() { suite_String_cat_no_strcpyTest.test_Unit_Test_1(); }
} testDescription_suite_String_cat_no_strcpyTest_test_Unit_Test_1;

static class TestDescription_suite_String_cat_no_strcpyTest_test_Unit_Test_2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_String_cat_no_strcpyTest_test_Unit_Test_2() : CxxTest::RealTestDescription( Tests_String_cat_no_strcpyTest, suiteDescription_String_cat_no_strcpyTest, 19, "test_Unit_Test_2" ) {}
 void runTest() { suite_String_cat_no_strcpyTest.test_Unit_Test_2(); }
} testDescription_suite_String_cat_no_strcpyTest_test_Unit_Test_2;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
