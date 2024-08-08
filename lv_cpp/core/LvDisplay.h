/*
 * LvDisplay.h
 *
 *  created on: sep 29, 2020
 *      author: fstuffdev
 */

#ifndef LVDISPLAY_H_
#define LVDISPLAY_H_

#include "lvglpp.h"


namespace lvglpp {

class LvDisplay {
private:

public:
	LvDisplay(      );


	unsigned int getWidth();
	unsigned int getHeight();

	virtual ~LvDisplay();
};

} /* namespace lvGL */

#endif /* LVDISPLAY_H_ */
