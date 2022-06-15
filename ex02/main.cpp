#include "Array.hpp"

int main (void)
{
    Array<int> intArr;
    Array<std::string> strArr(10);
    Array<std::string> strArrRand;

    strArr[0] = "C'est";
    strArr[1] = "cool";
    strArr[2] = "les";
    strArr[3] = "templates";
    strArr[4] = "mais";
    strArr[5] = "c'est";
    strArr[6] = "vite";
    strArr[7] = "le";
    strArr[8] = "bordel";

    std::cout << "Size of intArr : " << intArr.getSize() << std::endl;
    std::cout << "Size of strArr : " << strArr.getSize() << std::endl;
    strArrRand = strArr;
    strArrRand[2] = "OverWriting test";
    std::cout << "Original string array" << std::endl;
    std::cout << "---------------------" << std::endl;
    for (int i = 0; i < 8; i++)
        std::cout << i << " : " << strArr[i] << std::endl;
    std::cout << "Copy string array with overwriting" << std::endl;
    std::cout << "----------------------------------" << std::endl;
    for (int i = 0; i < 8; i++)
        std::cout << i << " : " << strArrRand[i] << std::endl;

    try
    {
        std::cout << strArr[69] << std::endl;
    }
    catch (std::exception &fail)
    {
        std::cout << fail.what() << std::endl;
    }

    try
    {
        std::cout << strArr[-2] << std::endl;
    }
    catch (std::exception &fail)
    {
        std::cout << fail.what() << std::endl;
    }
    //while (1);
}
