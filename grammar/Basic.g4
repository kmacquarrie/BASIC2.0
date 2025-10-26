grammar Basic;

file: stat* EOF;

WS : [ \t\r\n]+ -> skip ; // Skip white space

REM: 'REM' ~[\r\n]* -> skip; // Comment - "Remark"

// Statements
stat
    : def
    | call
    | for
    | next ;

def : DEF FN ID LPAREN ID RPAREN EQUAL expr; // Function definition - DEF FN <function name> (<variable>)=<mathematical expr>
call : FN ID LPAREN expr RPAREN ; // Function call

for : FOR ID EQUAL expr TO expr (STEP expr)?; // For loop
next : NEXT ID ; // Next (use w for loop)


// Expressions
expr
    : INT 
    | ID ;

// Reserved Keywords
DEF: 'DEF';
FN: 'FN' ;

FOR: 'FOR' ; 
TO: 'TO' ; // end value in FOR
STEP: 'STEP' ; // step size in FOR
NEXT: 'NEXT' ; // increment counter variable

// Objects and Literals
ID: [A-Z] [A-Z0-9]* ('$'|'%'|'!')* ;
INT: [0-9]+ ;
LPAREN: '(' ;
RPAREN: ')' ;
EQUAL: '=' ;