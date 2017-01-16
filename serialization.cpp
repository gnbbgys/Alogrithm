

#include <iostream>
#include <sstream>
#include <string>

// gcc -g source.cpp -o src -lstdc++
void serialization()
{
    //sstr << 1111 << std::endl;
}

int main(int argc, char* argv[])
{
    /*
    std::stringstream sstr;
    sstr << "    ab\0c"; 
    std::cout << "|" << sstr.str().c_str() << "|" << std::endl; 
    */

    //char helloworld[] = "acbvsddfsa\\x0A";
    char helloworld[] = "acbvsddfsa\\x0A";

    std::cout << "|" << helloworld << "|" << std::endl; 


    return 0;
}
