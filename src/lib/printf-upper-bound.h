#ifndef __PRINTF_UPPER_BOUND_H
#define __PRINTF_UPPER_BOUND_H

/* Returns the maximum length of given format string when expanded.
   If the format is invalid, i_fatal() is called.

   If format contains %m, it's replaced with the real error message. */
size_t printf_string_upper_bound(const char **format, va_list args);

#endif
