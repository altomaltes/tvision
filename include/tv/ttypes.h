/*
 Copyright (c) 2000-2001 by Salvador E. Tropea.
 This file was heavily reestructured.
*/

#if !defined( __TTYPES_H )
#define __TTYPES_H

const char EOS = '\0';

enum StreamableInit { streamableInit };

class ipstream;
class opstream;
class TStreamable;
class TStreamableTypes;

// JACS, allow 64 bit, this is used widely

#if defined(HAVE_64BITS_POINTERS) 
  typedef int64 ccIndex;
#else
  typedef int32 ccIndex;
#endif

typedef Boolean (*ccTestFunc)( void *, void * );
typedef void (*ccAppFunc)( void *, void * );

const int ccNotFound = -1;

#endif	// __TTYPES_H
