#include <gtest/gtest.h>
#include <string>

// Function to be tested
std::string checkCredentials(const std::string& username, const std::string& password) {
    const std::string correctUsername = "admin";
    const std::string correctPassword = "password123";

    if (username == correctUsername && password == correctPassword) {
        return "Success";
    } else {
        return "Failure";
    }
}

// Test case for successful login
TEST(CheckCredentialsTest, CorrectCredentials) {
    EXPECT_EQ(checkCredentials("admin", "password123"), "Success");
}

// Test case for incorrect username
TEST(CheckCredentialsTest, IncorrectUsername) {
    EXPECT_EQ(checkCredentials("user", "password123"), "Failure");
}

// Test case for incorrect password
TEST(CheckCredentialsTest, IncorrectPassword) {
    EXPECT_EQ(checkCredentials("admin", "wrongpassword"), "Failure");
}

// Test case for both username and password incorrect
TEST(CheckCredentialsTest, IncorrectCredentials) {
    EXPECT_EQ(checkCredentials("user", "wrongpassword"), "Failure");
}
