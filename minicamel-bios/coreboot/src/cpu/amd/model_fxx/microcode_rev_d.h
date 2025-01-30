/*
 ============================================================
 (c) Advanced Micro Devices, Inc., 2004-2005

 The  enclosed microcode  is intended  to be  used  with AMD
 Microprocessors.  You  may   copy,  view  and  install  the
 enclosed microcode  only for development  and deployment of
 firmware,  BIOS,  or  operating  system code  for  computer
 systems   that  contain  AMD   processors.   You   are  not
 authorized  to use  the  enclosed microcode  for any  other
 purpose.

 THE  MICROCODE IS PROVIDED  "AS IS"  WITHOUT ANY  EXPRESS OR
 IMPLIED WARRANTY  OF ANY KIND, INCLUDING BUT  NOT LIMITED TO
 WARRANTIES    OF    MERCHANTABILITY,   NON-    INFRINGEMENT,
 TITLE,FITNESS  FOR  ANY  PARTICULAR PURPOSE,  OR  WARRANTIES
 ARISING FROM CONDUCT, COURSE  OF DEALING, OR USAGE OF TRADE.
 AMD does not assume  any responsibility for any errors which
 may  appear   in  this   microcode  or  any   other  related
 information provided  to you by  AMD, or result from  use of
 this microcode.   AMD is not obligated  to furnish, support,
 or  make   any  further  information,   software,  technical
 information, know-how, or show-how available related to this
 microcode.

 The  microcode is provided  with "RESTRICTED  RIGHTS."  Use,
 duplication, or disclosure by the U.S. Government is subject
 to  the  restrictions as  set  forth  in  FAR 52.227-14  and
 DFAR252.227-7013,  et seq.,  or its  successor.  Use  of the
 microcode    by    the    U.S.     Government    constitutes
 acknowledgement  of   AMD's  proprietary  rights   in  them.
 ============================================================
*/

/* Rev Dx Microcode Patch for Errata 109 */
 0x04, 0x20, 0x25, 0x02, 0x41, 0x00, 0x00, 0x00, 0x00, 0x80, 0x20, 0x00, 0xfd, 0x6a, 0x5a, 0x3e,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x01, 0x00, 0x00, 0x00, 0xaa, 0xaa, 0xaa,
 0x44, 0x06, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
 0xff, 0xfb, 0xff, 0x00, 0xc3, 0x35, 0x90, 0xfd, 0xf8, 0x7b, 0xfe, 0xa9, 0x0f, 0xff, 0x00, 0x3f,
 0xfe, 0xdf, 0xff, 0xc7, 0x1e, 0xbc, 0x03, 0x3c, 0x80, 0xc8, 0xd5, 0x00, 0x14, 0xfe, 0xff, 0xff,
 0xfe, 0xe1, 0x1f, 0xeb, 0x4c, 0xf6, 0x3c, 0xff, 0x9f, 0x87, 0x7f, 0x80, 0x27, 0x60, 0x26, 0xf0,
 0x74, 0x1d, 0xfe, 0x18, 0x00, 0x20, 0xe4, 0x6a, 0xcf, 0xfb, 0xff, 0xe7, 0xf0, 0xf3, 0xf0, 0x0f,
 0x3f, 0xee, 0xff, 0x9f, 0x40, 0xe4, 0xc3, 0x1b, 0xfe, 0x01, 0xfc, 0x07, 0x00, 0xfe, 0x0d, 0xff,
 0x35, 0x00, 0xe0, 0xeb, 0xf0, 0x0f, 0xe0, 0x3f, 0x07, 0xf0, 0x6f, 0xf8, 0xc0, 0x3f, 0x80, 0xff,
 0x1f, 0xc0, 0xbf, 0xe1, 0x03, 0xff, 0x00, 0xfe, 0x7f, 0x00, 0xff, 0x86, 0x30, 0x1a, 0x00, 0x78,
 0x1f, 0xf8, 0x07, 0xf0, 0xfc, 0x03, 0xf8, 0x37, 0x7f, 0xe0, 0x1f, 0xc0, 0xf0, 0x0f, 0xe0, 0xdf,
 0xff, 0x81, 0x7f, 0x00, 0xc3, 0x3f, 0x80, 0x7f, 0xfc, 0x7f, 0x0f, 0x00, 0xf8, 0x0f, 0xfc, 0x03,
 0x1b, 0xfe, 0x01, 0xfc, 0xe0, 0x3f, 0xf0, 0x0f, 0x6f, 0xf8, 0x07, 0xf0, 0x80, 0xff, 0xc0, 0x3f,
 0xbf, 0xe1, 0x1f, 0xc0, 0x00, 0xfe, 0xbf, 0x07, 0x01, 0xfc, 0x07, 0xfe, 0xfe, 0x0d, 0xff, 0x00,
 0x07, 0xf0, 0x1f, 0xf8, 0xf8, 0x37, 0xfc, 0x03, 0x1f, 0xc0, 0x7f, 0xe0, 0xe0, 0xdf, 0xf0, 0x0f,
 0x03, 0x00, 0xff, 0xdf, 0xff, 0x00, 0xfe, 0x03, 0x00, 0xff, 0x86, 0x7f, 0xfc, 0x03, 0xf8, 0x0f,
 0x01, 0xfc, 0x1b, 0xfe, 0xf0, 0x0f, 0xe0, 0x3f, 0x07, 0xf0, 0x6f, 0xf8, 0xef, 0x01, 0x80, 0xff,
 0x81, 0x7f, 0x00, 0xff, 0x3f, 0x80, 0x7f, 0xc3, 0x07, 0xfe, 0x01, 0xfc, 0xff, 0x00, 0xfe, 0x0d,
 0x1f, 0xf8, 0x07, 0xf0, 0xfc, 0x03, 0xf8, 0x37, 0xff, 0xf7, 0x00, 0xc0, 0xff, 0xc0, 0x3f, 0x80,
 0xe1, 0x1f, 0xc0, 0xbf, 0xfe, 0x03, 0xff, 0x00, 0x86, 0x7f, 0x00, 0xff, 0xf8, 0x0f, 0xfc, 0x03,
 0x1b, 0xfe, 0x01, 0xfc, 0xe0, 0xff, 0x7b, 0x00, 0xc0, 0x7f, 0xe0, 0x1f, 0xdf, 0xf0, 0x0f, 0xe0,
 0x00, 0xff, 0x81, 0x7f, 0x7f, 0xc3, 0x3f, 0x80, 0x01, 0xfc, 0x07, 0xfe, 0xfe, 0x0d, 0xff, 0x00,
 0x00, 0xf0, 0xff, 0x3d, 0x0f, 0xe0, 0x3f, 0xf0, 0xf0, 0x6f, 0xf8, 0x07, 0x3f, 0x80, 0xff, 0xc0,
 0xc0, 0xbf, 0xe1, 0x1f, 0xff, 0x00, 0xfe, 0x03, 0x00, 0xff, 0x86, 0x7f, 0x1e, 0x00, 0xf8, 0xff,
 0xf8, 0x07, 0xf0, 0x1f, 0x03, 0xf8, 0x37, 0xfc, 0xe0, 0x1f, 0xc0, 0x7f, 0x0f, 0xe0, 0xdf, 0xf0,
 0x81, 0x7f, 0x00, 0xff, 0x3f, 0x80, 0x7f, 0xc3, 0x7f, 0x0f, 0x00, 0xfc, 0x0f, 0xfc, 0x03, 0xf8,
 0xfe, 0x01, 0xfc, 0x1b, 0x3f, 0xf0, 0x0f, 0xe0, 0xf8, 0x07, 0xf0, 0x6f, 0xff, 0xc0, 0x3f, 0x80,
 0xe1, 0x1f, 0xc0, 0xbf, 0xfe, 0xbf, 0x07, 0x00, 0xfc, 0x07, 0xfe, 0x01, 0x0d, 0xff, 0x00, 0xfe,
 0xf0, 0x1f, 0xf8, 0x07, 0x37, 0xfc, 0x03, 0xf8, 0xc0, 0x7f, 0xe0, 0x1f, 0xdf, 0xf0, 0x0f, 0xe0,
 0x00, 0xff, 0xdf, 0x03, 0x00, 0xfe, 0x03, 0xff, 0xff, 0x86, 0x7f, 0x00, 0x03, 0xf8, 0x0f, 0xfc,
 0xfc, 0x1b, 0xfe, 0x01, 0x0f, 0xe0, 0x3f, 0xf0, 0xf0, 0x6f, 0xf8, 0x07, 0x01, 0x80, 0xff, 0xef,
 0x7f, 0x00, 0xff, 0x81, 0x80, 0x7f, 0xc3, 0x3f, 0xfe, 0x01, 0xfc, 0x07, 0x00, 0xfe, 0x0d, 0xff,
 0xf8, 0x07, 0xf0, 0x1f, 0x03, 0xf8, 0x37, 0xfc, 0xf7, 0x00, 0xc0, 0xff, 0xc0, 0x3f, 0x80, 0xff,
 0x1f, 0xc0, 0xbf, 0xe1, 0x03, 0xff, 0x00, 0xfe, 0x7f, 0x00, 0xff, 0x86, 0x0f, 0xfc, 0x03, 0xf8,
 0xfe, 0x01, 0xfc, 0x1b, 0xff, 0x7b, 0x00, 0xe0, 0x7f, 0xe0, 0x1f, 0xc0, 0xf0, 0x0f, 0xe0, 0xdf,
 0xff, 0x81, 0x7f, 0x00, 0xc3, 0x3f, 0x80, 0x7f, 0xfc, 0x07, 0xfe, 0x01, 0x0d, 0xff, 0x00, 0xfe,
 0xf0, 0xff, 0x3d, 0x00, 0xe0, 0x3f, 0xf0, 0x0f, 0x6f, 0xf8, 0x07, 0xf0, 0x80, 0xff, 0xc0, 0x3f,
 0xbf, 0xe1, 0x1f, 0xc0, 0x00, 0xfe, 0x03, 0xff, 0xff, 0x86, 0x7f, 0x00, 0x00, 0xf8, 0xff, 0x1e,
 0x07, 0xf0, 0x1f, 0xf8, 0xf8, 0x37, 0xfc, 0x03, 0x1f, 0xc0, 0x7f, 0xe0, 0xe0, 0xdf, 0xf0, 0x0f,
 0x7f, 0x00, 0xff, 0x81, 0x80, 0x7f, 0xc3, 0x3f, 0x0f, 0x00, 0xfc, 0x7f, 0xfc, 0x03, 0xf8, 0x0f,
 0x01, 0xfc, 0x1b, 0xfe, 0xf0, 0x0f, 0xe0, 0x3f, 0x07, 0xf0, 0x6f, 0xf8, 0xc0, 0x3f, 0x80, 0xff,
 0x1f, 0xc0, 0xbf, 0xe1, 0xbf, 0x07, 0x00, 0xfe, 0x07, 0xfe, 0x01, 0xfc, 0xff, 0x00, 0xfe, 0x0d,
 0x1f, 0xf8, 0x07, 0xf0, 0xfc, 0x03, 0xf8, 0x37, 0x7f, 0xe0, 0x1f, 0xc0, 0xf0, 0x0f, 0xe0, 0xdf,
 0xff, 0xdf, 0x03, 0x00, 0xfe, 0x03, 0xff, 0x00, 0x86, 0x7f, 0x00, 0xff, 0xf8, 0x0f, 0xfc, 0x03,
 0x1b, 0xfe, 0x01, 0xfc, 0xe0, 0x3f, 0xf0, 0x0f, 0x6f, 0xf8, 0x07, 0xf0, 0x80, 0xff, 0xef, 0x01,
 0x00, 0xff, 0x81, 0x7f, 0x7f, 0xc3, 0x3f, 0x80, 0x01, 0xfc, 0x07, 0xfe, 0xfe, 0x0d, 0xff, 0x00,
 0x07, 0xf0, 0x1f, 0xf8, 0xf8, 0x37, 0xfc, 0x03, 0x00, 0xc0, 0xff, 0xf7, 0x3f, 0x80, 0xff, 0xc0,
 0xc0, 0xbf, 0xe1, 0x1f, 0xff, 0x00, 0xfe, 0x03, 0x00, 0xff, 0x86, 0x7f, 0xfc, 0x03, 0xf8, 0x0f,
 0x01, 0xfc, 0x1b, 0xfe, 0x7b, 0x00, 0xe0, 0xff, 0xe0, 0x1f, 0xc0, 0x7f, 0x0f, 0xe0, 0xdf, 0xf0,
 0x81, 0x7f, 0x00, 0xff, 0x3f, 0x80, 0x7f, 0xc3, 0x07, 0xfe, 0x01, 0xfc, 0xff, 0x00, 0xfe, 0x0d,
 0xff, 0x3d, 0x00, 0xf0, 0x3f, 0xf0, 0x0f, 0xe0, 0xf8, 0x07, 0xf0, 0x6f, 0xff, 0xc0, 0x3f, 0x80,
 0xe1, 0x1f, 0xc0, 0xbf, 0xfe, 0x03, 0xff, 0x00, 0x86, 0x7f, 0x00, 0xff, 0xf8, 0xff, 0x1e, 0x00,
 0xf0, 0x1f, 0xf8, 0x07, 0x37, 0xfc, 0x03, 0xf8, 0xc0, 0x7f, 0xe0, 0x1f, 0xdf, 0xf0, 0x0f, 0xe0,
 0x00, 0xff, 0x81, 0x7f, 0x7f, 0xc3, 0x3f, 0x80, 0x00, 0xfc, 0x7f, 0x0f, 0x03, 0xf8, 0x0f, 0xfc,
 0xfc, 0x1b, 0xfe, 0x01, 0x0f, 0xe0, 0x3f, 0xf0, 0xf0, 0x6f, 0xf8, 0x07, 0x3f, 0x80, 0xff, 0xc0,
 0xc0, 0xbf, 0xe1, 0x1f, 0x07, 0x00, 0xfe, 0xbf, 0xfe, 0x01, 0xfc, 0x07, 0x00, 0xfe, 0x0d, 0xff,
 0xf8, 0x07, 0xf0, 0x1f, 0x03, 0xf8, 0x37, 0xfc, 0xe0, 0x1f, 0xc0, 0x7f, 0x0f, 0xe0, 0xdf, 0xf0,
 0xdf, 0x03, 0x00, 0xff, 0x03, 0xff, 0x00, 0xfe, 0x7f, 0x00, 0xff, 0x86, 0x0f, 0xfc, 0x03, 0xf8,
 0xfe, 0x01, 0xfc, 0x1b, 0x3f, 0xf0, 0x0f, 0xe0, 0xf8, 0x07, 0xf0, 0x6f, 0xff, 0xef, 0x01, 0x80,
 /* 1088=64 * 17 0 */
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,

0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,


