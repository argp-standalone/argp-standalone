/* Written by Niels Moeller <nisse@lysator.liu.se>
 *
 * This file is hereby placed in the public domain.
 */

#if defined(__GNUC__) && !defined(_WIN32)
#define ARGP_HIDDEN __attribute__((visibility("hidden")))
#else
#define ARGP_HIDDEN
#endif

ARGP_HIDDEN char*
strchrnul(const char* p, int c)
{
    while (*p && (*p != c))
        p++;

    return (char*) p;
}
