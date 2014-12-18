import org.junit.Test;

import static org.junit.Assert.*;

import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;
import org.junit.runners.Parameterized.Parameter;
import org.junit.runners.Parameterized.Parameters;

import java.io.File;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.PrintStream;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.nio.charset.StandardCharsets;
import java.util.Collection;
import java.util.Arrays;
import java.util.ArrayList;

import com.ilimi.peutils.SystemCommandExecutor;
import com.ilimi.peutils.SysCommandExecHelper;
import com.ilimi.peutils.IOTestDataProvider;

/**
 * Unit tests for the String_cat_no_strcpy
 */
@RunWith(Parameterized.class)
public class String_cat_no_strcpyBlackBoxTest 
{
	@Parameter
	public String myTestName;

	@Parameter(value = 1)
	public String myTestType;

	@Parameter(value = 2)
	public String myInput;

	@Parameter(value = 3)
    public String myOutput;
	
    @Parameters(name = "{0}")
    public static Collection<Object[]> data() {
    	Collection<Object[]> testData = new ArrayList<Object[]>();
    	try {
    		IOTestDataProvider testDataProvider = new IOTestDataProvider("BlackBox.tests");
        	testData = testDataProvider.getIOTestData();
    	} catch(Exception ex) {
    		System.out.println(ex.getMessage());
            fail("Test failed : " + ex.getMessage());
    	}

    	return testData;
    }

    @Test
    public void test_blackbox() {
    	try {
        	//String executable = String_cat_no_strcpy.out;
    		String executable = System.getProperty("executableName");
			String workingDir = System.getProperty("executableWorkingDir");
			
			//These are any additional command arguments passed before passing any arguments passed as input to executable
			String[] commandArguments = {}; 

			SysCommandExecHelper helper = new SysCommandExecHelper(executable, workingDir);

			String actualResult = "";
			if(myTestType.equals("STDIN")) {
				actualResult = helper.execteAsSTDIN(myInput, commandArguments);
			} else if(myTestType.equals("CLI")) {
				actualResult = helper.execteAsCLI(myInput, commandArguments);
			}

			int exitCode = helper.getExitCode();
						
			/*System.out.println(myTestName + "   Actual: [" + actualResult + "]");
			System.out.println(myTestName + " Expected: [" + myOutput +"]");
			System.out.println("Exit code: " + exitCode);*/

        	assertEquals(myOutput, actualResult); 
        	assertEquals(0, exitCode); //execution terminated normally

        } catch (Exception e) {
        	//e.printStackTrace();
            //System.out.println(e.getMessage());
            fail("Test failed : " + e.getMessage());
        } 
    }   
}
