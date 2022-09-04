#ifndef COM_PIECE_H
#define COM_PIECE_H

#include <stdbool.h>

#define TYPE_MASK 0b00111
#define BLACK_MASK 0b10000
#define WHITE_MASK 0b01000
#define COLOR_MASK 0b11000

enum PieceType
{
    None = 0,
    King = 1,
    Pawn = 2,
    Knight = 3,
    Bishop = 5,
    Rook = 6,
    Queen = 7
};

enum Color
{
    White = 8,
    Black = 16
};

bool is_color(int piece, enum Color color);

enum Color color(int piece);

enum PieceType piece_type(int piece);

bool is_rook_or_queen(int piece);

bool is_bishop_or_queen(int piece);

bool is_sliding_piece(int piece);

#endif // COM_PIECE_H
