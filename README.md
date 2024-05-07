Introduction to Algorithms

Trying these algorithms using C++ and TDD(gtest) if possible.



Installed CMake:
C:\Program Files (x86)\CMake\

Downloaded uncrustify from 
https://sourceforge.net/projects/uncrustify/?source=typ_redirect

Put it to the following location,
C:\Tools\uncrustify\

cfg file for cpp -> C:\Users\milkyway\uncrustify.cfg
Added uncrustify.cfg to the repository.



Instruction on mac,
after clone, create build directory at the root of source directory and run "cmake ../" followed by make to generate _SampleAppTest in build directory.


Instructions on Linux,
======================
* Clone the repo
* Install gtest using this script - linuxcommands/scripts/installgtest.sh
* Create build director at the root of the source directory and run "cmake ../" inside of build directory.
* Run "make"

This should generate _SampleAppTest



Instructions on generating _BenckmarkSampleAppTest
==================================================
make _BenckmarkSampleAppTest
Currently generating "fatal error: benchmark/benchmark.h: No such file or directory"
