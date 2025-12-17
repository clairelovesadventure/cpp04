# 📚 C++ - Module 04: Subtype Polymorphism, Abstract Classes, and Interfaces

## 📄 Summary

[cite_start]This document contains the exercises for Module 04 of the C++ modules[cite: 3].

  * [cite_start]**Version:** 12.0 [cite: 4]

-----

## 🧭 Contents

| | Chapter | Page |
| :---: | :--- | :---: |
| I | Introduction | [cite_start]2 [cite: 6] |
| II | General rules | [cite_start]3 [cite: 6] |
| III | AI Instructions | [cite_start]6 [cite: 6] |
| IV | Exercise 00: Polymorphism | [cite_start]8 [cite: 6] |
| V | Exercise 01: I don't want to set the world on fire | [cite_start]10 [cite: 6] |
| VI | Exercise 02: Abstract class | [cite_start]12 [cite: 6] |
| VII | Exercise 03: Interface & recap | [cite_start]13 [cite: 6] |
| VIII | Submission and Peer Evaluation | [cite_start]17 [cite: 6] |

-----

## 📖 Chapter I: Introduction

  * [cite_start]C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, or "C with Classes"[cite: 10].
  * [cite_start]The goal of these modules is to introduce you to **Object-Oriented Programming (OOP)**[cite: 11].
  * [cite_start]Your code will comply with the **C++98 standard**[cite: 13].

-----

## 🛠️ Chapter II: General rules

### Compiling

  * [cite_start]Compile your code with `c++` and the flags `-Wall -Wextra -Werror`[cite: 20].
  * [cite_start]Your code should still compile if you add the flag `-std=c++98`[cite: 21].

### Formatting and naming conventions

  * [cite_start]The exercise directories will be named this way: `ex00`, `ex01`, `exn`[cite: 23, 24].
  * [cite_start]Write class names in **UpperCamel Case** format[cite: 26]. [cite_start]Files containing class code will always be named according to the class name (e.g., `ClassName.hpp`/`ClassName.h`, `ClassName.cpp`)[cite: 26, 28].
  * [cite_start]Every output message must end with a **newline character** and be displayed to the **standard output**, unless specified otherwise[cite: 29].
  * [cite_start]**No coding style is enforced** ("Goodbye Norminette\!"), but write clean and readable code[cite: 30, 32].

### Allowed/Forbidden

  * [cite_start]You are allowed to use almost everything from the standard library[cite: 35]. [cite_start]Use the C++-ish versions of C functions as much as possible[cite: 36].
  * **Forbidden:**
      * [cite_start]Any other external library (C++11, Boost libraries)[cite: 37].
      * [cite_start]The functions: `*printf()`, `*alloc()`, and `free()` (Using these results in a grade of 0)[cite: 38, 39].
      * [cite_start]The keywords `using namespace <ns_name>` and `friend`, unless explicitly stated otherwise (Using these results in a grade of -42)[cite: 43, 44].
      * [cite_start]The **STL** (Containers, Algorithms) is only allowed in Modules 08 and 09 (Using it before then results in a grade of -42)[cite: 45, 46].

### A few design requirements

  * [cite_start]You must avoid **memory leaks** when allocating memory using `new`[cite: 48].
  * [cite_start]From Module 02 to Module 09, your classes must be designed in the **Orthodox Canonical Form**, except when explicitly stated otherwise[cite: 49].
  * [cite_start]Any function implementation put in a header file (except for function templates) means **0 to the exercise**[cite: 50].
  * [cite_start]Headers must include all dependencies and must avoid the problem of **double inclusion** by adding **include guards** (Otherwise, your grade will be 0)[cite: 52, 53].

-----

## 🤖 Chapter III: AI Instructions

### Main message

  * [cite_start]**Build strong foundations without shortcuts**[cite: 80].
  * [cite_start]The learning journey is more important than the result[cite: 83].

### Learner rules

  * [cite_start]You should apply **reasoning** to your assigned tasks, especially before turning to AI[cite: 86].
  * [cite_start]You should **not ask for direct answers to the AI**[cite: 90].

### Comments and example

  * [cite_start]AI gives you the answer directly, but that prevents you from building your own reasoning[cite: 101].
  * [cite_start]**Reasoning takes time, effort, and involves failure**[cite: 102].
  * [cite_start]**Keep in mind that during exams, AI is not available**[cite: 103].
  * [cite_start]**Peer learning** is more valuable than chatting with a bot[cite: 104, 105].

-----

## 💻 Chapter IV: Exercise 00: Polymorphism

  * **Exercise:** 00
  * **Turn-in directory:** `ex00/`
  * [cite_start]**Files to turn in:** `Makefile`, `main.cpp`, `*.cpp`, `*.{h, hpp}` [cite: 122]
  * [cite_start]**Forbidden functions:** None [cite: 123]

### Requirements

1.  [cite_start]**Implement a simple base class called `Animal`**[cite: 126].
2.  [cite_start]`Animal` has one **protected attribute**: `std::string type;`[cite: 126, 127].
3.  [cite_start]**Implement a `Dog` class and a `Cat` class** that inherit from `Animal`[cite: 128, 129].
4.  [cite_start]These derived classes must set their `type` field: `Dog`'s type will be "Dog", and `Cat`'s type will be "Cat"[cite: 130, 131].
5.  [cite_start]Every animal must be able to use the member function: `makeSound()`[cite: 133]. [cite_start]It will print an appropriate sound (cats don't bark)[cite: 134].
6.  [cite_start]Running the example code (which uses `const Animal*` pointers) should print the **specific sounds** of the `Dog` and `Cat` classes, not the `Animal`'s[cite: 138, 148, 149]. 7.  To ensure understanding, implement a `WrongCat` class that inherits from a `WrongAnimal` class. [cite_start]If you replace the `Animal` and the `Cat` in the example code with the wrong ones, the `WrongCat` should output the `WrongAnimal` sound[cite: 153, 154].
7.  [cite_start]Constructors and destructors of each class must display specific messages[cite: 125].
8.  [cite_start]Implement and turn in the most complete tests you can[cite: 124].

-----

## 🔥 Chapter V: Exercise 01: I don’t want to set the world on fire

  * **Exercise:** 01
  * **Turn-in directory:** `ex01/`
  * [cite_start]**Files to turn in:** Files from previous exercise + `*.cpp`, `*.{h, hpp}` [cite: 157]
  * [cite_start]**Forbidden functions:** None [cite: 157]

### Requirements

1.  [cite_start]**Implement a `Brain` class**[cite: 158]. [cite_start]It contains an array of 100 `std::string` called `ideas`[cite: 158].
2.  [cite_start]`Dog` and `Cat` will have a **private `Brain*` attribute**[cite: 159].
3.  [cite_start]Upon construction, `Dog` and `Cat` will create their `Brain` using `new Brain()`[cite: 160].
4.  [cite_start]Upon destruction, `Dog` and `Cat` will `delete` their `Brain`[cite: 161].
5.  [cite_start]In your `main` function, create and fill an array of `Animal` objects[cite: 161]. [cite_start]Half should be `Dog` objects and the other half `Cat` objects[cite: 162].
6.  [cite_start]At the end, loop over this array and `delete` every `Animal`[cite: 163].
7.  [cite_start]You must delete dogs and cats **as Animals**, and the appropriate destructors must be called in the expected order[cite: 164].
8.  [cite_start]A copy of a `Dog` or a `Cat` must **not be shallow**[cite: 165]. [cite_start]You must test that your copies are **deep copies**[cite: 166].
9.  [cite_start]Don’t forget to check for memory leaks[cite: 165].
10. [cite_start]Constructors and destructors of each class must display specific messages[cite: 157].

-----

## 🚫 Chapter VI: Exercise 02: Abstract class

  * **Exercise:** 02
  * **Turn-in directory:** `ex02/`
  * [cite_start]**Files to turn in:** Files from previous exercise + `*.cpp`, `*.{h, hpp}` [cite: 170]
  * [cite_start]**Forbidden functions:** None [cite: 170]

### Requirements

1.  [cite_start]The default `Animal` class should **not be instantiable**[cite: 171].
2.  [cite_start]**Fix the `Animal` class** so that nobody can instantiate it[cite: 172].
3.  [cite_start]Everything should work as before[cite: 172].
4.  [cite_start]Optionally, you can update the class name by adding an `A` prefix (e.g., `AAnimal`)[cite: 173].

-----

## 🔗 Chapter VII: Exercise 03: Interface & recap

  * **Exercise:** 03
  * **Turn-in directory:** `ex03/`
  * [cite_start]**Files to turn in:** `Makefile`, `main.cpp`, `*.cpp`, `*.{h, hpp}` [cite: 174]
  * [cite_start]**Forbidden functions:** None [cite: 174]
  * [cite_start]**Note:** You can pass this module without doing exercise 03[cite: 208].

### Interfaces in C++98

  * [cite_start]Pure abstract classes are commonly called **interfaces** in C++[cite: 175].

### AMateria Class

  * [cite_start]**Complete the definition of the following abstract class `AMateria`** and implement the necessary member functions[cite: 176]:
    ```cpp
    class AMateria
    {
    protected:
        // [...]
    public:
        AMateria(std::string const & type);
        // [...]
        std::string const & getType() const; [cite_start]//Returns the materia type [cite: 177, 178]
        virtual AMateria* clone() const = 0; // Pure virtual function
        virtual void use(ICharacter& target);
    };
    ```

### Concrete Materias: Ice and Cure

  * [cite_start]**Implement the concrete classes `Ice` and `Cure`**[cite: 179].
  * [cite_start]Use their names in lowercase ("ice" for `Ice`, "cure" for `Cure`) to set their types[cite: 180].
  * [cite_start]Their member function `clone()` will return a new instance of the same type[cite: 181].
  * The `use(ICharacter&)` member function will display:
      * [cite_start]**Ice:** `* shoots an ice bolt at <name> *` [cite: 182]
      * [cite_start]**Cure:** `* heals <name>’s wounds *` [cite: 182]

### ICharacter Interface & Character Class

  * [cite_start]**Write the concrete class `Character`** which implements the following interface[cite: 184]:
    ```cpp
    class ICharacter
    {
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
    };
    ```
  * [cite_start]**Inventory:** The `Character` possesses an inventory of **4 slots** (at most 4 `Materias`), empty upon construction[cite: 186, 187].
  * [cite_start]`equip()`: Equips `Materias` in the first empty slot, from slot 0 to slot 3[cite: 187].
  * [cite_start]`unequip(int idx)`: Must **NOT delete the Materia**[cite: 188]. [cite_start]Handle the Materias left on the floor to **avoid memory leaks**[cite: 189].
  * [cite_start]`use(int idx, ICharacter& target)`: Uses the Materia at `slot[idx]`, passing `target` to `AMateria::use`[cite: 190].
  * **Construction/Copy:**
      * [cite_start]`Character` must have a constructor taking its name as a parameter[cite: 193].
      * [cite_start]Any copy (copy constructor or copy assignment operator) of a `Character` must be **deep**[cite: 194].
      * [cite_start]During copy, the Materias of a Character must be **deleted** before the new ones are added[cite: 195].
      * [cite_start]Materias must be **deleted when a Character is destroyed**[cite: 196].

### IMateriaSource Interface & MateriaSource Class

  * [cite_start]**Write the concrete class `MateriaSource`** which implements the following interface[cite: 197]:
    ```cpp
    class IMateriaSource
    {
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
    };
    ```
  * [cite_start]**`learnMateria(AMateria*)`**: Copies the Materia passed as a parameter and stores it as a template[cite: 199]. [cite_start]It can know at most **4 Materias**[cite: 199].
  * [cite_start]**`createMateria(std::string const & type)`**: Returns a **new Materia** which is a deep copy (clone) of the previously learned template whose type equals the one passed as a parameter[cite: 200, 202]. [cite_start]Returns `0` if the type is unknown[cite: 201].

-----

## 📤 Chapter VIII: Submission and Peer Evaluation

  * [cite_start]Submit your assignment in your Git repository[cite: 209].
  * [cite_start]During the evaluation, a **brief modification of the project** may occasionally be requested[cite: 212].
      * [cite_start]This is to verify your **actual understanding** of a specific part of the project[cite: 215].
      * [cite_start]The modification should be feasible within a few minutes[cite: 216].