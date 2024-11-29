#include <stdio.h>

#define M 10

// (a) Succeeds, M is non-zero
#if M
#endif

// (b) Succeeds, M is defined
#ifdef M
#endif

// (c) Fails, M is defined
#ifndef M
#endif

// (d) Succeeds, M is defined
#if defined(M)
#endif

// (e) Fails, M is defined
#if !defined(M)
#endif

int main(void)
{
    return 0;
}