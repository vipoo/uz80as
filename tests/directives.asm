	.ORG 0
VALUE	.EQU	123
VALUE	.EQU	123
VALUE	.SET	124
VALUE	.SET	125

#DEFINE multilinemacro(str)     LD      DE, str
#DEFCONT \                      LD      C, 09H
#DEFCONT \                      CALL    0005H

	.END
