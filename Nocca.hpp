#ifndef INCLUDED_Nocca_hpp_
#define INCLUDED_Nocca_hpp_

class Nocca
{
private:
    int table[6][5][3];
    /* data */
public:
    enum Player{ Black, White };
    Nocca(/* args */);
    ~Nocca();
    bool Move(int player, int row, int column);
};

#endif