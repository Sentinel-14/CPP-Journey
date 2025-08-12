/* 
===============================================================================
                        CSTRING LIBRARY COMPLETE REFERENCE GUIDE
===============================================================================

This file contains comprehensive information about all <cstring> library functions
Author: [Your Name]
Date: [Current Date]
Purpose: Reference guide for C-style string manipulation functions

===============================================================================
                                BASIC FUNCTIONS
===============================================================================

1. strlen() - Get String Length
   - Purpose: Returns the number of characters in a string (excluding null terminator)
   - Syntax: size_t strlen(const char* str)
   - Example: strlen("Hello") returns 5
   - Use case: Finding string length for loops, validation

2. strcpy() - Copy String
   - Purpose: Copies source string to destination
   - Syntax: char* strcpy(char* dest, const char* src)
   - Example: strcpy(dest, "Hello") copies "Hello" to dest
   - Warning: Ensure dest has enough space

3. strcat() - Concatenate Strings
   - Purpose: Appends source string to end of destination string
   - Syntax: char* strcat(char* dest, const char* src)
   - Example: strcat("Hello", " World") results in "Hello World"
   - Warning: Ensure dest has enough space for both strings

4. strcmp() - Compare Strings
   - Purpose: Compares two strings lexicographically
   - Syntax: int strcmp(const char* str1, const char* str2)
   - Return values:
     * < 0: str1 is less than str2
     * = 0: str1 equals str2
     * > 0: str1 is greater than str2
   - Example: strcmp("apple", "banana") returns negative value

===============================================================================
                               SEARCH FUNCTIONS
===============================================================================

5. strchr() - Find First Character Occurrence
   - Purpose: Finds first occurrence of a character in string
   - Syntax: char* strchr(const char* str, int character)
   - Returns: Pointer to first occurrence or NULL if not found
   - Example: strchr("Hello", 'l') returns pointer to first 'l'

6. strrchr() - Find Last Character Occurrence
   - Purpose: Finds last occurrence of a character in string
   - Syntax: char* strrchr(const char* str, int character)
   - Returns: Pointer to last occurrence or NULL if not found
   - Example: strrchr("Hello", 'l') returns pointer to last 'l'

7. strstr() - Find Substring
   - Purpose: Finds first occurrence of substring in string
   - Syntax: char* strstr(const char* haystack, const char* needle)
   - Returns: Pointer to first occurrence or NULL if not found
   - Example: strstr("Hello World", "World") returns pointer to "World".

===============================================================================
                              ADVANCED FUNCTIONS
===============================================================================

8. strtok() - Tokenize String
   - Purpose: Splits string into tokens based on delimiters
   - Syntax: char* strtok(char* str, const char* delimiters)
   - First call: Pass string to tokenize
   - Subsequent calls: Pass NULL to continue tokenizing
   - Example: Split "a,b,c" using "," delimiter
   - Warning: Modifies original string

9. strncpy() - Safe Copy (n characters)
   - Purpose: Copies at most n characters from source to destination
   - Syntax: char* strncpy(char* dest, const char* src, size_t n)
   - Safer than strcpy() as it limits copying
   - Warning: May not null-terminate if src is >= n characters

10. strncat() - Safe Concatenate (n characters)
    - Purpose: Appends at most n characters from source to destination
    - Syntax: char* strncat(char* dest, const char* src, size_t n)
    - Safer than strcat() as it limits appending

11. strncmp() - Compare n Characters
    - Purpose: Compares first n characters of two strings
    - Syntax: int strncmp(const char* str1, const char* str2, size_t n)
    - Useful for prefix comparison

===============================================================================
                              UTILITY FUNCTIONS
===============================================================================

12. strcspn() - Count Characters Not in Set
    - Purpose: Returns length of initial segment not containing specified characters
    - Syntax: size_t strcspn(const char* str, const char* reject)
    - Example: strcspn("Hello123", "0123456789") returns 5

13. strspn() - Count Characters in Set
    - Purpose: Returns length of initial segment containing only specified characters
    - Syntax: size_t strspn(const char* str, const char* accept)
    - Example: strspn("abc123", "abcdef") returns 3

14. strpbrk() - Find First Character from Set
    - Purpose: Finds first occurrence of any character from set
    - Syntax: char* strpbrk(const char* str, const char* accept)
    - Returns: Pointer to first match or NULL

===============================================================================
                                COMMON PATTERNS
===============================================================================

// Pattern 1: Safe string copying
char dest[100];
if (strlen(source) < sizeof(dest)) {
    strcpy(dest, source);
}

// Pattern 2: String tokenization
char temp[100];
strcpy(temp, original);  // Make copy as strtok modifies string
char* token = strtok(temp, " ,");
while (token != NULL) {
    // Process token
    token = strtok(NULL, " ,");
}

// Pattern 3: Safe string concatenation
if (strlen(dest) + strlen(src) < sizeof(dest)) {
    strcat(dest, src);
}

// Pattern 4: Case-insensitive comparison (manual implementation needed)
// Use tolower() from <cctype> with strcmp()

===============================================================================
                               SAFETY GUIDELINES
===============================================================================

1. BUFFER OVERFLOW PREVENTION:
   - Always check destination buffer size before copying/concatenating
   - Use strn* functions (strncpy, strncat, strncmp) when possible
   - Never assume input string length

2. NULL POINTER CHECKS:
   - Check return values of strchr, strrchr, strstr before using
   - Handle NULL cases appropriately

3. STRING MODIFICATION:
   - Remember that strtok modifies the original string
   - Make copies if you need to preserve original

4. NULL TERMINATION:
   - strncpy may not null-terminate; add '\0' manually if needed
   - Always ensure strings are properly null-terminated

===============================================================================
                              QUICK REFERENCE TABLE
===============================================================================

Function    | Purpose              | Safe Version | Modifies Original
----------- | -------------------- | ------------ | -----------------
strlen()    | Get length          | N/A          | No
strcpy()    | Copy string         | strncpy()    | No (source)
strcat()    | Concatenate         | strncat()    | Yes (dest)
strcmp()    | Compare strings     | strncmp()    | No
strchr()    | Find character      | N/A          | No
strrchr()   | Find last char      | N/A          | No
strstr()    | Find substring      | N/A          | No
strtok()    | Tokenize           | strtok_r()   | Yes

===============================================================================
                                 EXAMPLES
===============================================================================

Example 1: Password validation
bool isValidPassword(const char* password) {
    return strlen(password) >= 8 && 
           (strchr(password, '@') || strchr(password, '#'));
}

Example 2: File extension check
bool hasExtension(const char* filename, const char* ext) {
    char* dot = strrchr(filename, '.');
    return dot && strcmp(dot, ext) == 0;
}

Example 3: Word counting
int countWords(const char* sentence) {
    char temp[1000];
    strcpy(temp, sentence);
    int count = 0;
    char* token = strtok(temp, " \t\n");
    while (token) {
        count++;
        token = strtok(NULL, " \t\n");
    }
    return count;
}

===============================================================================
                            COMPILATION & USAGE
===============================================================================

To use cstring functions:
1. Include header: #include <cstring>
2. Compile: g++ -o program program.cpp
3. Run: ./program

Remember: These are C-style functions. For C++, consider using std::string class
for safer and more convenient string operations.

===============================================================================
                                END OF GUIDE
===============================================================================
*/

#include <iostream>
#include <cstring>
using namespace std;

// Add your implementation code here if needed
int main() {
    cout << "cstring library reference guide loaded!" << endl;
    cout << "Check comments above for complete function reference." << endl;
    return 0;
}