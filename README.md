# <div align="center">⌨️ clsInputValidate Library</div>

<div align="center">

A collection of input validation functions designed to make handling user input easier and more reliable in C++.

</div>

---

<div align="center">

## 🛠️ Technologies & Tools

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![Visual Studio](https://img.shields.io/badge/Visual%20Studio-5C2D91?style=for-the-badge&logo=visualstudio&logoColor=white)
![Git](https://img.shields.io/badge/Git-F05032?style=for-the-badge&logo=git&logoColor=white)
![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)
![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)

</div>

## 📌 Overview

**clsInputValidate** is a C++ utility library that provides reusable functions for validating numeric inputs, checking number ranges, and reading positive numbers from users.

## ✨ Features

- 🔢 Validate numbers within a specific range.
- 📊 Support `int`, `short`, `double`, and `float` data types.
- ⌨️ Read integer numbers from users.
- 🔣 Read double numbers from users.
- ✅ Read positive integer and double numbers.
- 🎯 Read numbers within a specified range.
- ⚠️ Display customizable error messages for invalid inputs.

## 📂 Project Structure

```text
clsInputValidate/
│
├── clsInputValidate.h
└── clsInputValidate.cpp
```

## 🚀 Usage

Include the library header file in your project:

```cpp
#include "clsInputValidate.h"
```

Example:

```cpp
int Number = clsInputValidate::ReadIntNumber();

double Salary = clsInputValidate::ReadDblNumberBetween(
    "Enter Salary: ", 1000, 10000
);

int Age = clsInputValidate::ReadPostiveIntNumber();
```

---

## 👨‍💻 Author

**Mohamed Askar**