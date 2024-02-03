#include <iostream>
// hello
#define H "H"
#define e "e"
#define l "l"
#define l "l"
#define o "o"
//space
#define space " "
//world!
#define W "W"
#define o "o"
#define r "r"
#define l "l"
#define d "d"
#define exclamation "!"
typedef std::string variableToSaveAStringThatCanBeModifiedLater;

namespace printHelloWorld {
    variableToSaveAStringThatCanBeModifiedLater helloworld = H e l l o space W o r l d exclamation;
}
int main() {
    using namespace printHelloWorld;
    std::cout << helloworld << std::endl;
    return 0;
}
