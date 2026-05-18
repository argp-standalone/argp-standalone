/* Written by Niels Moeller <nisse@lysator.liu.se>
 *
 * This file is hereby placed in the public domain.
 */

#include <string.h>

#if defined(__GNUC__) && !defined(_WIN32)
#define ARGP_HIDDEN __attribute__((visibility("hidden")))
#else
#define ARGP_HIDDEN
#endif

ARGP_HIDDEN void*
mempcpy(void* to, const void* from, size_t size)
{
    memcpy(to, from, size);
    return (char*) to + size;
}
