

#ifndef SUDOKU_SOFTWARE_PROJECT_EXCEPTIONS_H
#define SUDOKU_SOFTWARE_PROJECT_EXCEPTIONS_H
#include "Game.h"


typedef enum Exception{
    MEMORY_ALLOC_ERROR,
    INVALID_COMMAND_ERROR,
    CELL_FIXED_ERROR,
    SOLVE_IO_ERROR,
    EDIT_IO_ERROR,
    BINARY_RANGE_ERROR,
    VALUE_RANGE_ERROR,
    ERRONEOUS_BOARD_ERROR,
    BOARD_NOT_EMPTY_ERROR,
    GENERATOR_FAILED_ERROR,
    UNDO_ERROR,
    REDO_ERROR,
    VALIDATION_FAILED_ERROR,
    SAVE_IO_ERROR,
    CELL_HAS_VALUE_ERROR,
    BOARD_UNSOLVEABLE_ERROR,
    ILP_ERROR
}Exception;

void printError(Game*game,Exception e);

#endif
