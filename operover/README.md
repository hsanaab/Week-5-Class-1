## Things to Remember in C++ Operator Overloading

1. Two operators = and & are already overloaded by default in C++. For example, to copy objects of the same class, we can directly use the = operator. We do not need to create an operator function.
2. Operator overloading cannot change the precedence and associativity of operators. However, if we want to change the order of evaluation, parentheses should be used.
3. There are 4 operators that cannot be overloaded in C++. <br>
They are:

  >  :: (scope resolution)<br>
>  . (member selection)<br>
> .* (member selection through pointer to function)<br>
> ?: (ternary operator)



[Home](https://replit.com/@williamsmith/ClassesPt2#README.md)
