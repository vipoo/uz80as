	.ORG 0
VALUE	.EQU	123
VALUE	.EQU	123
VALUE	.SET	124
VALUE	.SET	125

#DEFINE multilinemacro(str)     LD      DE, str
#DEFCONT \                      LD      C, 09H
#DEFCONT \                      CALL    0005H

 	multilinemacro(mystring)

mystring  .BYTE		"some string"

    .module MenuInfo
MenuInfo
_alpha: .dw 0
    ld a, 3

#DEFINE PIOMIVT(PIOIN,PIOIST,PIOPRT)    \
#DEFCONT \  LD  A,(0000)

PIOIVT0:.MODULE PIOIVT0
PIOMIVT(PIO0IN,PI0_IST,PRTTAB+0)
PIOIVT1:.MODULE PIOIVT1
PIOMIVT(PIO1IN,PI1_IST,PRTTAB+1)
PIOIVT2:.MODULE PIOIVT2
PIOMIVT(PIO2IN,PI2_IST,PRTTAB+2)
PIOIVT3:.MODULE PIOIVT3
PIOMIVT(PIO3IN,PI3_IST,PRTTAB+3)

DelyCnt .DS 1
CurESld .DS 2
CurEDel .DS 1

  .align 4
  .text "foo"
  .align 16
  .text "bar"

	.END
