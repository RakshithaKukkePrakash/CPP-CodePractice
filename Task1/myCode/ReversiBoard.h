/*
 * ReversiBoard.h
 *
 *  Created on: 31-May-2024
 *      Author: acer
 */

#ifndef REVERSIBOARD_H_
#define REVERSIBOARD_H_

class ReversiBoard
{
	int rowNum, colNum;
	char board[8][8];
public:
	ReversiBoard();
	virtual ~ReversiBoard();
};

#endif /* REVERSIBOARD_H_ */
