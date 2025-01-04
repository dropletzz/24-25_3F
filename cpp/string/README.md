
Some of the most commonly used methods of the `std::string` class in C++.

* * *

### 1\. **Basic Operations**

*   **`length()` / `size()`**
    
    *   Returns the number of characters in the string.
    *   Example:
        
        ```
        std::string s = "hello";
        std::cout << s.length(); // 5
        ```
        
*   **`operator[]` / `at()`**
    
    *   Accesses a character at a specified position (bounds-checked for `at()`).
    *   Example:
        
        ```
        std::string s = "hello";
        char c1 = s[1]; // 'e'
        char c2 = s.at(1); // 'e'
        ```
        
*   **`front()` / `back()`**
    
    *   Access the first or last character of the string.
    *   Example:
        
        ```
        std::string s = "hello";
        char f = s.front(); // 'h'
        char b = s.back(); // 'o'
        ```

*   **`empty()`**
    
    *   Checks if the string is empty.
    *   Example:
        
        ```
        std::string s = "";
        if (s.empty()) std::cout << "String is empty";
        ```
        
*   **`clear()`**
    
    *   Erases the content of the string.
    *   Example:
        
        ```
        std::string s = "hello";
        s.clear(); // Now s is empty
        ```
        

* * *

### 2\. **Modification**
        
*   **`append()` / `+=`**
    
    *   Appends a string or character to the current string.
    *   Example:
        
        ``
        std::string s = "hello";
        s.append(" world"); // "hello world"
        s += '!'; // "hello world!"
        ```
        
*   **`insert()`**
    
    *   Inserts characters at a specific position.
    *   Example:
        
        ```
        std::string s = "hello world";
        s.insert(5, ","); // "hello, world"
        ```
        
*   **`erase()`**
    
    *   Removes characters from the string.
    *   Example:
        
        ```
        std::string s = "hello world";
        s.erase(5, 6); // "hello"
        ```
        
*   **`replace()`**
    
    *   Replaces part of the string with another string.
    *   Example:
        
        ```
        std::string s = "hello world";
        s.replace(6, 5, "C++"); // "hello C++"
        ```
        

* * *

### 3\. **Searching**

*   **`find()`**
    
    *   Finds the first occurrence of a substring or character.
    *   Example:
        
        ```
        std::string s = "hello world";
        size_t pos = s.find("world"); // 6
        size_t pos = s.find("ciao"); // std::string::npos
        ```
        
*   **`rfind()`**
    
    *   Finds the last occurrence of a substring or character.
    *   Example:
        
        ```
        std::string s = "hello world";
        size_t pos = s.rfind("o"); // 7
        ```
        
* * *

### 4\. **Utilities**

*   **`substr()`**
    *   Extracts a substring starting at a specified position and length.
    *   Example:
        
        ```
        std::string s = "hello world";
        std::string sub = s.substr(6, 2); // "wo"
        ```

*   **`compare()`**
    *   Compares two strings lexicographically.
    *   Example:
        
        ```
        std::string s1 = "abc";
        std::string s2 = "abd";
        int result = s1.compare(s2); // -1 (s1 is less than s2)
        ```

*   **`resize()`**
    
    *   Resizes the string to a specified length.
    *   Example:
        
        ```
        std::string s = "hello";
        s.resize(3); // "hel"
        ```
        
*   **`swap()`**
    
    *   Swaps the content of two strings.
    *   Example:
        
        ```
        std::string s1 = "hello", s2 = "world";
        s1.swap(s2); // s1 = "world", s2 = "hello"
        ```
        



