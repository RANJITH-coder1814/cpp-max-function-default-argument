# cpp-max-function-default-argument
C++ 
# C++ Max Function Using Default Argument

This repository contains a simple C++ program that demonstrates the use of a function with a **default argument** to find the maximum of two or three numbers.

---

## 📌 Program Description

The `max()` function accepts three integers:
- The third parameter has a default value of `0`
- It uses the **ternary operator** to determine the maximum value

This allows the function to work with both two and three arguments.

---

## 🧠 Concepts Covered

- Default function arguments
- Ternary (conditional) operator
- Function definition and calling
- Basic input/output in C++
- 
---

## 💻 Source Code Example

```cpp
#include <iostream>
using namespace std;

int max(int x, int y, int z = 0) {
    return x > y && x > z ? x : y > z ? y : z;
}

int main() {
    cout << max(54, 24) << endl;
    cout << max(3, 4, 0) << endl;
    cout << max(13, 56, 14) << endl;
    return 0;
}


## 📂 File Structure

