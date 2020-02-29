asm="$srcdir"/$nom.asm
bok="$srcdir"/$nom.bok
lok="$srcdir"/$nom.lok
obj="$builddir"/$nom.obj
lst="$builddir"/$nom.lst
ltp="$builddir"/$nom.ltp

rm -f $obj

$uz80as $asm

tr -d '\r' <$lst >$ltp
mv -f $ltp $lst
rm -f $ltp

set -e
cmp $obj $bok || (echo "\nObject files are different"; exit 1)
diff -w $lst $lok
rm -f $obj $lst
