
Some of the most commonly used methods of the `std::string` class in C++.

* * *

### 1\. **Operazioni base**

*   **`length()` / `size()`**
    
    *   Restituisce il numero di caratteri della stringa.
    *   Esempio:
        
        ```
        std::string s = "hello";
        std::cout << s.length(); // 5
        ```
        
*   **`operator[]` / `at()`**
    
    *   Restituisce il carattere della striga ad una determinata posizione
    *   Esempio:
        
        ```
        std::string s = "hello";
        char c1 = s[1]; // 'e'
        char c2 = s.at(1); // 'e'
        ```
        
*   **`front()` / `back()`**
    
    *   Restituisce il primo (front) o l'ultimo (back) cacattere della stringa
    *   Esempio:
        
        ```
        std::string s = "hello";
        char f = s.front(); // 'h'
        char b = s.back(); // 'o'
        ```

*   **`empty()`**
    
    *   Controlla se la stringa e' vuota.
    *   Esempio:
        
        ```
        std::string s = "";
        if (s.empty()) std::cout << "La stringa e' vuota";
        ```
        
*   **`clear()`**
    
    *   Cancella il contenuto della stringa.
    *   Esempio:
        
        ```
        std::string s = "hello";
        s.clear(); // Adesso s e' vuota
        ```
        

* * *

### 2\. **Modifica**
        
*   **`append()` / `+=`**
    
    *   Aggiunge una stringa in fondo ad un'altra stinga.
    *   Esempio:
        
        ``
        std::string s = "hello";
        s.append(" world"); // "hello world"
        s += '!'; // "hello world!"
        ```
        
*   **`insert()`**
    
    *   Inserisce una stringa in un'altra, ad una specifica posizione.
    *   Esempio:
        
        ```
        std::string s = "hello world";
        s.insert(5, ","); // "hello, world"
        ```
        
*   **`erase()`**
    
    *   Cancella caratteri da una stringa
    *   Esempio:
        
        ```
        std::string s = "hello world";
        s.erase(5, 6); // "hello"
        ```
        
* * *

### 3\. **Utilita'**

*   **`find()`**
    
    *   Trova la prima occorrenza di una stringa dentro un'altra stringa.
    *   Esemio:
        
        ```
        std::string s = "hello world";
        size_t pos = s.find("world"); // 6
        size_t pos = s.find("ciao"); // std::string::npos
        ```
        
*   **`rfind()`**
    
    *   Trova la'ultima occorrenza di una stringa dentro un'altra stringa.
    *   Esempio:
        
        ```
        std::string s = "hello world";
        size_t pos = s.rfind("o"); // 7
        ```
        
*   **`substr()`**
    *   Estrae una sottostringa data una posizione di partenza ed una lunghezza.
    *   Esempio:
        
        ```
        std::string s = "hello world";
        std::string sub = s.substr(6, 2); // "wo"
        ```

*   **`compare()`**
    *   Confronta due stringhe in 
    *   Esempio:
        
        ```
        std::string s1 = "abc";
        std::string s2 = "abd";
        int result = s1.compare(s2); // -1 (s1 is less than s2)
        ```
        



