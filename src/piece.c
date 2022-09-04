#include "../include/piece.h"

bool is_color(int piece, enum Color color)
{
    return (piece & COLOR_MASK) == color;
}

enum Color color(int piece)
{
    return piece & COLOR_MASK;
}

enum PieceType piece_type(int piece)
{
    return piece & COLOR_MASK;
}

bool is_rook_or_queen(int piece)
{
    return (piece & 0b110) == 0b110;
}

bool is_bishop_or_queen(int piece)
{
    return (piece & 0b101) == 0b101;
}

bool is_sliding_piece(int piece)
{
    return (piece & 0b100) != 0;
}
