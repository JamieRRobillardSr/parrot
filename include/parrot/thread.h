/* thread.h
 *  Copyright: 2001-2003 The Perl Foundation.  All Rights Reserved.
 *  CVS Info
 *     $Id$
 *  Overview:
 *     This is the api header for the thread primitives
 *  Data Structure and Algorithms:
 *  History:
 *  Notes:
 *  References:
 */

#if !defined(PARROT_THREAD_H_GUARD)
#define PARROT_THREAD_H_GUARD

#include "parrot/parrot.h"

#ifndef PARROT_SYNC_PRIMITIVES_DEFINED
#define LOCK(x)
#define UNLOCK(x)
#define COND_WAIT(x, y)
#define COND_SIGNAL(x)
#define COND_BROADCAST(x)

#define Parrot_mutex INTVAL
#define Parrot_cond INTVAL
#endif

#endif

/*
 * Local variables:
 * c-indentation-style: bsd
 * c-basic-offset: 4
 * indent-tabs-mode: nil
 * End:
 *
 * vim: expandtab shiftwidth=4:
*/
