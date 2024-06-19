//
// Created by Joe Gasewicz on 15/06/2024.
//

#ifndef CONFIG_H
#define CONFIG_H
#include <stdarg.h>
#include <stdio.h>

/* Logging types */
#define FMQ_LOG_LEVEL_NONE 0
#define FMQ_LOG_LEVEL_DEBUG 1

#define FMQ_LOGGER(level, ...) \
{ \
  if (level > 0) \
  { \
    printf(__VA_ARGS__);  \
  } \
}\

/* Macros */
#define FMQ_ARRAY_LENGTH(arr) sizeof(arr) / sizeof(arr[0])

/* TCP configs */
#define FMQ_TCP_PORT 8005



#endif //CONFIG_H
