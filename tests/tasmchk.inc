asm="$srcdir"/$nom.asm
bok="$srcdir"/$nom.bok
lok="$srcdir"/$nom.lok
obj="$builddir"/$nom.obj
lst="$builddir"/$nom.lst
ltp="$builddir"/$nom.ltp

rm -f $obj

echo
echo "(cd \"$(pwd)\" && $uz80as $asm)"
echo

$uz80as $asm
tr -d '\r' <$lst >$ltp
mv -f $ltp $lst
rm -f $ltp

set -e
cmp $obj $bok || (echo "\nObject files are different"; exit 1)
echo diff -w $lst $lok
echo ==================
diff -w $lst $lok
rm -f $obj $lst
