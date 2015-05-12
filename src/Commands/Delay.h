/*
 * Delay.h
 *
 *  Created on: May 4, 2015
 *      Author: vandenrobotics
 */

#ifndef SRC_COMMANDS_DELAY_H_
#define SRC_COMMANDS_DELAY_H_

#include "Commands/Subsystem.h"
#include "../Robot.h"

class Delay : public Command
{
public:
	Delay();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
private:
	Timer timer;
};

#endif /* SRC_COMMANDS_DELAY_H_ */
