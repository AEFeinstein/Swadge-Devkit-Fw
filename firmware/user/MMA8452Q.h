/*
 * MMA8452Q.h
 *
 *  Created on: Mar 16, 2019
 *      Author: adam
 */

#ifndef MMA8452Q_H_
#define MMA8452Q_H_

typedef struct {
	int x;
	int y;
	int z;
} accel_t;

void MMA8452Q_setup(void);
void MMA8452Q_poll(accel_t * currentAccel);

#endif /* MMA8452Q_H_ */
