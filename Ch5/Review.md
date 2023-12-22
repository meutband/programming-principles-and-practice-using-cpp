# Review

## 1. Name four major types of errors and briefly define each one.

- Compile-time errors: error found in compiler
- Link-time errors: errors found in linker when tring to combine object files into program
- Run-time errors: errors found by checks in a running program
- Logic errors: errors found by the programmer looking for the causes of erroneous results.

## 2. What kinds of errors can we ignore in student programs?

errors involving hardware and system software

## 3. What guarantees should every completed project offer?

our program will produce the desired result for all legal inputs and our program will give reasonable error messages for all illegal inputs

## 4. List three approaches we can take to eliminate errors in programs and produce acceptable software.

1. orgranize software to minimize errors
2. elimate most of the errors we made through debugging and testing
3. make sure the remaining errors are ot serious

## 5. Why do we hate debugging?

debugging is the most tedious and time-wasting aspect of programming

## 6. What is a syntax error? Give five examples.

errors that are not well formed according to the C++ grammer standard.

1. missing parenthesis
2. missing semi-colon
3. incorrect types (Int vs int)
4. missing operators
5. error in the structure of the program

## 7. What is a type error? Give five examples.

errors that are mismathces between the types declared (variables, functions, etc...) and the types of values assigned to them

1. undeclared function (misspelling)
2. wrong number of arguments in function
3. argument is wrong type
4. assigning wront type to variable (string = int)
5. bad type operators (dividing strings)

## 8. What is a linker error? Give three examples.

errors that are when there are mismathing with regard to translation units

1. multiple declarations of the same function
2. improper import of header files (missing inlude)
3. Main instead of main


## 9. What is a logic error? Give three examples.

errors (or non errors) where desired output is not obtained for legal inputs

1. adding semi-colon before end of call (for ; {})
2. negative numbers instead of positive integars (sqrt of negative, negative length)
3. double to int trucation

## 10. List four potential sources of program errors discussed in the text.

1. poor specification of what the program is suppose to do
2. incomplete logic in parts where not finished
3. unexpected arguments/inputs
4. logical errors

## 11. How do you know if a result is plausible? What techniques do you have to answer such questions?

at the very basic level, plausible pretty much means does this answer make since for the context of the problem. Estimation helps us validate or allow the programmer to determine whether the result 'makes sense' or not, usually by 'guesstimation' 

## 12. Compare and contrast having the caller of a function handle a run-time error vs. the called function’s handling the run-time error.

the caller can handle to error when we cant modify the function definition, the function doesnt know what to do in the case of the error, or the function does not know where the error was called from. 

## 13. Why is using exceptions a better idea than returning an “error value”?

exceptions catch specials errors that the caller can handle separately from other types of errors

## 14. How do you test if an input operation succeeded?

checking the state of cin

## 15. Describe the process of how exceptions are thrown and caught.

when a function 'throws' an exception, the caller when 'catch' the exception as a special type of error

## 16. Why, with a vector called v, is v[v.size()] a range error? What would be the result of calling this?

the final index of a vector is always 1 less than the size of the vector (ie 0,1,2,3,4 indeces for size = 5). out_of_range exception is thrown.

## 17. Define pre-condition and post-condition; give an example (that is not the area() function from this chapter), preferably a computation that requires a loop.

pre-condition tests the argument as it arrives in the function, post-condition tests the return value before its sent back to the caller.

```
double area_of_circle(int radius) {
    if (radius < 0) error ("cannot calculate negative radius");
    double area = 2 * 3.14 * (radius ^ 2);
    if (area < 0) error ("bad calculation");
    return area
}
```

## 18. When would you not test a pre-condition?

guarantee of no bad arguments

## 19. When would you not test a post-condition?

ok to not test post-conditions when computation is very trivial

## 20. What are the steps in debugging a program?

1. Get the program to compile
2. Get the program to link
3. Get the program to do what it is suppose to

## 21. Why does commenting help when debugging?

comments help the program become easier to read, so easier to find and fix errors

## 22. How does testing differ from debugging?

testing provides a systematic way to compare results against a specific set of inputs. 
