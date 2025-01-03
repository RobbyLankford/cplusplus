#include <stdio.h>

enum chess_pieces {KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN};

// (a) value of each chess piece
const int piece_value1[] = {200, 9, 5, 3, 3, 1};

// (b) same as (a), but with designated initializer
const int piece_value2[] = {
    [KING] = 200,
    [QUEEN] = 9,
    [ROOK] = 5,
    [BISHOP] = 3,
    [KNIGHT] = 3,
    [PAWN] = 1
};

int main(void)
{
    return 0;
}