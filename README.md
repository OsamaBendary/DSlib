
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
#include "DS.h"
#include <iostream>

int main() {
    // Example usage of the Stack
    Stack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Stack top: " << stack.peek() << std::endl;
    stack.pop();
    std::cout << "Stack top after pop: " << stack.peek() << std::endl;

    // Example usage of the Queue
    Queue<int> queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    std::cout << "Queue front: " << queue.peek() << std::endl;
    queue.dequeue();
    std::cout << "Queue front after dequeue: " << queue.peek() << std::endl;

    // Example usage of the Binary Search Tree (BST)
    BST<int> bst;
    bst.insert(50);
    bst.insert(30);
    bst.insert(70);

    std::cout << "BST contains 30: " << (bst.search(30) ? "Yes" : "No") << std::endl;

    // Example usage of the Linked List
    LinkedList<int> list;
    list.insert(1);
    list.insert(2);
    list.insert(3);

    std::cout << "Linked List contents: ";
    list.traverse([](int value) { std::cout << value << " "; });
    std::cout << std::endl;

    list.remove(2);
    std::cout << "Linked List after removing 2: ";
    list.traverse([](int value) { std::cout << value << " "; });
    std::cout << std::endl;

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

