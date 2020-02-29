asm="$srcdir"/$nom.asm
bok="$srcdir"/$nom.bok
lok="$srcdir"/$nom.lok
eok="$srcdir"/$nom.eok
obj="$builddir"/$nom.obj
lst="$builddir"/$nom.lst
err="$builddir"/$nom.err
ltp="$builddir"/$nom.ltp
etp="$builddir"/$nom.etp

rm -f $obj

$uz80as $asm 2>$etp

# Remove \r and remove leading path in error strings.

s_esc="$(echo "$srcdir"/ | sed 's/[]\\.$*{}|+?()[^-]/\\&/g')"
tr -d '\r' <$etp | sed 's|^'$s_esc'||' >$err
rm -f $etp

tr -d '\r' <$lst >$ltp
mv -f $ltp $lst
rm -f $ltp

set -e
test ! -f $obj || (echo "\nFile $obj was not removed"; exit 1)
diff -w $err $eok
diff -w $lst $lok
rm -f $err $lst
