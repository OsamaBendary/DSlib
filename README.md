
# DSlib: Data Structures Library in C++

DSlib is a lightweight and efficient C++ library that provides implementations for common data structures such as:
- Stack
- Queue
- Binary Search Tree (BST)
- Linked List

This library is designed to help developers easily integrate these data structures into their projects.

## Features
- **Stack:** Push, pop, peek operations.
- **Queue:** Enqueue, dequeue, peek operations.
- **Binary Search Tree (BST):** Insert, search, delete, and traversal operations.
- **Linked List:** Insert, delete, search, and traversal operations.

## Getting Started

### Prerequisites
To use DSlib, ensure you have:
- A C++ compiler (e.g., `g++`, `clang++`).
- Git installed (optional, for cloning the repository).

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/OsamaBendary/DSlib.git
   cd DSlib
   ```

2. Build the static library:
   ```bash
   g++ -c DS.cpp -o DS.o
   ar rcs libds.a DS.o
   ```

   This will create a static library file named `libds.a` in the project directory.

### Using the Library

1. Include the header file in your project:
   ```cpp
   #include "DS.h"
   ```

2. Compile your project while linking the library. Here's an example:
   ```bash
   g++ main.cpp -o main -L. -lds
   ```

   - `main.cpp` is your C++ source file.
   - `-L.` tells the compiler to look for libraries in the current directory.
   - `-lds` links the `libds.a` library.

3. Run the compiled program:
   ```bash
   ./main
   ```

### Example Usage
Below is an example of how to use DSlib in your project:

#### `main.cpp`
```cpp
#include<iostream>
#include"DS.cpp"
using namespace std;

int main(){
    linkedlist l1;
    l1.insertatbeginning("1");
    l1.insertatbeginning("2");
    l1.insertatbeginning("3");
    l1.insertatbeginning("4");
    l1.insertatbeginning("5");
    l1.insertatend("6");
    l1.insertatposition("0",2);
    l1.deleteatposition(2);
    l1.deleteatposition(1);
    l1.display();
    l1.reverse();
    l1.display();
    l1.search("3");
    l1.search("10");
    l1.deletelast();
    l1.display();
    stack s1;
    s1.push("1");
    s1.push("2");
    s1.push("3");
    s1.pop();
    s1.display();

    queue q1;
    q1.enqueue("1");
    q1.enqueue("2");
    q1.enqueue("3");
    q1.dequeue();
    q1.display();

    tree t1;
    t1.insert("5");
    t1.insert("3");
    t1.insert("7");
    t1.insert("2");
    t1.insert("4");
    t1.insert("6");
    t1.insert("8");
    t1.search("3");
    t1.display();
    return 0;
}
```

Compile and run the example:
```bash
g++ main.cpp -o main -L. -lds
./main
```

### Cleaning Up
To clean up the generated files, run:
```bash
rm -f *.o *.a main
```

## Contributing
Contributions are welcome! Feel free to open issues or submit pull requests for bug fixes, feature requests, or improvements.

## License
This project is licensed under the MIT License - see the `LICENSE` file for details.

---

Happy coding!

