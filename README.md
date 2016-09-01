Intro
=====

This is the `README` file for `uz80as`, the *Micro Z80 Assembler*.

`uz80as` is a macro assembler for the Zilog Z80 microprocessor instruction set.

uz80as is free software. See the file `COPYING` for copying conditions.

Copyright (c) 2016 Jorge Giner Cordero

Home page: http://jorgicor.sdfeu.org/uz80as  
Send bug reports to: jorge.giner@hotmail.com

Windows precompiled binaries
============================

A precompiled distribution for *Microsoft Windows* is provided in a ZIP file.
It can be found at http://jorgicor.sdfeu.org/uz80as . After decompressing it,
you will have these files:

~~~
uz80as.exe      The program.
uz80as.html     The manual.
readme.txt      This file.
copying.txt     License.
changelog.txt   What's new in this version.
~~~

Compiling
=========

Getting the code from revision control
--------------------------------------

If you cloned the project from a revision control system (i.e. GitHub), you
will need first to use the GNU autotools to generate some files, in particular,
the `configure` script. Use:

    $ ./bootstrap

to generate the required files. You will need *GNU autoconf*, *GNU automake*,
*GNU texinfo* and *help2man*.

Compiling from the source distribution
--------------------------------------

If you have the official source package, and you are building on a Unix
environment (this includes *Cygwin* on *Windows*), you can find detailed
instructions in the file `INSTALL`. The complete source distribution can always
be found at http://jorgicor.sdfeu.org/uz80as .  

After installing, you can type `man uz80as` to see a brief explanation on how
to use the `uz80as` program. More detailed documentation can be found using the
GNU documentation system: type `info uz80as` to read it.

Normally, after installing from source, you can find this on your system:

~~~
/usr/local/bin/uz80as                    The program executable.
/usr/local/share/man/man1/uz80as.1       The manual page.
/usr/local/share/info/uz80as.info        The info manual.
/usr/local/share/doc/uz80as/COPYING      License.
/usr/local/share/doc/uz80as/README.md    This file.
/usr/local/share/doc/uz80as/CHANGELOG.md What's new in this version.
~~~

If you are installing uz80as using your OS distribution package system, these
folders will probably be different. Try changing `/usr/local` to `/usr`.

