@echo off
cls
echo.
echo Catch version and date of Compiler and utilities in: VERSION.TXT...
echo --------------------------------->Version.txt
echo COSMIC STM8 C++ Compiler>>Version.txt
echo Version: 4.4.8 Date: 20 Jun 2018>>Version.txt
echo --------------------------------->>Version.txt
.\cbe -vers 2>>Version.txt
.\cxppstm8 -vers 2>>Version.txt
.\cxstm8 -vers 2>>Version.txt
.\cpstm8 -vers 2>>Version.txt
.\cgstm8 -vers 2>>Version.txt
.\costm8 -vers 2>>Version.txt
.\castm8 -vers 2>>Version.txt
.\clnk -vers 2>>Version.txt
.\chex -vers 2>>Version.txt
.\clabs -vers 2>>Version.txt
.\clib -vers 2>>Version.txt
.\clst -vers 2>>Version.txt
.\cobj -vers 2>>Version.txt
.\cprd -vers 2>>Version.txt
.\cvdwarf -vers 2>>Version.txt
echo Done !
echo.
type Version.txt
echo on
