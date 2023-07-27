#ifndef LOG_H
#define LOG_H

#include <stdio.h>

#define CRESET   "\033[0m"
#define RED     "\033[31m"
#define BRED   "\033[32m"
#define BYEL  "\033[33m"
#define CYN    "\033[34m"
#define YEL "\033[35m"
#define BCYN    "\033[36m"
#define WHT   "\033[37m"
#define BWHT   "\033[37m"
#define HBLK   "\033[90m"
#define HBLU "\033[90m"
#define BLU    "\033[36m"
#define BMAG    "\033[36m"

#define RAINBOW_COLORS \
    {RED, BRED, BYEL, CYN, YEL, BCYN, BWHT, HBLU, BLU, BMAG}

// style: [INFO] (filename:line) --> message
#define LOG_INFO(fmt, ...) \
    printf(WHT "[INFO] (%s:%d)" HBLK" --> " WHT fmt CRESET "\n", \
           __FILE__, __LINE__, ##__VA_ARGS__)

#define LOG_WARN(fmt, ...) \
    printf(BYEL "[WARN] (%s:%d)" HBLK" --> " WHT fmt CRESET "\n", \
           __FILE__, __LINE__, ##__VA_ARGS__)

#define LOG_ERROR(fmt, ...) \
    printf(RED "[ERROR] (%s:%d)" HBLK" --> " WHT fmt CRESET "\n", \
           __FILE__, __LINE__, ##__VA_ARGS__)

#define LOG_DEBUG(fmt, ...) \
    printf(BCYN "[DEBUG] (%s:%d)" HBLK" --> " WHT fmt CRESET "\n", \
           __FILE__, __LINE__, ##__VA_ARGS__)

// log_rainbow: just print out the message with every character a different color
#define LOG_RAINBOW(fmt, ...) do { \
    const char *colors[] = RAINBOW_COLORS; \
    int n = sizeof(colors) / sizeof(colors[0]); \
    for (int i = 0; fmt[i]; ++i) { \
        printf("%s%c", colors[i % n], fmt[i]); \
    } \
    printf(CRESET "\n"); \
} while (0)

#endif  // LOG_H
