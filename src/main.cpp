#include <iostream>
#include <string>
#include <cctype> 
#include <gtest/gtest.h>


using namespace std;

// Function to check if the password meets the criteria
bool validatePassword(const string &password) {
	// Criteria flags
	 bool hasUpper = false;
	 bool hasLower = false;
	 bool hasDigit = false;
	 bool hasSpecial = false;
	 // Check each character in the password
	 for (char ch : password) {
		 if (isupper(ch)) hasUpper = true;
		 else if (islower(ch)) hasLower = true;
		 else if (isdigit(ch)) hasDigit = true;
		 else if (ispunct(ch)) hasSpecial = true;
	 }
 // Check if all criteria are met

 return (password.length() >= 8 && hasUpper && hasLower && hasDigit && hasSpecial);
}



TEST(testsuit1, testcase_1){
	EXPECT_EQ(validatePassword(""),false);
}
TEST(testsuit1, testcase_2){
	EXPECT_EQ(validatePassword("wipro@123"),false);
}
TEST(testsuit2, testcase_1){
	EXPECT_EQ(validatePassword("Wipro$$123"),true);
}
TEST(testsuit2, testcase_2){
	EXPECT_EQ(validatePassword("Prudhvia99"),false);
}
TEST(testsuit1, testcase_3){
	EXPECT_EQ(validatePassword("prudhvi@@"),false);
}
TEST(testsuit2, testcase_3){
	EXPECT_EQ(validatePassword("prudhvi@@"),false);
}
