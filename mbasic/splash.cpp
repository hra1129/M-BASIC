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

// --------------------------------------------------------------------
static int bright;
static int x;

// --------------------------------------------------------------------
STATE_T splash_init( LovyanGFX* p_gfx ) {

  p_gfx->setRotation( 1 );
  p_gfx->setFont( &fonts::Font2 );
	bright = 0;
  x = p_gfx->width();
	return ACT_NEXT_STATE;
}

// --------------------------------------------------------------------
STATE_T splash_normal( LovyanGFX* p_gfx ) {

	if( bright < 255 ) {
		bright++;
	}
  p_gfx->fillRect( 0, 0, p_gfx->width(), p_gfx->height(), p_gfx->color565( 0, bright >> 2, bright >> 1 ) );
  if( bright == 255 && x > 0 ) {
    p_gfx->drawString( "Hoge Hoge", x, (p_gfx->height() - 16) >> 1 );
    x--;
  }
  else if( x == 0 ) {
    p_gfx->drawString( "Hoge Hoge", 0, (p_gfx->height() - 16) >> 1 );
  }
	return ACT_STAY_STATE;
}
