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
#include "M5Cardputer.h"
#include "splash.h"

static int state;

// --------------------------------------------------------------------
void setup() {
	auto cfg = M5.config();
	M5Cardputer.begin( cfg );
	M5Cardputer.Display.setColorDepth( 16 );
	state = 0;
}

// --------------------------------------------------------------------
void loop() {
	switch( state ) {
	case 0:
		if( splash_init( &M5Cardputer.Display ) == ACT_NEXT_STATE ) {
			state++;
		}
		break;
	case 1:
		if( splash_normal( &M5Cardputer.Display ) == ACT_NEXT_STATE ) {
			state++;
		}
		break;
	default:
		state = 0;
		break;
	}
}
