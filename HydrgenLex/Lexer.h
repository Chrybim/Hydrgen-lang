#ifndef HYDLEX_H
#define HYDLEX_H

// Why am I coding this on a chromebook 11:16 pm.

typedef enum class {
    // Keywords
    IF, ELSE, ELSIF, WHILE, FOR, DO, CLASS, ENUM,
    UINT8, UINT16, UINT32, UINT64, UINT128, INT8,
    INT16, INT32, INT64, INT128, UINTARB, INTARB,
    BOOL, CHAR, STRING, ARRAY, TABLE, MAP,

    // Identifiers
    IDENTIFIER, NUMBER_LITERAL, BINARY_LITERAL,
    HEXADECIMAL_LITERAL, OCTAL_LITERAL, 
    STRING_LITERAL,

    // Operators
    PLUS, MINUS, TIMES, DIVIDE, SHIFTLEFT, SHIFTRIGHT,
    ROLLEFT, ROLRIGHT, AND, OR, XOR, NOT, LAND, LOR,
    LNOT, NAND, NOR, NXOR, LNAND, LNOR
};

typedef struct {
    tokentype type; // the type of the token
    char* lexeme; // the actual code
    int vpos; // the vertical position slash the column
    int hpos; // the horizontal position slash the line
} token;

#endif
