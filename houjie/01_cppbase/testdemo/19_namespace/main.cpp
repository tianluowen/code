// date: 2020-03-16
// desc: namespace 

namespace tlw
{
    int tlw = 25;
}


#include <iostream>


int main(void)
{
    std::cout << "test namespace tlw : " << tlw::tlw << std::endl;

    return 0;
}

// test namespace
