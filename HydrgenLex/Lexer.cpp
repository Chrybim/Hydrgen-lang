#include <vector>
#include <string>
#include <cctype>

std::vector<token> lex(std::string code)
{
    char* current_char = 0;
    int pos = 0;

    while (pos <= code.length())
        {
            while (std::isalnum(static_cast<unsigned char>(current_char))) // handling identifiers
                {
                    
                    
                    current_char++
                    pos++
                }
        }
}
