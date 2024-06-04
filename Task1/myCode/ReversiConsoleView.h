/*
 * ReversiConsoleView.h
 *
 *  Created on: 31-May-2024
 *      Author: acer
 */

#ifndef REVERSICONSOLEVIEW_H_
#define REVERSICONSOLEVIEW_H_
#include "ReversiBoard.h"
class ReversiConsoleView
{
	ReversiBoard* rb;
public:
	ReversiConsoleView(ReversiBoard* rb);
	void print() const;
	virtual ~ReversiConsoleView();
};

#endif /* REVERSICONSOLEVIEW_H_ */
