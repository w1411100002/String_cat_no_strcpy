#include <cxxtest/TestSuite.h>

extern void string_cat_no_strcpyMain(int argc, const char** argv, char result []);

class String_cat_no_strcpyTest : public CxxTest::TestSuite
{

public:
	void setUp() {
	}

	void tearDown(){
	}

	void test_Unit_Test_1(){
		TS_SKIP("Unit tests are skipped, please author unit tests, if required");
	}
	
	void test_Unit_Test_2(){
             const char *largv[] = {"1", "HELLO", "-WORLD"};
	         char result[100];

	        string_cat_no_strcpyMain(3, largv, result);
		
	
		    TS_ASSERT_EQUALS("HELLO-WORLD", result);

	}

	
}; 