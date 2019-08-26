# OPERATOR-OVERLOADING
unary ( ++, -- )and binary operator overloading (+, -, >, &lt; )

function name:OPERATOR 
syntax: RETURN_TYPE OPERATOR OPERATOR_SYMBOL (list of arguments)

Unary operator overloading: #if operator function is inside class , then function should not take any argument.
                            #if operator function is friend function , thrn function should take only one argument.  
                            that is address of class opjects.
                            example: let's class ABC
                            {
                               void operator ++ (const ABC & X)
                               { ..... }
                             }
 
Binary operator overloading: #if function inside a class - takes one argument
                             #if function in friends function - takes two arguments.
                             Exampl:
                             class A
                             {
                                friend A operator+( const A &X , const A &Y){.....}
                             }
                            
