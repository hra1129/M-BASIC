// --------------------------------------------------------------------
// @file mbasic.ino
// @author HRA!
// @brief M-BASIC for M5Cardputer
// @version 0.1
// @date 2023-10-20
//
//
// @Hardwares: M5Cardputer
// @Platform Version: Arduino M5Stack Board Manager v2.0.7
// @Dependent Library:
// M5GFX: https://github.com/m5stack/M5GFX
// M5Unified: https://github.com/m5stack/M5Unified
// --------------------------------------------------------------------

#ifndef __STATE_H__
#define __STATE_H__

typedef enum {
	INITIAL_STATE,
	NORMAL_STATE,
	ACT_STAY_STATE,
	ACT_NEXT_STATE,
} STATE_T;

#endif
