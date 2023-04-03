# alx-low_level_programming

## 0x00-hello_world

### General

    * Why C programming is awesome
    * Who invented C
    * Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
    * What happens when you type ``gcc`` ``main.c``
    * What is an entry point
    * What is ``main``
    * How to print text using ``printf``, ``puts`` and ``putchar``
    * How to get the size of a specific type using the unary operator ``sizeof``
    * How to compile using ``gcc``
    * What is the default program name when compiling with ``gcc``
    * What is the official C coding style and how to check your code with ``betty-style``
    * How to find the right header to include in your source code when using a standard library function
    * How does the ``main`` function influence the return value of the program

## Requirements

### C

    * Allowed editors: ``vi``, ``vim``, ``emacs``
    * All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options ``-Wall -Werror -Wextra -pedantic -std=gnu89``
    * All your files should end with a new line
    * A ``README.md`` file at the root of the repo, containing a description of the repository
    * A ``README.md`` file, at the root of the folder of this project, containing a description of the project
    * There should be no errors and no warnings during compilation
    * You are not allowed to use ``system``
    * Your code should use the Betty style. It will be checked using ``betty-style.pl`` and ``betty-doc.pl``

### Shell Scripts

    * Allowed editors: ``vi``, ``vim``, ``emacs``
    * All your scripts will be tested on Ubuntu 20.04 LTS
    * All your scripts should be exactly two lines long (``$ wc -l`` file should print 2)
    * All your files should end with a new line
    * The first line of all your files should be exactly ``#!/bin/bash``

## More Info

### Betty linter
To run the Betty linter just with command ``betty <filename>:``
    * Go to the ``Betty`` repository
    * Clone the ``repo`` to your local machine
    * ``cd`` into the Betty directory
    * Install the linter with ``sudo ./install.sh``
    * ``emacs`` or ``vi`` a new file called ``betty``, and copy the script below:
```sh
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```
    * Once saved, exit file and change permissions to apply to all users with chmod a+x betty
    * Move the betty file into /bin/ directory or somewhere else in your $PATH with sudo mv betty /bin/
    * You can now type betty <filename> to run the Betty linter!

## 0x01-variables_if_else_while

### General

    * What are the arithmetic operators and how to use them
    * What are the logical operators (sometimes called boolean operators) and how to use them
    * What the the relational operators and how to use them
    * What values are considered TRUE and FALSE in C
    * What are the boolean operators and how to use them
    * How to use the ``if``, ``if ... else`` statements
    * How to use comments
    * How to declare variables of types ``char``, ``int``,`` unsigned int``
    * How to assign values to variables
    * How to print the values of variables of type ``char``, ``int``, ``unsigned int`` with ``printf``
    * How to use the ``while`` loop
    * How to use variables with the ``while`` loop
    * How to print variables using ``printf``
    * What is the ``ASCII`` character set
    * What are the purpose of the ``gcc`` flags ``-m32`` and ``-m64``

## 0x02. C - Functions, nested loops

### General

    * What are nested loops and how to use them
    * What is a function and how do you use functions
    * What is the difference between a declaration and a definition of a function
    * What is a prototype
    * Scope of variables
    * What are the ``gcc`` flags -Wall ``-Werror -pedantic -Wextra -std=gnu89``
    * What are header files and how to to use them with ``#include``
    * Allowed editors: ``vi``, ``vim``, ``emacs``
    * All your files will be compiled on Ubuntu 20.04 LTS using ``gcc``, using the options ``-Wall -Werror -Wextra -pedantic -std=gnu89``
    * All your files should end with a new line
    * A ``README.md`` file, at the root of the folder of the project is mandatory
    * Your code should use the ``Betty`` style. It will be checked using ``betty-style.pl`` and ``betty-doc.pl``
    * You are not allowed to use global variables
    * No more than 5 functions per file
    * You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
    * You are allowed to use ``_putchar``
    * You don’t have to push ``_putchar.c``, we will use our file. If you do it won’t be taken into account
    * In the following examples, the ``main.c`` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own ``main.c`` files at compilation. Our  ``main.c`` files might be different from the one shown in the examples
    * The prototypes of all your functions and the prototype of the function ``_putchar`` should be included in your header file called ``main.h``
    * Don’t forget to push your header file

## 0x03-debugging

### General
    * What is debugging
    * What are some methods of debugging manually
    * How to read the error messages
    * Allowed editors: ``vi``, ``vim``, ``emacs``
    * All your files will be compiled on Ubuntu 20.04 LTS using ``gcc``, using the options ``-Wall -Werror -Wextra -pedantic -std=gnu89``
    * All your files should end with a new line
    * Your code should use the ``Betty`` style. It will be checked using ``betty-style.pl`` and ``betty-doc.pl``
    * A README.md file at the root of the repo, containing a description of the repository
    * A README.md file, at the root of the folder of this project (i.e. ``0x03-debugging``), describing what this project is about

## 0x04-more_functions_nested_loops

### General
   * What are nested loops and how to use them
   * What is a function and how do you use functions
   * What is the difference between a declaration and a definition of a function*8What is a prototype
   * Scope of variables
   * What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
   * What are header files and how to to use them with #include
   * Allowed editors: vi, vim, emacs
   * All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
   * All your files should end with a new line
   * A README.md file, at the root of the folder of the project is mandatory
   * Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
   * You are not allowed to use global variables
   * No more than 5 functions per file
   * You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
   * You are allowed to use _putchar
   * You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
   * In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
   * The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
   * Don’t forget to push your header file

## 0x05-pointers_arrays_strings

### General

  * Allowed editors: ``vi``, ``vim``, ``emacs``
  * All your files will be compiled on Ubuntu 20.04 LTS using ``gcc``, using the options ``-Wall -Werror -Wextra -pedantic -std=gnu89``
  * All your files should end with a new line
  * A ``README.md`` file, at the root of the folder of the project is mandatory
  * Your code should use the ``Betty`` style. It will be checked using ``betty-style.pl`` and ``betty-doc.pl``
  * You are not allowed to use global variables
  * No more than 5 functions per file
  * You are not allowed to use the standard library. Any use of functions like ``printf``, ``puts``, etc… is forbidden
  * You are allowed to use ``_putchar``
  * You don’t have to push ``_putchar.c``, we will use our file. If you do it won’t be taken into account
  * In the following examples, the ``main.c`` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own ``main.c`` files at compilation. Our ``main.c`` files might be different from the one shown in the examples
  * The prototypes of all your functions and the prototype of the function ``_putchar`` should be included in your header file called ``main.h``
  * Don’t forget to push your header file

## 0x06-pointers_arrays_strings

### General
  * Allowed editors: ``vi``, ``vim``, ``emacs``
  * All your files will be compiled on Ubuntu 20.04 LTS using ``gcc``, using the options ``-Wall -Werror -Wextra -pedantic -std=gnu89``
  * All your files should end with a new line
  * A ``README.md`` file, at the root of the folder of the project is mandatory
  * Your code should use the ``Betty`` style. It will be checked using ``betty-style.pl`` and ``betty-doc.pl``
  * You are not allowed to use global variables
  * No more than 5 functions per file
  * You are not allowed to use the standard library. Any use of functions like ``printf``, ``puts``' etc… is forbidden
  * You are allowed to use ``_putchar``
  * You don’t have to push ``_putchar.c``, we will use our file. If you do it won’t be taken into account
  * In the following examples, the ``main.c`` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own ``main.c`` files at compilation. Our ``main.c`` files might be different from the one shown in the examples
  * The prototypes of all your functions and the prototype of the function ``_putchar`` should be included in your header file called ``main.h``
  * Don’t forget to push your header file

## 0x07-pointers_arrays_strings

### General

   * Allowed editors: ``vi``, ``vim``, ``emacs``
   * All your files will be compiled on Ubuntu 20.04 LTS using ``gcc``, using the options ``-Wall -Werror -Wextra -pedantic -std=gnu89``
   * All your files should end with a new line
   * A ``README.md`` file, at the root of the folder of the project is mandatory
   * Your code should use the ``Betty style``. It will be checked using ``betty-style.pl`` and ``betty-doc.pl``
   * You are not allowed to use global variables
   * No more than 5 functions per file
   * You are not allowed to use the standard library. Any use of functions like ``printf``, ``puts``, etc… is forbidden
   * You are allowed to use ``_putchar``
   * You don’t have to push ``_putchar.c``, we will use our file. If you do it won’t be taken into account
   * In the following examples, the ``main.c`` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own ``main.c`` files at compilation. Our ``main.c`` files might be different from the one shown in the examples
   * The prototypes of all your functions and the prototype of the function ``_putchar`` should be included in your header file called ``main.h``
   * Don’t forget to push your header file
