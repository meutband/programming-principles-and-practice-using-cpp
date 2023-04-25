# Review

## 1. What is a computation?

Taking some input and producing some output

## 2. What do we mean by inputs and outputs to a computation? Give examples.

input/output refers to information coming into/out of a computer. inputs to a part of a program are 'arguments' and outputs are from a part of a program are 'results'.

## 3. What are the three requirements a programmer should keep in mind when expressing computations?

- correctly
- simply
- efficiency

## 4. What does an expression do?

An expression computes a value from a number of operands using operators.

## 5. What is the difference between a statement and an expression, as described in this chapter?

^^, statement is a construct to do something many times, choolse amoung alternatives, get input or produce output

## 6. What is an lvalue? List the operators that require an lvalue. Why do these operators, and not the others, require an lvalue?

value that can appear on the left hand side of an assignment.

assignment or compount assingment, pre-increment/decrement. these require an lvalue as out the output variable to the result of the operator 

## 7. What is a constant expression?

an expression with an integer value composed exclusively of constants

## 8. What is a literal?

data used for representing fixed values

## 9. What is a symbolic constant and why do we use them?

named object to which you cant give a new value after it has been initialized

## 10. What is a magic constant? Give examples.

non-obvious literals (outside fefinitions fo symbolic contants)

## 11. What are some operators that we can use for integers and floating-point values?

+,-,*,/,<,>,<=,>=,==,!=,in<<,out>>

## 12. What operators can be used on integers but not on floating-point numbers?

%

## 13. What are some operators that can be used for strings?

==,!=,in>>,out<<

## 14. When would a programmer prefer a switch-statement to an if-statement?

optimization of code for comparing agains a set (especially larger set) of constants

## 15. What are some common problems with switch-statements?

- values must be of an integer, char, or enum
- cannot use the same value of 2 case labels
- forgetting to end each case with a break

## 16. What is the function of each part of the header line in a for-loop, and in what sequence are they executed?

(int i = 0; i<100>, ++i)
- index initialization
- expression for determineing running of loop or stop
- operand to update index

## 17. When should the for-loop be used and when should the while-loop be used?

for-loop with a simple initializer, condition, and increment operation. ie 0-100
while-loop only when ^^ not the case.

## 18. How do you print the numeric value of a char?

int(char) or int{char}

## 19. Describe what the line char foo(int x) means in a function definition.

char - type of return value
foo - function name
int x - argument input (val x of type int) to function

## 20. When should you define a separate function for part of a program? List reasons.

- makes the computation lofic separate
- makes the program text clearer
- makes it possible to use the function in more than one plase
- eases testing

## 21. What can you do to an int that you cannot do to a string?

-, *, /, &, ++, --

## 22. What can you do to a string that you cannot do to an int?

+ 'concate', [] index, size()

## 23. What is the index of the third element of a vector?

2

## 24. How do you write a for-loop that prints every element of a vector?

for (type val: vector_name) {}

## 25. What does vector<char> alphabet(26); do?

initializes a 26 element vector of type char

## 26. Describe what push_back() does to a vector.

appends to the end of a vector

## 27. What do vector’s member function size() do?

returns number of elements in vector

## 28. What makes vector so popular/useful?

you do not need to specify the size of the vector, also you can add as many elements to the vector as you need.

## 29. How do you sort the elements of a vector?

sort(vector)
