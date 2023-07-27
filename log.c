#include <time.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <pthread.h>
#include <assert.h>

#include <ANSI-color-codes.h>
#include <palerain.h>

int p1_log(log_level_t loglevel, const char *fname, int lineno, const char *fxname, const char *__restrict format, ...)
{
    fprintf(stderr, "p1_log: loglevel %d from %s:%d:%s()\n", loglevel, fname, lineno, fxname);
	int ret = 0;
	char type[0x10];
	char colour[0x10];
	char colour_bold[0x10];
	va_list args;
	va_start(args, format);

        return 0;

}
