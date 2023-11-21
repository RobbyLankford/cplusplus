/* Create macros with #define */

#define forever for (;;)    /* infinite loop */

#define max(A, B) ((A) > (B) ? (A) : (B))   /* max(p+q, r+s) = ((p+q) > (r+s) ? (p+q) : (r+s)) */

#define dprint(expr) printf(#expr " = %g\n", expr)  /* dprint(x/y) = printf("x/y = %g\n", x/y) */