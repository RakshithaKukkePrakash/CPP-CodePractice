/*
 * ConsoleView.h
 *
 *  Created on: 04-Jun-2024
 *      Author: acer
 */

#ifndef CONSOLEVIEW_H_
#define CONSOLEVIEW_H_
#include "Board.h"
class ConsoleView
{
	Board* board;

public:
	ConsoleView(Board* board);
	void print();

	virtual ~ConsoleView();
};

#endif /* CONSOLEVIEW_H_ */
