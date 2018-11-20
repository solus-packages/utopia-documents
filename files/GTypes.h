/*****************************************************************************
 *
 *   This header file contains definition for GBool, gTrue and gFalse,
 *   which are suppressed in poppler 0.71.0 or newer
 *
 *****************************************************************************/
#ifndef POPPLER_GTYPES_COMPAT_H
#define POPPLER_GTYPES_COMPAT_H

#ifndef GBool
typedef bool GBool;
#endif

#ifndef gTrue
#define gTrue true
#endif

#ifndef gFalse
#define gFalse false
#endif

#endif
