# Review

## 1. What is meant by the term prompt?

A meesage that encourages the user to take action.

## 2. Which operator do you use to read into a variable?

'>>'

## 3. If you want the user to input an integer value into your program for a variable named number, what are two lines of
## code you could write to ask the user to do it and to input the value into your program?

```
cout << "Please enter a number: ";
cin >> number;
```

## 4. What is \n called and what purpose does it serve?

'\n' newline character. Moves cursor to new line.


## 5. What terminates input into a string?

whitespace

## 6. What terminates input into an integer?

non-number character

## 7. How would you write
## cout << "Hello, ";
## cout << first_name;
## cout << "!\n";
## as a single line of code?

```
cout << "Hello, " << first_name << "!\n";
```

## 8. What is an object?

a region of memory with a type that specifies what kinf of information can be placed into it

## 9. What is a literal?

a value of specific type

## 10. What kinds of literals are there?

- integer
- floating-point
- boolean
- character
- string

## 11. What is a variable?

a named objext

## 12. What are typical sizes for a char, an int, and a double?

- char = 8 bits (1 byte)
- int = 32 bits (4 bytes)
- double = 64 bits (8 bytes)

## 13. What measures do we use for the size of small entities in memory, such as ints and strings?

- bits

## 14. What is the difference between = and ==?

- '=' sets value to, '==' compares values (true/false)

## 15. What is a definition?

- is a declaration that sets aside memory for an object
    - declaration: statement that gives name to an object

## 16. What is an initialization and how does it differ from an assignment?

initialization gives variable its initial value, assignemnt gives variable a new value.

```
int y = 8;  \\initialization
y = 9;      \\assignment
```

## 17. What is string concatenation and how do you make it work in C++?

```
str1+str2+str3+...
```

## 18. Which of the following are legal names in C++? If a name is not legal, why not?

### This_little_pig
True

### latest thing
False (space)

### MiniMineMine
True

### This_1_is fine
False (space)

### the_$12_method
False ($ symbol)

### number
True

### 2_For_1_special
False (number at start)

### _this_is_ok
True (but not allowed)

### correct?
False (? symbol)


## 19. Give five examples of legal names that you shouldn’t use because they are likely to cause confusion.

- abbreviations/acronyms
- 0 vs O (zero vs cap o)
- l vs 1 vs I (lower L, one, cap i)


## 20. What are some good rules for choosing names?

meaningful names, help convery understanding in program, '_' to separate words

## 21. What is type safety and why is it important?

a program is type safe when objects are used only according to the rules for thier typw

## 22. Why can conversion from double to int be a bad thing?

value stored by be differ from the value assined, i.e. double value truncates rather than usining conventional rounding

## 23. Define a rule to help decide if a conversion from one type to another is safe or unsafe.

smaller type can convert to bigger type safely, i.e. 8 bit char -> 32 bit int
larger types convert to smaller tpyes unsafely, i.e. 64 bit double -> 32 bit int