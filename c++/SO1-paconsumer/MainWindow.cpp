/****************************************************************************
** Form implementation generated from reading ui file 'MainWindow.ui'
**
** Created: Fri Nov 9 22:07:55 2007
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.7   edited Aug 31 2005 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "MainWindow.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qbuttongroup.h>
#include <qlabel.h>
#include <qslider.h>
#include <qgroupbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qaction.h>
#include <qmenubar.h>
#include <qpopupmenu.h>
#include <qtoolbar.h>
#include <qimage.h>
#include <qpixmap.h>

static const unsigned char image0_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x16,
    0x08, 0x06, 0x00, 0x00, 0x00, 0xc4, 0xb4, 0x6c, 0x3b, 0x00, 0x00, 0x00,
    0x7f, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xed, 0x95, 0x51, 0x0a, 0x00,
    0x21, 0x08, 0x44, 0x75, 0xd9, 0xdb, 0x04, 0x1e, 0xc0, 0xe8, 0xfa, 0x5e,
    0xcb, 0xfd, 0xda, 0x85, 0x2d, 0x4b, 0x11, 0xfa, 0x6b, 0x20, 0x28, 0xa3,
    0x57, 0x0c, 0x53, 0xa1, 0x88, 0xc0, 0x0e, 0xdd, 0x7d, 0x81, 0x99, 0x35,
    0xb2, 0x50, 0x44, 0x70, 0x35, 0x7f, 0x59, 0x45, 0x55, 0x9d, 0x36, 0x00,
    0x00, 0x22, 0x72, 0x0f, 0x60, 0x82, 0x3d, 0x11, 0x91, 0x0b, 0x1f, 0xac,
    0x88, 0xa8, 0x94, 0xf2, 0xf5, 0x99, 0x59, 0x2d, 0x5b, 0x52, 0xe0, 0x5a,
    0xeb, 0x6f, 0x6c, 0xc1, 0x53, 0xe0, 0xd6, 0xda, 0x50, 0xeb, 0xe1, 0x29,
    0x30, 0xe2, 0x32, 0x10, 0x39, 0xf0, 0x9b, 0x0c, 0x6f, 0xb3, 0x54, 0x2a,
    0x22, 0x3a, 0xe0, 0x03, 0x3e, 0xe0, 0x85, 0xcc, 0x2b, 0x1d, 0x79, 0x0b,
    0x3c, 0xe1, 0xae, 0x3f, 0x6f, 0x9b, 0x15, 0x0f, 0x6d, 0x54, 0x33, 0xaf,
    0x47, 0xa4, 0xf4, 0xc2, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44,
    0xae, 0x42, 0x60, 0x82
};

static const unsigned char image1_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x16,
    0x08, 0x06, 0x00, 0x00, 0x00, 0xc4, 0xb4, 0x6c, 0x3b, 0x00, 0x00, 0x00,
    0xae, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xb5, 0x94, 0x51, 0x0e, 0xc3,
    0x20, 0x0c, 0x43, 0x6d, 0xb4, 0x53, 0x71, 0xb6, 0x69, 0x1f, 0xd3, 0xce,
    0xe6, 0x6b, 0xb1, 0x8f, 0x51, 0x35, 0xa2, 0x19, 0x23, 0x5a, 0xf0, 0x4f,
    0x44, 0x2b, 0x5e, 0x2c, 0x03, 0xa1, 0x24, 0xec, 0x50, 0xd9, 0x42, 0xdd,
    0x09, 0xbe, 0x45, 0x37, 0xd4, 0x5a, 0x9b, 0x5d, 0x4b, 0xe2, 0xf8, 0x5f,
    0x12, 0x43, 0xe0, 0x63, 0x93, 0xd7, 0x48, 0x12, 0x6d, 0x53, 0x66, 0x1d,
    0x9e, 0x85, 0x4a, 0x62, 0x4a, 0xc6, 0x63, 0x3c, 0x40, 0xcf, 0xf8, 0x57,
    0x6e, 0x51, 0x28, 0x00, 0x10, 0x40, 0x6b, 0x0d, 0x00, 0xda, 0xb1, 0x04,
    0xb9, 0xc6, 0x9d, 0x19, 0xe8, 0x87, 0x77, 0x42, 0x01, 0xf6, 0x4e, 0xbc,
    0x7c, 0x8f, 0x34, 0x2f, 0xc6, 0x78, 0xb0, 0xce, 0x55, 0x3c, 0xc7, 0x6b,
    0x75, 0x2e, 0x37, 0xe3, 0x68, 0xd6, 0x9e, 0xdc, 0x8c, 0x2d, 0xf4, 0xf5,
    0x8c, 0x01, 0xef, 0x8f, 0x4f, 0x75, 0x33, 0xfe, 0x17, 0x6a, 0x1e, 0x48,
    0x2e, 0xf4, 0xe2, 0x38, 0x0b, 0x6a, 0xc0, 0xb9, 0xd0, 0xd3, 0x6a, 0x57,
    0x16, 0x14, 0x30, 0x83, 0x3e, 0x13, 0x0a, 0xac, 0xde, 0xf6, 0x2f, 0x9a,
    0xcd, 0x8a, 0xb4, 0x79, 0x3c, 0xea, 0x0d, 0x05, 0x19, 0x70, 0xcd, 0xbc,
    0x4f, 0x01, 0xb2, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae,
    0x42, 0x60, 0x82
};

static const unsigned char image2_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x16,
    0x08, 0x06, 0x00, 0x00, 0x00, 0xc4, 0xb4, 0x6c, 0x3b, 0x00, 0x00, 0x00,
    0xad, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xd5, 0x95, 0x31, 0x0e, 0x84,
    0x20, 0x10, 0x45, 0x3f, 0x86, 0x86, 0xc4, 0x82, 0xf3, 0xd0, 0xcc, 0xc5,
    0x8c, 0x85, 0xf1, 0x62, 0x34, 0x73, 0x1e, 0x0b, 0x92, 0x2d, 0x77, 0x0b,
    0x33, 0x86, 0x15, 0x0d, 0x62, 0xd0, 0x84, 0xd7, 0x10, 0x0c, 0xbe, 0x7c,
    0xc6, 0x41, 0x14, 0x33, 0xe3, 0x09, 0x34, 0x00, 0x38, 0xe7, 0xbe, 0x35,
    0xa5, 0xcc, 0xac, 0xb4, 0x4c, 0xe6, 0x69, 0x1d, 0x87, 0x11, 0xf0, 0xde,
    0x17, 0x89, 0x88, 0x68, 0x7b, 0x87, 0x88, 0x00, 0x00, 0x5d, 0xa5, 0x90,
    0x09, 0x3a, 0xbf, 0xe4, 0x18, 0x13, 0x2c, 0x3e, 0xfd, 0xb2, 0xcd, 0x25,
    0xa9, 0x90, 0x4d, 0x6c, 0x82, 0x85, 0x09, 0x36, 0x79, 0x1e, 0x4b, 0x81,
    0xb5, 0x94, 0x52, 0xce, 0x4b, 0xe2, 0xbb, 0x64, 0x4b, 0xb1, 0x4f, 0x76,
    0x95, 0xc7, 0x12, 0xb7, 0x27, 0x4e, 0x6a, 0x3c, 0x4f, 0x69, 0xeb, 0xe4,
    0x88, 0xbb, 0xe1, 0x54, 0x7c, 0xb6, 0xb0, 0x94, 0x77, 0xdb, 0x6d, 0x18,
    0xcb, 0x45, 0xfb, 0x5d, 0xde, 0x3e, 0xd2, 0xf1, 0x8f, 0xea, 0xe8, 0x9b,
    0xb4, 0xd7, 0x6e, 0xed, 0x89, 0x95, 0xdc, 0x79, 0xb5, 0xae, 0x27, 0x66,
    0x56, 0x7f, 0xe2, 0xda, 0xfc, 0x00, 0x45, 0x36, 0x2b, 0xc8, 0x71, 0x7a,
    0x5b, 0x49, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42,
    0x60, 0x82
};

static const unsigned char image3_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x16,
    0x08, 0x06, 0x00, 0x00, 0x00, 0xc4, 0xb4, 0x6c, 0x3b, 0x00, 0x00, 0x02,
    0x8c, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0x8d, 0x95, 0xaf, 0x7b, 0xdb,
    0x30, 0x10, 0x86, 0xdf, 0xec, 0x09, 0x38, 0x31, 0x9b, 0xc5, 0x30, 0xb0,
    0x61, 0x35, 0x0c, 0x2c, 0xf4, 0x58, 0xcb, 0x5a, 0x18, 0xb8, 0x3f, 0x61,
    0x81, 0xa3, 0x63, 0xa3, 0x85, 0x1d, 0xeb, 0xd8, 0x02, 0x0b, 0x1d, 0xd6,
    0xb0, 0x1a, 0x0a, 0xda, 0xcc, 0x62, 0x77, 0x2c, 0x03, 0xb2, 0x1d, 0xe7,
    0xd7, 0xb3, 0x8a, 0x28, 0x96, 0x2e, 0xef, 0x7d, 0xba, 0xef, 0x2c, 0x4f,
    0xca, 0xb2, 0xe4, 0xd2, 0x68, 0xdb, 0x76, 0x2f, 0x22, 0xa4, 0x69, 0x7a,
    0xb4, 0x6e, 0x66, 0x00, 0xa8, 0x2a, 0x00, 0x21, 0x04, 0x92, 0x24, 0xc1,
    0x39, 0x37, 0x19, 0xc7, 0x4d, 0x2f, 0x52, 0x01, 0x11, 0x21, 0xcf, 0xf3,
    0x01, 0x74, 0xba, 0x37, 0x12, 0x80, 0xf7, 0xfe, 0x2c, 0xe6, 0x2a, 0x18,
    0xa0, 0xaa, 0xaa, 0x33, 0xd8, 0x69, 0x22, 0x55, 0xc5, 0x39, 0xf7, 0x79,
    0xf0, 0x25, 0x80, 0x99, 0x9d, 0x25, 0xe8, 0xe7, 0x53, 0xf8, 0x97, 0x2b,
    0xdc, 0xbd, 0x99, 0x0d, 0xc1, 0xce, 0x39, 0x9c, 0x73, 0x47, 0xf5, 0xee,
    0xeb, 0x2f, 0x22, 0x67, 0xf5, 0xbd, 0xaa, 0x58, 0x55, 0x49, 0x92, 0x84,
    0xb6, 0x6d, 0x11, 0x91, 0xc1, 0xa8, 0xf1, 0xb8, 0x74, 0xfc, 0xcf, 0x28,
    0xc6, 0xcc, 0xce, 0x3a, 0x62, 0x0c, 0xed, 0x93, 0x5d, 0x32, 0xf7, 0xaa,
    0xe2, 0x5e, 0xcd, 0x25, 0xa5, 0xe3, 0x75, 0x55, 0x3d, 0xea, 0x90, 0xff,
    0x82, 0xeb, 0xba, 0x66, 0x3e, 0x9f, 0x93, 0x65, 0xd9, 0x55, 0x78, 0x6f,
    0xe4, 0x76, 0xbb, 0x25, 0x84, 0xb0, 0x17, 0x49, 0xc8, 0xb2, 0x74, 0xa8,
    0xf5, 0x11, 0x58, 0x55, 0xf7, 0xde, 0x7b, 0xaa, 0x5d, 0x85, 0x14, 0x82,
    0x88, 0x0c, 0x80, 0xd3, 0xb9, 0x57, 0xda, 0xd6, 0x2d, 0x65, 0x59, 0xd2,
    0x84, 0x86, 0x9b, 0x9b, 0x9b, 0x7d, 0x51, 0x14, 0xa4, 0x69, 0x3a, 0x99,
    0xf4, 0x6f, 0x9e, 0xaa, 0xee, 0xab, 0xca, 0x13, 0xea, 0x06, 0x35, 0x80,
    0xcb, 0x4a, 0x01, 0x9c, 0xa4, 0x08, 0x02, 0x0e, 0x7c, 0xed, 0x79, 0x7f,
    0xdf, 0xd1, 0x34, 0x35, 0xaa, 0xc6, 0x62, 0x31, 0x67, 0xb5, 0x5a, 0x45,
    0xc5, 0xbd, 0xd2, 0xe2, 0xee, 0x0e, 0x97, 0xa6, 0xa8, 0x1a, 0x98, 0x72,
    0x66, 0x8b, 0x19, 0x20, 0x94, 0x6c, 0x79, 0xe3, 0x2f, 0x4b, 0x5b, 0xb2,
    0xfc, 0xc8, 0xa9, 0xaa, 0x1d, 0xa8, 0xe1, 0x80, 0x8f, 0xf7, 0x0f, 0x7e,
    0xe9, 0x33, 0xd3, 0x08, 0x6d, 0x78, 0xf8, 0xfa, 0x40, 0x32, 0x4b, 0xae,
    0xaa, 0xec, 0x47, 0x45, 0xc5, 0x4f, 0x7e, 0xe0, 0xf1, 0xec, 0xd8, 0xf1,
    0x22, 0x2f, 0x14, 0xfe, 0x9e, 0x97, 0xf6, 0x99, 0xba, 0x0e, 0x18, 0x46,
    0xe3, 0x3d, 0xd3, 0xd0, 0x04, 0x9e, 0x9e, 0xee, 0xaf, 0xba, 0x7b, 0x3a,
    0x52, 0x52, 0xee, 0x58, 0x52, 0x22, 0x14, 0x14, 0xdc, 0xde, 0xde, 0x92,
    0x48, 0x46, 0x6b, 0x35, 0xcf, 0x2f, 0xbf, 0x09, 0x21, 0x90, 0xce, 0x52,
    0xa6, 0x06, 0x78, 0x5f, 0xc7, 0x7e, 0x34, 0x03, 0x11, 0x62, 0x8e, 0x98,
    0x48, 0x04, 0x1c, 0x2e, 0x56, 0xdc, 0x14, 0xc4, 0xf1, 0xcd, 0xbe, 0x73,
    0x8f, 0x27, 0xb3, 0x8c, 0x1d, 0x15, 0x98, 0x91, 0x66, 0x59, 0xdc, 0xef,
    0xdc, 0x99, 0xb6, 0x75, 0x8d, 0x17, 0x89, 0xf5, 0x34, 0x63, 0xf0, 0xcd,
    0x41, 0x74, 0xb1, 0x3b, 0x89, 0x33, 0x50, 0x01, 0xe2, 0x9a, 0x00, 0xde,
    0x1a, 0x8c, 0x78, 0x87, 0xf8, 0xaa, 0x1a, 0x3c, 0x71, 0x74, 0xed, 0xd6,
    0x2f, 0x58, 0x0f, 0xc4, 0x86, 0xa6, 0x50, 0xa2, 0x29, 0xb1, 0x9d, 0x87,
    0xc8, 0xa1, 0x73, 0xa4, 0xf7, 0x74, 0x34, 0x14, 0x65, 0x8a, 0x80, 0xb5,
    0xa3, 0x3f, 0x68, 0x27, 0x76, 0x1c, 0x68, 0x80, 0x28, 0xd8, 0xe9, 0x8e,
    0xc3, 0xac, 0xa5, 0x3b, 0x67, 0x7f, 0x36, 0xf2, 0x7c, 0xc9, 0x17, 0x6c,
    0xa4, 0x72, 0x10, 0xab, 0xf1, 0xd1, 0xba, 0xf9, 0x08, 0xea, 0xfa, 0xb0,
    0x0e, 0xda, 0x01, 0xbb, 0x72, 0xce, 0x66, 0x33, 0x56, 0xab, 0xa7, 0xa8,
    0xd8, 0x7b, 0xdf, 0x5b, 0x05, 0x62, 0x10, 0x04, 0x08, 0xd1, 0x39, 0xb3,
    0x88, 0x91, 0x5e, 0x95, 0x1d, 0x60, 0x1c, 0x6a, 0x8e, 0x19, 0x22, 0xb0,
    0x5e, 0xaf, 0xc9, 0xb2, 0x6c, 0x32, 0x9d, 0xcf, 0xe7, 0xbc, 0x6d, 0xde,
    0xf8, 0xb3, 0xd9, 0xa0, 0x6a, 0xc4, 0xfb, 0x47, 0x38, 0x6a, 0x3e, 0x19,
    0x3d, 0xcb, 0x01, 0x39, 0x9c, 0xb3, 0xeb, 0xa6, 0xf5, 0x7a, 0x4d, 0x9e,
    0xe7, 0x13, 0x80, 0xe1, 0x95, 0xae, 0xeb, 0x7a, 0xff, 0xfa, 0xba, 0xa1,
    0xe9, 0xbe, 0x5f, 0x8a, 0x76, 0xa6, 0x1c, 0x9c, 0x39, 0x7c, 0x35, 0x40,
    0xb5, 0x8d, 0xbf, 0x83, 0x91, 0x2f, 0x73, 0x1e, 0x1f, 0x1f, 0x59, 0x2c,
    0x16, 0xc3, 0x25, 0xf4, 0x0f, 0x01, 0x0f, 0x7c, 0xb0, 0xf1, 0xb5, 0xc3,
    0x04, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60,
    0x82
};

static const unsigned char image4_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x16,
    0x08, 0x06, 0x00, 0x00, 0x00, 0xc4, 0xb4, 0x6c, 0x3b, 0x00, 0x00, 0x00,
    0x9b, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xed, 0x94, 0x3b, 0x0e, 0x80,
    0x20, 0x0c, 0x86, 0x5b, 0xe3, 0xa9, 0x18, 0x89, 0xc7, 0x32, 0x0e, 0x84,
    0x63, 0x99, 0x8e, 0xbd, 0x16, 0x4e, 0x68, 0x41, 0x79, 0x49, 0x18, 0x4c,
    0xfc, 0xc7, 0xb6, 0x7c, 0x6d, 0xe8, 0x03, 0x99, 0x19, 0x46, 0x68, 0x1a,
    0x42, 0xfd, 0xc1, 0x52, 0x73, 0x4b, 0xb0, 0x52, 0xe4, 0x9e, 0xec, 0xd6,
    0x00, 0xe8, 0x45, 0xa3, 0xb4, 0xa1, 0x9f, 0x0a, 0xa5, 0xc8, 0x31, 0x87,
    0xce, 0x12, 0x30, 0x96, 0x7c, 0x1f, 0x54, 0x1c, 0xc3, 0x63, 0x60, 0x29,
    0x31, 0xed, 0xe4, 0x7c, 0xe5, 0xb7, 0x3f, 0xf6, 0x41, 0x12, 0xca, 0xac,
    0x31, 0x05, 0x95, 0x09, 0xd7, 0xed, 0xb2, 0x3d, 0x36, 0x2f, 0x86, 0xa6,
    0x80, 0x39, 0x65, 0xa7, 0xe2, 0x2d, 0xb4, 0x08, 0xae, 0x6d, 0x5a, 0x33,
    0xb8, 0x07, 0x5e, 0xb5, 0x20, 0x25, 0xb8, 0xf7, 0x5b, 0x73, 0xd9, 0xb0,
    0xe7, 0xba, 0xd1, 0x4e, 0x4e, 0x4e, 0x82, 0xec, 0x49, 0xd7, 0x4a, 0xa7,
    0xa0, 0x00, 0x9d, 0x15, 0xe7, 0xf4, 0xbd, 0xeb, 0xf6, 0x83, 0x4f, 0x1d,
    0x17, 0x25, 0x46, 0xd1, 0x7f, 0x21, 0xbe, 0x92, 0x00, 0x00, 0x00, 0x00,
    0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

static const unsigned char image5_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x16,
    0x08, 0x06, 0x00, 0x00, 0x00, 0xc4, 0xb4, 0x6c, 0x3b, 0x00, 0x00, 0x00,
    0x93, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xed, 0x94, 0x3d, 0x0e, 0x80,
    0x20, 0x0c, 0x46, 0xa9, 0xf1, 0x54, 0x8c, 0xc4, 0x63, 0x19, 0x07, 0xc2,
    0xb1, 0x48, 0xc7, 0x5e, 0x0b, 0x27, 0xb0, 0x22, 0x60, 0x83, 0xb2, 0xf1,
    0x2d, 0x24, 0xd0, 0x3e, 0xfa, 0x07, 0x40, 0x44, 0x6a, 0x84, 0x96, 0x21,
    0xd4, 0x09, 0xe6, 0x5a, 0xf3, 0x0d, 0xf4, 0x18, 0xf6, 0xa3, 0x6c, 0x4c,
    0x64, 0x40, 0x0a, 0x06, 0x3e, 0x15, 0x5a, 0x63, 0x90, 0x38, 0xd5, 0x2e,
    0xd0, 0x1a, 0x43, 0x3c, 0x4b, 0x11, 0xa3, 0xbf, 0xa0, 0x2d, 0x47, 0xbe,
    0x72, 0xbb, 0x3c, 0xa8, 0x54, 0xe3, 0x98, 0x7e, 0x2b, 0x5d, 0x22, 0x03,
    0x25, 0x58, 0x29, 0xd3, 0xae, 0xe6, 0xb5, 0x22, 0xfd, 0x04, 0xce, 0xe1,
    0xbf, 0x82, 0xdf, 0x1a, 0xdd, 0x05, 0x96, 0x4c, 0x4f, 0x02, 0x3b, 0x2b,
    0x73, 0x92, 0x8e, 0x64, 0x75, 0x8e, 0x9d, 0x55, 0xca, 0x6c, 0xf2, 0x07,
    0x91, 0xeb, 0x56, 0x0a, 0xde, 0x90, 0xda, 0xeb, 0x93, 0x0a, 0xe6, 0x7f,
    0x3c, 0xc1, 0x0f, 0x9d, 0x5b, 0xa7, 0x46, 0x08, 0x5c, 0x06, 0xe1, 0xe5,
    0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

static const unsigned char image6_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x16,
    0x08, 0x06, 0x00, 0x00, 0x00, 0xc4, 0xb4, 0x6c, 0x3b, 0x00, 0x00, 0x00,
    0x9d, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xcd, 0xd4, 0x41, 0x0e, 0x80,
    0x20, 0x0c, 0x04, 0xc0, 0xd6, 0xf8, 0xaa, 0x9e, 0x79, 0x36, 0xe7, 0xfd,
    0x16, 0x9e, 0x9a, 0x20, 0x22, 0x2c, 0xa0, 0xd1, 0x5e, 0x4c, 0x34, 0x0e,
    0xed, 0xa6, 0x41, 0x01, 0xc8, 0x1b, 0xb5, 0xb5, 0x3e, 0x9a, 0x59, 0x1a,
    0x79, 0x4f, 0xc3, 0x2b, 0xf5, 0x1f, 0x98, 0x89, 0x81, 0x82, 0x6b, 0x10,
    0x00, 0x5d, 0x82, 0x19, 0x60, 0x0a, 0xf6, 0xf2, 0xae, 0xd9, 0x18, 0x44,
    0x44, 0x94, 0xd9, 0xe3, 0x1c, 0x64, 0xa7, 0xf8, 0x76, 0x2b, 0xbc, 0xcb,
    0x91, 0xcc, 0xc9, 0x8c, 0x63, 0xca, 0x9f, 0x8f, 0xc0, 0x8e, 0x79, 0xb7,
    0x66, 0x31, 0x31, 0x07, 0x74, 0xee, 0x8a, 0x98, 0x80, 0x70, 0x1a, 0x1f,
    0x08, 0x0a, 0x04, 0xed, 0xe1, 0xb7, 0x70, 0x0d, 0x2d, 0x0f, 0x68, 0xe1,
    0x55, 0xb8, 0x87, 0x32, 0xf8, 0x05, 0x66, 0xd1, 0x5e, 0x0d, 0xed, 0x31,
    0x93, 0xed, 0x14, 0x5c, 0x56, 0x6b, 0xba, 0x7d, 0xf4, 0xe7, 0xbc, 0xeb,
    0x56, 0x64, 0xd5, 0xbb, 0x22, 0x1f, 0x77, 0x36, 0x6f, 0xea, 0x12, 0x9a,
    0xa9, 0x03, 0xbb, 0x25, 0x61, 0xad, 0xb1, 0xd6, 0xf6, 0xe7, 0x00, 0x00,
    0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

static const unsigned char image7_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x16,
    0x08, 0x06, 0x00, 0x00, 0x00, 0xc4, 0xb4, 0x6c, 0x3b, 0x00, 0x00, 0x00,
    0xd3, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xb5, 0x95, 0xb1, 0x0e, 0x83,
    0x30, 0x0c, 0x44, 0xcf, 0x88, 0xaf, 0x8a, 0x18, 0xd9, 0xf9, 0x19, 0x36,
    0xd4, 0x85, 0xaa, 0x7f, 0xd5, 0xd9, 0x9f, 0xd5, 0xeb, 0x50, 0x99, 0x46,
    0x10, 0x93, 0x10, 0x94, 0x93, 0xbc, 0x70, 0xc9, 0xf3, 0xc9, 0x49, 0x84,
    0xa8, 0x2a, 0x5a, 0xa8, 0x6b, 0x42, 0x05, 0x20, 0x00, 0x78, 0xb6, 0x40,
    0x55, 0xa5, 0x1a, 0x4c, 0xa6, 0xd9, 0x22, 0x52, 0x0d, 0xef, 0xf7, 0x10,
    0x93, 0x35, 0x23, 0x09, 0x11, 0xe1, 0x55, 0xf8, 0x06, 0xf6, 0x52, 0xd7,
    0xc2, 0xb7, 0x51, 0xa4, 0x12, 0xff, 0xbe, 0xad, 0xa7, 0x00, 0xd5, 0x31,
    0xd9, 0xac, 0x60, 0xc6, 0x2b, 0xc8, 0x87, 0xe3, 0x3f, 0x5d, 0x78, 0xf7,
    0x5f, 0x24, 0x87, 0x8a, 0x1b, 0xee, 0x3d, 0xd3, 0x30, 0x2c, 0x08, 0xe1,
    0x7d, 0x48, 0xb6, 0x81, 0x49, 0x1e, 0x2a, 0x96, 0xe7, 0x4d, 0x53, 0x1a,
    0xee, 0xde, 0x0a, 0x83, 0x79, 0xbe, 0x79, 0xf3, 0xdc, 0x01, 0xf8, 0x00,
    0x58, 0x10, 0xc2, 0x8b, 0x36, 0x96, 0xa2, 0x5b, 0x71, 0xe6, 0xdb, 0x9c,
    0x4d, 0x21, 0xbc, 0xa9, 0x3a, 0xca, 0xad, 0xc4, 0xa9, 0x43, 0xb5, 0x46,
    0xb7, 0x13, 0x7b, 0xaa, 0x4e, 0x9c, 0x6b, 0xde, 0x2c, 0x71, 0x67, 0x69,
    0xbc, 0x8a, 0x13, 0xe7, 0x2a, 0x56, 0x9f, 0x7b, 0xff, 0x76, 0x3f, 0xab,
    0x67, 0x9c, 0x53, 0xf5, 0x8c, 0xaf, 0x6c, 0x2a, 0x51, 0x11, 0x78, 0xff,
    0x08, 0x8a, 0xf6, 0xb4, 0xfa, 0x99, 0x7e, 0x01, 0xdf, 0xa4, 0x98, 0x7b,
    0x8b, 0x94, 0x35, 0x47, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44,
    0xae, 0x42, 0x60, 0x82
};

static const unsigned char image8_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x16,
    0x08, 0x06, 0x00, 0x00, 0x00, 0xc4, 0xb4, 0x6c, 0x3b, 0x00, 0x00, 0x00,
    0xec, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xb5, 0x95, 0x4d, 0x0e, 0x83,
    0x20, 0x10, 0x85, 0xdf, 0x98, 0x9e, 0x6a, 0x12, 0x37, 0xbd, 0x96, 0xc4,
    0x45, 0x83, 0xd7, 0xea, 0xa6, 0xc9, 0x5c, 0x6b, 0xba, 0x40, 0x2d, 0xc8,
    0x50, 0xd0, 0xd2, 0x97, 0x98, 0x09, 0x3f, 0xf3, 0xcd, 0x13, 0x04, 0x49,
    0x44, 0xf0, 0x0f, 0xdd, 0xbe, 0x0d, 0x32, 0xb3, 0x1e, 0xfb, 0x44, 0x84,
    0x5a, 0xc0, 0xb4, 0x39, 0xb6, 0x20, 0x00, 0xa0, 0x51, 0x2f, 0x15, 0x90,
    0x56, 0xb1, 0xa1, 0x15, 0x6a, 0xb5, 0x37, 0x59, 0xf9, 0x04, 0x40, 0x01,
    0xc0, 0x3f, 0x3c, 0x00, 0x07, 0xc0, 0xc3, 0xcd, 0x6e, 0x07, 0xc5, 0x2e,
    0xe3, 0xb6, 0x35, 0x3f, 0x76, 0x4e, 0x00, 0xf4, 0x38, 0x49, 0x5e, 0xf5,
    0x0d, 0xe5, 0x91, 0x33, 0x78, 0x0c, 0x1e, 0x42, 0x08, 0x83, 0x21, 0x9e,
    0x51, 0x39, 0x6f, 0xfd, 0x2a, 0x7c, 0x32, 0x89, 0x47, 0x6e, 0x04, 0xa7,
    0x79, 0x06, 0xf8, 0x33, 0x18, 0xbf, 0xde, 0xb9, 0x98, 0x6a, 0xb0, 0x2b,
    0x5f, 0x89, 0xa9, 0xd6, 0xcd, 0x2b, 0xc3, 0xdd, 0x9c, 0x27, 0xd9, 0x4a,
    0x37, 0xcf, 0x5c, 0xe3, 0xa3, 0x13, 0xd5, 0xa9, 0x88, 0x23, 0x5a, 0xa0,
    0x3a, 0x65, 0x87, 0x27, 0x5b, 0xe3, 0x12, 0x9c, 0x68, 0xc9, 0xa0, 0x71,
    0xc1, 0x00, 0x5f, 0x54, 0xe4, 0x4e, 0xcd, 0x8e, 0x6b, 0xae, 0x2d, 0x78,
    0x37, 0xc7, 0x47, 0x78, 0x17, 0xc7, 0x56, 0xd1, 0x9f, 0x1d, 0x5b, 0x05,
    0x89, 0x96, 0xbe, 0x6b, 0xdc, 0xcd, 0xb1, 0xa5, 0xdd, 0xc0, 0x7a, 0xd1,
    0x6b, 0xf9, 0xf1, 0x7a, 0x56, 0x80, 0x57, 0xaa, 0xfd, 0xf3, 0x98, 0x9f,
    0x85, 0xeb, 0xfd, 0xbb, 0xaa, 0xe0, 0xab, 0x7a, 0x03, 0x0d, 0x36, 0xe3,
    0xe7, 0x4e, 0x20, 0x86, 0xd1, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e,
    0x44, 0xae, 0x42, 0x60, 0x82
};

static const unsigned char image9_data[] = { 
    0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
    0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x16,
    0x08, 0x06, 0x00, 0x00, 0x00, 0xc4, 0xb4, 0x6c, 0x3b, 0x00, 0x00, 0x02,
    0x59, 0x49, 0x44, 0x41, 0x54, 0x38, 0x8d, 0xb5, 0x95, 0x21, 0x93, 0x1b,
    0x39, 0x10, 0x46, 0x9f, 0xb7, 0x02, 0x7a, 0x98, 0xc4, 0x2c, 0x28, 0x38,
    0xcb, 0x6c, 0xb6, 0x86, 0x03, 0x1d, 0x68, 0x96, 0x85, 0xf9, 0x5d, 0x86,
    0x81, 0x6b, 0x66, 0xc3, 0x85, 0x03, 0x3d, 0xcc, 0x03, 0x05, 0x35, 0x4c,
    0x62, 0xdd, 0x6c, 0x02, 0x1c, 0x57, 0x6d, 0x2e, 0x97, 0xf3, 0xa6, 0x72,
    0xfb, 0x21, 0xa9, 0x4b, 0xf5, 0xf4, 0x49, 0xad, 0x6e, 0x2d, 0xfa, 0xbe,
    0xe7, 0x23, 0xf4, 0xf0, 0x21, 0x54, 0xe0, 0xd3, 0xdb, 0x49, 0x29, 0x65,
    0x4e, 0x29, 0x91, 0x73, 0xa6, 0x9a, 0x01, 0xe0, 0x44, 0x88, 0x31, 0x12,
    0x63, 0xa4, 0x69, 0x9a, 0xc5, 0x1f, 0x83, 0x73, 0xce, 0x73, 0x7f, 0x3e,
    0xe3, 0x63, 0x60, 0xbd, 0xfb, 0x0c, 0x4e, 0xae, 0xf1, 0x94, 0x18, 0x5e,
    0xcf, 0xa4, 0x94, 0xd8, 0x6c, 0x36, 0xb3, 0xf7, 0xfe, 0x5d, 0xf0, 0x45,
    0xdf, 0xf7, 0xe4, 0x9c, 0xe7, 0x97, 0x97, 0x17, 0x36, 0x9f, 0x3b, 0x36,
    0x5f, 0x76, 0x00, 0x98, 0x19, 0x6a, 0x8a, 0x61, 0x54, 0xab, 0xf4, 0xdf,
    0x8e, 0x48, 0x36, 0xb6, 0xdb, 0xed, 0xbb, 0x9c, 0x3f, 0xa8, 0xea, 0xdc,
    0x9f, 0x7b, 0xba, 0xaf, 0xcf, 0xb4, 0xdb, 0x0e, 0x33, 0xc3, 0x92, 0xa0,
    0x69, 0x09, 0x63, 0xa0, 0xf6, 0x42, 0xc9, 0x85, 0x76, 0xdb, 0x41, 0xf0,
    0x0c, 0xc3, 0xf0, 0xae, 0xab, 0x78, 0x48, 0x29, 0xe1, 0x63, 0x64, 0xd3,
    0x75, 0x00, 0x48, 0x5e, 0x52, 0x52, 0x66, 0xb2, 0x81, 0x49, 0x46, 0xc4,
    0x3c, 0xd2, 0x47, 0xac, 0x56, 0xe2, 0xa6, 0x65, 0x4c, 0x89, 0x52, 0xca,
    0x7c, 0x1f, 0x3c, 0x4d, 0xb4, 0x9b, 0x35, 0x86, 0x61, 0x05, 0xd2, 0x98,
    0x48, 0x7e, 0x44, 0x43, 0x21, 0x93, 0x30, 0x29, 0x34, 0x08, 0x96, 0x0d,
    0x44, 0x90, 0xe0, 0xc8, 0x39, 0xdf, 0x77, 0x6c, 0xaa, 0x38, 0xef, 0x28,
    0x56, 0xc8, 0xcd, 0x44, 0x59, 0x4f, 0x88, 0x13, 0xac, 0x18, 0x8e, 0x08,
    0x78, 0x52, 0x1d, 0x51, 0xa7, 0x60, 0x20, 0xae, 0x61, 0x9a, 0xa6, 0xbb,
    0xe0, 0x4f, 0x00, 0x55, 0x0d, 0x11, 0x40, 0x15, 0x03, 0x30, 0x43, 0x72,
    0xa4, 0xb1, 0x40, 0x4e, 0x3d, 0xda, 0x26, 0xc0, 0x63, 0xa5, 0x02, 0x02,
    0xd7, 0x55, 0xff, 0xed, 0x18, 0x0c, 0xcc, 0xae, 0x49, 0xb3, 0xdb, 0x18,
    0x1a, 0x13, 0xf2, 0x78, 0xa6, 0xb4, 0x19, 0x82, 0x80, 0x29, 0x26, 0x60,
    0xb5, 0x20, 0x22, 0xf7, 0xc1, 0xc1, 0x07, 0x52, 0x4a, 0x98, 0x5e, 0x81,
    0x56, 0x0d, 0xc3, 0xc8, 0x96, 0xb0, 0x50, 0x31, 0xc0, 0xca, 0x35, 0xa6,
    0x55, 0x29, 0xa5, 0x12, 0x63, 0xbc, 0x0f, 0x8e, 0x31, 0x92, 0xfb, 0x0b,
    0x5a, 0x15, 0xb3, 0x7a, 0x05, 0x14, 0x43, 0xcc, 0x43, 0x12, 0x6a, 0xad,
    0xfc, 0x38, 0x08, 0x35, 0x4f, 0x04, 0x04, 0xe7, 0xdc, 0x3b, 0x1c, 0x87,
    0xb0, 0x08, 0xde, 0x33, 0xbc, 0xbe, 0xa2, 0x80, 0x2a, 0x80, 0x92, 0x38,
    0x53, 0xdc, 0x88, 0x13, 0xa1, 0x94, 0x4a, 0x29, 0x15, 0x1b, 0x12, 0x6d,
    0xdb, 0xe2, 0x83, 0x27, 0xe7, 0x3c, 0xab, 0xea, 0x6f, 0x9f, 0xdd, 0x03,
    0xc0, 0x6a, 0xb5, 0xc2, 0x15, 0xa8, 0xc7, 0x33, 0x8d, 0x29, 0x8d, 0x35,
    0xf8, 0x65, 0x83, 0x44, 0x87, 0x18, 0x04, 0x03, 0x5e, 0x2f, 0x3c, 0x3d,
    0x3d, 0xf1, 0xf8, 0xf8, 0xb8, 0x48, 0x63, 0xe2, 0x74, 0x3a, 0xb1, 0xdf,
    0xef, 0xc9, 0x39, 0xff, 0x2b, 0x7c, 0x71, 0x6b, 0x9b, 0xaa, 0x3a, 0x0f,
    0xc3, 0xc0, 0x98, 0x12, 0xe2, 0x04, 0x9a, 0x6b, 0x82, 0xac, 0x54, 0xc4,
    0xa0, 0xeb, 0x3a, 0x42, 0x08, 0xb7, 0x52, 0x9e, 0x8f, 0xc7, 0x23, 0x87,
    0xc3, 0x01, 0xe7, 0x1c, 0xbb, 0xdd, 0x8e, 0xd5, 0x6a, 0xf5, 0x53, 0xa9,
    0x2f, 0xfe, 0xd9, 0x8f, 0x4b, 0x29, 0x73, 0xce, 0x99, 0x5a, 0x2b, 0x22,
    0x82, 0xf7, 0xfe, 0x96, 0xac, 0x5f, 0xfa, 0x43, 0x4a, 0x69, 0xfe, 0xe1,
    0x9a, 0xae, 0xeb, 0x7e, 0xda, 0xfc, 0x17, 0xf0, 0x9f, 0x4a, 0x55, 0xe7,
    0xd3, 0xe9, 0xc4, 0xe1, 0x70, 0x60, 0xb9, 0x5c, 0xf2, 0xfc, 0xfc, 0xcc,
    0x7a, 0xbd, 0x5e, 0xfc, 0x35, 0xf8, 0xa6, 0xcb, 0xe5, 0x32, 0xef, 0xf7,
    0x7b, 0xa6, 0x69, 0x62, 0xbb, 0xdd, 0xfe, 0xbd, 0xe3, 0xb7, 0x2a, 0xa5,
    0xcc, 0x87, 0xc3, 0x01, 0x55, 0xfd, 0x7f, 0xc1, 0x6f, 0xf5, 0x61, 0x7f,
    0xde, 0x77, 0x3b, 0x42, 0x7a, 0x02, 0x0f, 0x23, 0xb1, 0x5a, 0x00, 0x00,
    0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};


/*
 *  Constructs a MainWindow as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 */
MainWindow::MainWindow( QWidget* parent, const char* name, WFlags fl )
    : QMainWindow( parent, name, fl )
{
    (void)statusBar();
    QImage img;
    img.loadFromData( image0_data, sizeof( image0_data ), "PNG" );
    image0 = img;
    img.loadFromData( image1_data, sizeof( image1_data ), "PNG" );
    image1 = img;
    img.loadFromData( image2_data, sizeof( image2_data ), "PNG" );
    image2 = img;
    img.loadFromData( image3_data, sizeof( image3_data ), "PNG" );
    image3 = img;
    img.loadFromData( image4_data, sizeof( image4_data ), "PNG" );
    image4 = img;
    img.loadFromData( image5_data, sizeof( image5_data ), "PNG" );
    image5 = img;
    img.loadFromData( image6_data, sizeof( image6_data ), "PNG" );
    image6 = img;
    img.loadFromData( image7_data, sizeof( image7_data ), "PNG" );
    image7 = img;
    img.loadFromData( image8_data, sizeof( image8_data ), "PNG" );
    image8 = img;
    img.loadFromData( image9_data, sizeof( image9_data ), "PNG" );
    image9 = img;
    if ( !name )
	setName( "MainWindow" );
    setCentralWidget( new QWidget( this, "qt_central_widget" ) );

    QWidget* privateLayoutWidget = new QWidget( centralWidget(), "layout8" );
    privateLayoutWidget->setGeometry( QRect( 1, 11, 340, 300 ) );
    layout8 = new QVBoxLayout( privateLayoutWidget, 11, 6, "layout8"); 

    BotonesLector = new QButtonGroup( privateLayoutWidget, "BotonesLector" );
    BotonesLector->setColumnLayout(0, Qt::Vertical );
    BotonesLector->layout()->setSpacing( 6 );
    BotonesLector->layout()->setMargin( 11 );
    BotonesLectorLayout = new QHBoxLayout( BotonesLector->layout() );
    BotonesLectorLayout->setAlignment( Qt::AlignTop );

    layout9 = new QHBoxLayout( 0, 0, 6, "layout9"); 

    pushButton1 = new QPushButton( BotonesLector, "pushButton1" );
    layout9->addWidget( pushButton1 );

    pushButton2 = new QPushButton( BotonesLector, "pushButton2" );
    layout9->addWidget( pushButton2 );
    BotonesLectorLayout->addLayout( layout9 );
    layout8->addWidget( BotonesLector );

    layout6 = new QHBoxLayout( 0, 0, 6, "layout6"); 

    layout5 = new QVBoxLayout( 0, 0, 6, "layout5"); 

    txtSldrTitleTemp = new QLabel( privateLayoutWidget, "txtSldrTitleTemp" );
    txtSldrTitleTemp->setFrameShape( QLabel::Box );
    txtSldrTitleTemp->setScaledContents( FALSE );
    layout5->addWidget( txtSldrTitleTemp );

    sldrTemp = new QSlider( privateLayoutWidget, "sldrTemp" );
    sldrTemp->setMaxValue( 4 );
    sldrTemp->setOrientation( QSlider::Vertical );
    layout5->addWidget( sldrTemp );

    txtTemp = new QLabel( privateLayoutWidget, "txtTemp" );
    QFont txtTemp_font(  txtTemp->font() );
    txtTemp_font.setPointSize( 8 );
    txtTemp->setFont( txtTemp_font ); 
    layout5->addWidget( txtTemp );
    layout6->addLayout( layout5 );

    Grupo1 = new QGroupBox( privateLayoutWidget, "Grupo1" );
    layout6->addWidget( Grupo1 );

    layout4 = new QVBoxLayout( 0, 0, 6, "layout4"); 

    txtSldrTitleVelocidad = new QLabel( privateLayoutWidget, "txtSldrTitleVelocidad" );
    txtSldrTitleVelocidad->setFrameShape( QLabel::Box );
    txtSldrTitleVelocidad->setScaledContents( FALSE );
    layout4->addWidget( txtSldrTitleVelocidad );

    sldrVelocidad = new QSlider( privateLayoutWidget, "sldrVelocidad" );
    sldrVelocidad->setOrientation( QSlider::Vertical );
    layout4->addWidget( sldrVelocidad );

    txtVelocidad = new QLabel( privateLayoutWidget, "txtVelocidad" );
    QFont txtVelocidad_font(  txtVelocidad->font() );
    txtVelocidad_font.setPointSize( 8 );
    txtVelocidad->setFont( txtVelocidad_font ); 
    layout4->addWidget( txtVelocidad );
    layout6->addLayout( layout4 );
    layout8->addLayout( layout6 );

    BotonActivar = new QButtonGroup( privateLayoutWidget, "BotonActivar" );
    BotonActivar->setColumnLayout(0, Qt::Vertical );
    BotonActivar->layout()->setSpacing( 6 );
    BotonActivar->layout()->setMargin( 11 );
    BotonActivarLayout = new QHBoxLayout( BotonActivar->layout() );
    BotonActivarLayout->setAlignment( Qt::AlignTop );

    btnIniciar = new QPushButton( BotonActivar, "btnIniciar" );
    btnIniciar->setToggleButton( TRUE );
    BotonActivarLayout->addWidget( btnIniciar );
    layout8->addWidget( BotonActivar );

    // actions
    fileNewAction = new QAction( this, "fileNewAction" );
    fileNewAction->setIconSet( QIconSet( image0 ) );
    fileOpenAction = new QAction( this, "fileOpenAction" );
    fileOpenAction->setIconSet( QIconSet( image1 ) );
    fileSaveAction = new QAction( this, "fileSaveAction" );
    fileSaveAction->setIconSet( QIconSet( image2 ) );
    fileSaveAsAction = new QAction( this, "fileSaveAsAction" );
    filePrintAction = new QAction( this, "filePrintAction" );
    filePrintAction->setIconSet( QIconSet( image3 ) );
    fileExitAction = new QAction( this, "fileExitAction" );
    editUndoAction = new QAction( this, "editUndoAction" );
    editUndoAction->setIconSet( QIconSet( image4 ) );
    editRedoAction = new QAction( this, "editRedoAction" );
    editRedoAction->setIconSet( QIconSet( image5 ) );
    editCutAction = new QAction( this, "editCutAction" );
    editCutAction->setIconSet( QIconSet( image6 ) );
    editCopyAction = new QAction( this, "editCopyAction" );
    editCopyAction->setIconSet( QIconSet( image7 ) );
    editPasteAction = new QAction( this, "editPasteAction" );
    editPasteAction->setIconSet( QIconSet( image8 ) );
    editFindAction = new QAction( this, "editFindAction" );
    editFindAction->setIconSet( QIconSet( image9 ) );
    helpContentsAction = new QAction( this, "helpContentsAction" );
    helpIndexAction = new QAction( this, "helpIndexAction" );
    helpAboutAction = new QAction( this, "helpAboutAction" );


    // toolbars


    // menubar
    menubar = new QMenuBar( this, "menubar" );


    fileMenu = new QPopupMenu( this );
    fileOpenAction->addTo( fileMenu );
    fileSaveAction->addTo( fileMenu );
    fileMenu->insertSeparator();
    fileMenu->insertSeparator();
    fileExitAction->addTo( fileMenu );
    menubar->insertItem( QString(""), fileMenu, 1 );

    helpMenu = new QPopupMenu( this );
    helpMenu->insertSeparator();
    helpAboutAction->addTo( helpMenu );
    menubar->insertItem( QString(""), helpMenu, 2 );

    languageChange();
    resize( QSize(351, 352).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( fileNewAction, SIGNAL( activated() ), this, SLOT( fileNew() ) );
    connect( fileOpenAction, SIGNAL( activated() ), this, SLOT( fileOpen() ) );
    connect( fileSaveAction, SIGNAL( activated() ), this, SLOT( fileSave() ) );
    connect( fileSaveAsAction, SIGNAL( activated() ), this, SLOT( fileSaveAs() ) );
    connect( filePrintAction, SIGNAL( activated() ), this, SLOT( filePrint() ) );
    connect( fileExitAction, SIGNAL( activated() ), this, SLOT( fileExit() ) );
    connect( editUndoAction, SIGNAL( activated() ), this, SLOT( editUndo() ) );
    connect( editRedoAction, SIGNAL( activated() ), this, SLOT( editRedo() ) );
    connect( editCutAction, SIGNAL( activated() ), this, SLOT( editCut() ) );
    connect( editCopyAction, SIGNAL( activated() ), this, SLOT( editCopy() ) );
    connect( editPasteAction, SIGNAL( activated() ), this, SLOT( editPaste() ) );
    connect( editFindAction, SIGNAL( activated() ), this, SLOT( editFind() ) );
    connect( helpIndexAction, SIGNAL( activated() ), this, SLOT( helpIndex() ) );
    connect( helpContentsAction, SIGNAL( activated() ), this, SLOT( helpContents() ) );
    connect( helpAboutAction, SIGNAL( activated() ), this, SLOT( helpAbout() ) );
    connect( sldrTemp, SIGNAL( valueChanged(int) ), txtTemp, SLOT( setNum(int) ) );
    connect( sldrVelocidad, SIGNAL( valueChanged(int) ), txtVelocidad, SLOT( setNum(int) ) );
    connect( BotonActivar, SIGNAL( toggled(bool) ), this, SLOT( Activar(bool) ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
MainWindow::~MainWindow()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void MainWindow::languageChange()
{
    setCaption( tr( "Paconsumer" ) );
    BotonesLector->setTitle( tr( "Archivo" ) );
    pushButton1->setText( tr( "Lee&r" ) );
    pushButton1->setAccel( QKeySequence( tr( "Alt+R" ) ) );
    pushButton2->setText( tr( "Escri&bir" ) );
    pushButton2->setAccel( QKeySequence( tr( "Alt+B" ) ) );
    txtSldrTitleTemp->setText( tr( "Tem" ) );
    txtTemp->setText( tr( "0" ) );
    Grupo1->setTitle( tr( "Productor/Consumidor" ) );
    txtSldrTitleVelocidad->setText( tr( "Vel" ) );
    txtVelocidad->setText( tr( "0" ) );
    BotonActivar->setTitle( tr( "Acciones" ) );
    btnIniciar->setText( tr( "I&niciar" ) );
    btnIniciar->setAccel( QKeySequence( tr( "Alt+N" ) ) );
    fileNewAction->setText( tr( "New" ) );
    fileNewAction->setMenuText( tr( "&New" ) );
    fileNewAction->setAccel( tr( "Ctrl+N" ) );
    fileOpenAction->setText( tr( "Open" ) );
    fileOpenAction->setMenuText( tr( "&Open..." ) );
    fileOpenAction->setAccel( tr( "Ctrl+O" ) );
    fileSaveAction->setText( tr( "Save" ) );
    fileSaveAction->setMenuText( tr( "&Save" ) );
    fileSaveAction->setAccel( tr( "Ctrl+S" ) );
    fileSaveAsAction->setText( tr( "Save As" ) );
    fileSaveAsAction->setMenuText( tr( "Save &As..." ) );
    fileSaveAsAction->setAccel( QString::null );
    filePrintAction->setText( tr( "Print" ) );
    filePrintAction->setMenuText( tr( "&Print..." ) );
    filePrintAction->setAccel( tr( "Ctrl+P" ) );
    fileExitAction->setText( tr( "Exit" ) );
    fileExitAction->setMenuText( tr( "E&xit" ) );
    fileExitAction->setAccel( QString::null );
    editUndoAction->setText( tr( "Undo" ) );
    editUndoAction->setMenuText( tr( "&Undo" ) );
    editUndoAction->setAccel( tr( "Ctrl+Z" ) );
    editRedoAction->setText( tr( "Redo" ) );
    editRedoAction->setMenuText( tr( "&Redo" ) );
    editRedoAction->setAccel( tr( "Ctrl+Y" ) );
    editCutAction->setText( tr( "Cut" ) );
    editCutAction->setMenuText( tr( "&Cut" ) );
    editCutAction->setAccel( tr( "Ctrl+X" ) );
    editCopyAction->setText( tr( "Copy" ) );
    editCopyAction->setMenuText( tr( "C&opy" ) );
    editCopyAction->setAccel( tr( "Ctrl+C" ) );
    editPasteAction->setText( tr( "Paste" ) );
    editPasteAction->setMenuText( tr( "&Paste" ) );
    editPasteAction->setAccel( tr( "Ctrl+V" ) );
    editFindAction->setText( tr( "Find" ) );
    editFindAction->setMenuText( tr( "&Find..." ) );
    editFindAction->setAccel( tr( "Ctrl+F" ) );
    helpContentsAction->setText( tr( "Contents" ) );
    helpContentsAction->setMenuText( tr( "&Contents..." ) );
    helpContentsAction->setAccel( QString::null );
    helpIndexAction->setText( tr( "Index" ) );
    helpIndexAction->setMenuText( tr( "&Index..." ) );
    helpIndexAction->setAccel( QString::null );
    helpAboutAction->setText( tr( "About" ) );
    helpAboutAction->setMenuText( tr( "&About" ) );
    helpAboutAction->setAccel( QString::null );
    if (menubar->findItem(1))
        menubar->findItem(1)->setText( tr( "&File" ) );
    if (menubar->findItem(2))
        menubar->findItem(2)->setText( tr( "&Help" ) );
}

void MainWindow::fileNew()
{
    qWarning( "MainWindow::fileNew(): Not implemented yet" );
}

void MainWindow::fileOpen()
{
    qWarning( "MainWindow::fileOpen(): Not implemented yet" );
}

void MainWindow::fileSave()
{
    qWarning( "MainWindow::fileSave(): Not implemented yet" );
}

void MainWindow::fileSaveAs()
{
    qWarning( "MainWindow::fileSaveAs(): Not implemented yet" );
}

void MainWindow::filePrint()
{
    qWarning( "MainWindow::filePrint(): Not implemented yet" );
}

void MainWindow::fileExit()
{
    qWarning( "MainWindow::fileExit(): Not implemented yet" );
}

void MainWindow::editUndo()
{
    qWarning( "MainWindow::editUndo(): Not implemented yet" );
}

void MainWindow::editRedo()
{
    qWarning( "MainWindow::editRedo(): Not implemented yet" );
}

void MainWindow::editCut()
{
    qWarning( "MainWindow::editCut(): Not implemented yet" );
}

void MainWindow::editCopy()
{
    qWarning( "MainWindow::editCopy(): Not implemented yet" );
}

void MainWindow::editPaste()
{
    qWarning( "MainWindow::editPaste(): Not implemented yet" );
}

void MainWindow::editFind()
{
    qWarning( "MainWindow::editFind(): Not implemented yet" );
}

void MainWindow::helpIndex()
{
    qWarning( "MainWindow::helpIndex(): Not implemented yet" );
}

void MainWindow::helpContents()
{
    qWarning( "MainWindow::helpContents(): Not implemented yet" );
}

void MainWindow::helpAbout()
{
    qWarning( "MainWindow::helpAbout(): Not implemented yet" );
}

void MainWindow::Activar(bool)
{
    qWarning( "MainWindow::Activar(bool): Not implemented yet" );
}

