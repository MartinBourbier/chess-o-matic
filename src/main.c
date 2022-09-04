#include <stdio.h>

#include "../include/utils.h"

int main(void)
{
    int piece = Rook | Black;

    print_piece(piece);

    return 0;
}
