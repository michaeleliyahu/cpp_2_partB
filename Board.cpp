#include "Board.hpp"
#include "Direction.hpp"
#include <iostream>
#include <stdbool.h>
#include <array>
#include <cstdlib>
using ariel::Direction;
using ariel::Board;
using namespace std;
using namespace ariel;
const int LIMIT = 1000;
namespace ariel
{
    array<array<string, LIMIT>, LIMIT> bord;
    void Board::post(unsigned row, unsigned colomn, Direction x, const string &str)
    {
        
        if (x == Direction::Horizontal)
        {
            // int
            for (unsigned i = 0; i < str.length(); i++)
            {
                bord.at(row).at(colomn + i) = str.at(i);
                // bor.at(row).at(colomn + i)  = str.at(i);
            }
        }
        else
        {
            for (unsigned i = 0; i < str.length(); i++)
            {
                bord.at(row + i).at(colomn) = str.at(i);
            }
        }
    }
    string Board::read(unsigned row, unsigned colomn, Direction x, unsigned ch_num)
    {
        string output;
        if (x == Direction::Horizontal)
        {
            for (unsigned i = 0; i < ch_num; i++)
            {
                if (bord.at(row).at(colomn + i).empty())
                {
                    output += "_";
                }
                else
                {
                    output += bord.at(row).at(colomn + i);
                }
            }
        }
        else
        {
            for (unsigned i = 0; i < ch_num; i++)
            {
                if (bord.at(row + i).at(colomn).empty())
                {
                    output += "_";
                }
                else
                {
                    output += bord.at(row + i).at(colomn);
                }
            }
        }

        return output;
    }
    void Board::show()
    {
    }
} // namespace ariel
