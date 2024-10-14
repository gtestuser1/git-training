#include <gtest/gtest.h>
#include <iostream>
#include <string>

using namespace std;

// Function to check username and password
bool checkCredentials(const string& username, const string& password) {
    // Predefined username and password
    const string correctUsername = "admin";
    const string correctPassword = "password123";
    
    // Check if provided username and password are correct
    if (username == correctUsername && password == correctPassword) {
        return true; // Success
    } else {
        return false; // Failure
    }
}

TEST(TestNegetiveCase, HandleNegetiveCase)
{
  EXPECT_EQ(checkCredentials("",""),false);
}

TEST(TestPositiveCase, HandlePositiveCase)
{
  EXPECT_EQ(checkCredentials("admin","password123"),true);
}

