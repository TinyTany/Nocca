#ifndef INCLUDED_Nocca_hpp_
#define INCLUDED_Nocca_hpp_

class Nocca
{
private:
    static const int width = 5, depth = 6, height = 3;
    int table[depth][width][height];
public:
    enum Player{ Black, White };
    Nocca();
    ~Nocca();
    bool Move(int player, int row, int column);
};

#endif