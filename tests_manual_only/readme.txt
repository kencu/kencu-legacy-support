testing static_assert requires a compiler that support c11, which the standard compilers do not.
so this stays here as a manual test.
on older systems (pre 10.11) you can check it like this:

clang-mp-13 -o assert_test -isystem /opt/local/include/LegacySupport assert_test.c
./assert_test

