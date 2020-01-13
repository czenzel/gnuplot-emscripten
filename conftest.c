/* confdefs.h */
#define PACKAGE_NAME "gnuplot"
#define PACKAGE_TARNAME "gnuplot"
#define PACKAGE_VERSION "5.2.8"
#define PACKAGE_STRING "gnuplot 5.2.8"
#define PACKAGE_BUGREPORT ""
#define PACKAGE_URL ""
#define PACKAGE "gnuplot"
#define VERSION "5.2.8"
#define VERSION_MAJOR "5.2"
#define PATCHLEVEL "8"
#define PROTOTYPES 1
#define STDC_HEADERS 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STRINGS_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_UNISTD_H 1
/* end confdefs.h.  */

#         define __EXTENSIONS__ 1
          #include <stdio.h>
#ifdef HAVE_SYS_TYPES_H
# include <sys/types.h>
#endif
#ifdef HAVE_SYS_STAT_H
# include <sys/stat.h>
#endif
#ifdef STDC_HEADERS
# include <stdlib.h>
# include <stddef.h>
#else
# ifdef HAVE_STDLIB_H
#  include <stdlib.h>
# endif
#endif
#ifdef HAVE_STRING_H
# if !defined STDC_HEADERS && defined HAVE_MEMORY_H
#  include <memory.h>
# endif
# include <string.h>
#endif
#ifdef HAVE_STRINGS_H
# include <strings.h>
#endif
#ifdef HAVE_INTTYPES_H
# include <inttypes.h>
#endif
#i