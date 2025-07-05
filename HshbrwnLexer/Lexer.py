import re

class Lexer():
  def __init__(self):
    self.keywords = {
      "if": "IF",
      "else": "ELSE",
      "elsif": "ELSIF",
      "for": "FOR",
      "while": "WHILE",
      "fn": "FUNCTION",
      "ret": "RETURN", # might be changed.
      "uint8": "UNSIGNEDINTEGER8BIT",
      "uint16": "UNSIGNEDINTEGER16BIT",
      "uint32": "UNSIGNEDINTEGER32BIT",
      "uint64": "UNSIGNEDINTEGER64BIT",
      "uint128": "UNSIGNEDINTEGER128BIT",
      "hf": "HALF",
      "f": "FLOAT",
      "df": "DOUBLE"
    }
    self.operators = {
      
    }
