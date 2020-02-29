asm="$srcdir"/$nom.asm
eok="$srcdir"/$nom.eok
obj="$builddir"/$nom.obj
lst="$builddir"/$nom.lst
err="$builddir"/$nom.err
etp="$builddir"/$nom.etp

rm -f $obj

$uz80as $asm 2>$etp

# Remove \r from $etp and remove leading path in error strings.

s_esc="$(echo "$srcdir"/ | sed 's/[]\\.$*{}|+?()[^-]/\\&/g')"
tr -d '\r' <$etp | sed 's|^'$s_esc'||' >$err
rm -f $etp

set -e
test ! -f $obj || (echo "\nFile $obj was not removed"; exit 1)
test ! -f $lst || (echo "\nFile $lst was not removed"; exit 1)
diff -w $err $eok
rm -f $err
