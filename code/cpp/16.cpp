#include <iostream>

enum Seasons{
    spring,  
    summer,
    autumn,
    winter
};

int main(int argc, char const *argv[])
{
    Seasons s = summer;
    switch (s)
    {
        case summer:{
            std::cout << "i am summer" << std::endl;
        } break;
        default:
            break;
    }
    return 0;
}
