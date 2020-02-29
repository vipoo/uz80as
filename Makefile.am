# ===========================================================================
# uz80as, an assembler for the Zilog Z80 and several other microprocessors.
# ===========================================================================

# uz80as.1 man page depends on uz80as executable being built.
# This order of SUBDIRS ensures it.
SUBDIRS = src doc . tests
SRCDIR = src

dist_doc_DATA = AUTHORS README NEWS COPYING
dist_noinst_DATA = README.md
dist_noinst_SCRIPTS = mkwin bootstrap

format:
	clang-format --verbose -i ${SRCDIR}/*.c ${SRCDIR}/*.h
	clang-format --verbose -i ${SRCDIR}/target/*.c
