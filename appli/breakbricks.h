/*
 * breakbricks.h
 *
 *  Created on: Feb 12, 2024
 *      Author: Nirgal
 */

#ifndef BREAKBRICKS_H_
#define BREAKBRICKS_H_

#include "macro_types.h"

#define NB_BRICKS_LATERAL	6
#define NB_BRICKS_VERTICAL	4
#define NB_MAX_BRICKS (NB_BRICKS_VERTICAL*NB_BRICKS_LATERAL)

#define SCREEN_WIDTH	320
#define SCREEN_HEIGHT	240
#define MARGIN_DEFAULT 2
#define BRICK_WIDTH_DEFAULT ((SCREEN_WIDTH-(NB_BRICKS_LATERAL+1)*MARGIN_DEFAULT)/NB_BRICKS_LATERAL)
#define BRICK_HEIGHT_DEFAULT (32)












void BREAKBRICKS_init(void);

void BREAKBRICKS_process_main(void);


#endif /* BREAKBRICKS_H_ */
