//---------------------------------------------------------------------//
// Bounds-safe interfaces for functions in unistd.h that               //
// take pointer arguments.                                             //
//                                                                     //
// These are POSIX-only                                                //
/////////////////////////////////////////////////////////////////////////

#include <unistd.h>

#pragma CHECKED_SCOPE ON

#if _POSIX_VERSION >= 200112L

extern char ** environ : itype(_Nt_array_ptr<_Nt_array_ptr<char>>);

#endif

#pragma CHECKED_SCOPE OFF
