grammar Basic;

file: stat* EOF;

WS : [ \t\r\n]+ -> skip ; // Skip white space

REM: 'REM' ~[\r\n]* -> skip; // Comment - "Remark"

// Statements
stat
    : def
    | call
    | for
    | if
    | let
    | command
    ;

def : DEF FN ID LPAREN ID RPAREN EQUAL expr; // Function definition - DEF FN <function name> (<variable>)=<mathematical expr>
call : FN ID LPAREN expr RPAREN ;            // Function call

let : LET ID EQUAL expr ; // LET <Variable> = <Argument>  - basic variable assignment

for : FOR ID EQUAL expr TO expr (STEP expr)? stat* NEXT ID ; // For + next loop

if  
    : IF expr THEN INT     // IF <equation> THEN <linenumber>
    | IF expr GOTO INT     // IF <equation> GOTO <linenumber>
    | IF expr THEN command // IF <equation> THEN <command>
    ; 

// Expressions
expr
    : LPAREN expr RPAREN            # Parentheses
    | expr op=(EQUAL|UNEQUAL) expr  # Equality
    | expr op=(LT|GT|LEQ|GEQ) expr  # Comparison
    | ID                            # Id
    | INT                           # Int 
    ;

// Commands
command
    : END                                      # End
    | LEN LPAREN STRING RPAREN                 # Len  // LEN(<String>)
    | GOTO INT                                 # Goto // GOTO [<line>] (legal line numbers in [0, 63999])
    | list                                     # ListCommand
    | PRINT expr ( (SEMI | COMMA) expr )*      # Print
    ;

list
    : LIST
    | LIST INT
    | LIST INT DASH
    | LIST DASH INT
    | LIST INT DASH INT 
    ;


// Reserved Keywords
LET: 'LET' ;
LIST: 'LIST' ;

DEF: 'DEF';
FN: 'FN' ;

FOR: 'FOR' ; 
TO: 'TO' ; // end value in FOR
STEP: 'STEP' ; // step size in FOR
NEXT: 'NEXT' ; // increment counter variable

GOTO: 'GOTO' ; 

IF: 'IF' ;
THEN: 'THEN' ; // IF, THEN

END: 'END' ;
LEN: 'LEN' ;

PRINT: 'PRINT' ;

// Objects and Literals
ID: [A-Z] [A-Z0-9]* ('$'|'%'|'!')* ;
INT: [0-9]+ ;
STRING: '"' (~["\r\n])* '"' ; // String literal (must be enclosed by double quotes) - NEW LINE or CR not allowed
LPAREN: '(' ;
RPAREN: ')' ;
EQUAL: '=' ;
UNEQUAL: '<>' ;
LT: '<' ;
GT: '>' ;
LEQ: '<=' ;
GEQ: '>=' ;
DASH: '-' ;
DOLLAR: '$' ;
SEMI: ';' ;
COMMA: ',' ;