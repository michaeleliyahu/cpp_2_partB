#include <iostream>
#include "Direction.hpp"
using ariel::Direction;
using std::string;
using namespace std;
#include <array>
namespace ariel
{

    class Board
    {
    public:
        
        static void post(unsigned row, unsigned colomn, Direction x, const string &str);
        static string read(unsigned row, unsigned colomn, Direction x, unsigned ch_num);
        void show();
    };

}