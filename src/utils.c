#include "../include/utils.h"

#include "stdio.h"

static char *piece_to_color(int piece)
{
    switch (piece & COLOR_MASK)
    {
    case Black:
        return "Black";
    case White:
        return "White";
    default:
        return "Undefined color!";
    }
}

static char *piece_to_type(int piece)
{
    switch (piece & TYPE_MASK)
    {
    case King:
        return "King";
    case Pawn:
        return "Pawn";
    case Knight:
        return "Knight";
    case Bishop:
        return "Bishop";
    case Rook:
        return "Rook";
    case Queen:
        return "Queen";
    case None:
    default:
        return "Undefined type!";
    }
}

void print_piece(int piece)
{
    printf("%s %s\n", piece_to_color(piece), piece_to_type(piece));
}