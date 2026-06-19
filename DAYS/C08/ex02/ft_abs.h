#ifndef FT_ABS_H
#define FT_ABS_H

#include <unistd.h>

#define ABS(value) ((value) < 0 ? -(value) : (value))

#endif