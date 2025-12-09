// Login Form Validation Program in C++
// This program demonstrates input validation for a login form

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

// Function to validate username
// Rules: 
// - Length between 5 and 20 characters
// - Only alphanumeric characters and underscores allowed
// - Must start with a letter
bool validateUsername(const string& username) {
    // Check length
    if (username.length() < 5 || username.length() > 20) {
        cout << "Error: Username must be between 5 and 20 characters." << endl;
        return false;
    }
    
    // Check if first character is a letter
    if (!isalpha(username[0])) {
        cout << "Error: Username must start with a letter." << endl;
        return false;
    }
    
    // Check for valid characters (alphanumeric and underscore)
    for (char c : username) {
        if (!isalnum(c) && c != '_') {
            cout << "Error: Username can only contain letters, numbers, and underscores." << endl;
            return false;
        }
    }
    
    return true;
}

// Function to validate password
// Rules:
// - Minimum length of 8 characters
// - Must contain at least one uppercase letter
// - Must contain at least one lowercase letter
// - Must contain at least one digit
// - Must contain at least one special character
bool validatePassword(const string& password) {
    // Check minimum length
    if (password.length() < 8) {
        cout << "Error: Password must be at least 8 characters long." << endl;
        return false;
    }
    
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    
    for (char c : password) {
        if (isupper(c)) hasUpper = true;
        else if (islower(c)) hasLower = true;
        else if (isdigit(c)) hasDigit = true;
        else hasSpecial = true;
    }
    
    if (!hasUpper) {
        cout << "Error: Password must contain at least one uppercase letter." << endl;
        return false;
    }
    if (!hasLower) {
        cout << "Error: Password must contain at least one lowercase letter." << endl;
        return false;
    }
    if (!hasDigit) {
        cout << "Error: Password must contain at least one digit." << endl;
        return false;
    }
    if (!hasSpecial) {
        cout << "Error: Password must contain at least one special character." << endl;
        return false;
    }
    
    return true;
}

// Function to validate email
// Basic email validation rules:
// - Must contain exactly one @ symbol
// - Must have characters before and after @
// - Must contain a dot (.) after @
// - Must have characters after the dot
bool validateEmail(const string& email) {
    // Count @ symbols
    int atCount = count(email.begin(), email.end(), '@');
    
    if (atCount != 1) {
        cout << "Error: Email must contain exactly one '@' symbol." << endl;
        return false;
    }
    
    // Find position of @
    size_t atPos = email.find('@');
    
    // Check if there are characters before @
    if (atPos == 0) {
        cout << "Error: Email must have characters before '@'." << endl;
        return false;
    }
    
    // Check if there are characters after @
    if (atPos == email.length() - 1) {
        cout << "Error: Email must have characters after '@'." << endl;
        return false;
    }
    
    // Find dot after @
    size_t dotPos = email.find('.', atPos);
    
    if (dotPos == string::npos) {
        cout << "Error: Email must contain a '.' after '@'." << endl;
        return false;
    }
    
    // Check if there's at least one character between @ and .
    if (dotPos - atPos <= 1) {
        cout << "Error: Email must have at least one character between '@' and '.'." << endl;
        return false;
    }
    
    // Check if there are characters after the last dot
    if (dotPos == email.length() - 1) {
        cout << "Error: Email must have characters after the last '.'." << endl;
        return false;
    }
    
    return true;
}

// Function to confirm password
bool confirmPassword(const string& password, const string& confirmPass) {
    if (password != confirmPass) {
        cout << "Error: Passwords do not match." << endl;
        return false;
    }
    return true;
}

int main() {
    string username, email, password, confirmPass;
    
    cout << "========================================" << endl;
    cout << "    Login Form Validation System" << endl;
    cout << "========================================" << endl;
    cout << endl;
    
    // Username input and validation
    cout << "Username Requirements:" << endl;
    cout << "  - 5-20 characters" << endl;
    cout << "  - Must start with a letter" << endl;
    cout << "  - Only letters, numbers, and underscores allowed" << endl;
    cout << endl;
    
    do {
        cout << "Enter username: ";
        getline(cin, username);
    } while (!validateUsername(username));
    
    cout << "✓ Username accepted!" << endl << endl;
    
    // Email input and validation
    cout << "Email Requirements:" << endl;
    cout << "  - Valid email format (e.g., user@example.com)" << endl;
    cout << endl;
    
    do {
        cout << "Enter email: ";
        getline(cin, email);
    } while (!validateEmail(email));
    
    cout << "✓ Email accepted!" << endl << endl;
    
    // Password input and validation
    cout << "Password Requirements:" << endl;
    cout << "  - Minimum 8 characters" << endl;
    cout << "  - At least one uppercase letter" << endl;
    cout << "  - At least one lowercase letter" << endl;
    cout << "  - At least one digit" << endl;
    cout << "  - At least one special character" << endl;
    cout << endl;
    
    do {
        cout << "Enter password: ";
        getline(cin, password);
    } while (!validatePassword(password));
    
    cout << "✓ Password accepted!" << endl << endl;
    
    // Confirm password
    do {
        cout << "Confirm password: ";
        getline(cin, confirmPass);
    } while (!confirmPassword(password, confirmPass));
    
    cout << "✓ Password confirmed!" << endl << endl;
    
    // Success message
    cout << "========================================" << endl;
    cout << "  Registration Successful!" << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Account Details:" << endl;
    cout << "  Username: " << username << endl;
    cout << "  Email: " << email << endl;
    cout << endl;
    cout << "Thank you for registering!" << endl;
    
    return 0;
}
