$NetBSD$

Add NetBSD support.

--- server/scsynth/SC_World.cpp.orig	2013-11-27 12:54:02.000000000 +0000
+++ server/scsynth/SC_World.cpp
@@ -261,2 +261,2 @@ 
{
-#if (_POSIX_MEMLOCK - 0) >= 200112L
+#if (_POSIX_MEMLOCK - 0) >= 200112L && defined(RLIMIT_MEMLOCK)
