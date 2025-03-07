/*
 * Title:			AGON MOS - MOS defines
 * Author:			Dean Belfield
 * Created:			21/03/2023
 * Last Updated:	22/03/2023
 * 
 * Modinfo:
 * 22/03/2023:		The VDP commands are now indexed from 0x80
 */

#ifndef MOS_DEFINES_H
#define MOS_DEFINES_H

// VDP specific (for VDU 23,0,n commands)
//
#define VDP_gp			 		0x80
#define VDP_keycode				0x81
#define VDP_cursor				0x82
#define VDP_scrchar				0x83
#define VDP_scrpixel			0x84
#define VDP_audio				0x85
#define VDP_mode				0x86
#define VDP_rtc					0x87
#define VDP_keystate			0x88
#define VDP_logicalcoords		0xC0
#define VDP_terminalmode		0xFF

#endif MOS_DEFINES_H