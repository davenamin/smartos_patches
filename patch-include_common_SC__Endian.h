$NetBSD$

Add NetBSD support.

--- include/common/SC_Endian.h.orig	2013-11-27 12:54:02.000000000 +0000
+++ include/common/SC_Endian.h
@@ -35,7 +35,16 @@
 
 # include <machine/endian.h>
 
-#elif defined(__FreeBSD__)
+#elif defined(__sun)
+# include <sys/isa_defs.h>
+# define BIG_ENDIAN 4321
+# define LITTLE_ENDIAN 1234
+# define BYTE_ORDER LITTLE_ENDIAN
+# include <netinet/in.h>
+# include <alloca.h>
+# include <sys/socket.h>
+# include <strings.h>
+#elif defined(__FreeBSD__) || defined(__NetBSD__)
 
 # include <machine/endian.h>
 # include <netinet/in.h>
