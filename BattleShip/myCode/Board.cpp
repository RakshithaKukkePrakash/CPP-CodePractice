/*
 * Board.cpp
 *
 *  Created on: 04-Jun-2024
 *      Author: acer
 */

#include "Board.h"

Board::Board(int rows, int columns):ownGrid(OwnGrid(rows, columns)), opponentGrid(OpponentGrid(rows, columns))
{
}

int Board::getRows() const
{
	return ownGrid.getRows();
}

int Board::getColumns() const
{
	return ownGrid.getColumns();
}

OwnGrid& Board::getOwnGrid()
{
	return ownGrid;
}

OpponentGrid& Board::getOpponentGrid()
{
	return opponentGrid;

}

Board::~Board()
{
}

