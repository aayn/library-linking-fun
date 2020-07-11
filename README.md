# Library Linking Fun

Do the following:

1. `g++ -Iinclude -fpic lib/add.o -c impl/add.cc`
2. `g++ -Iinclude -fpic lib/sub.o -c impl/sub.cc`
3. `g++ -shared -o lib/libmymath.so  lib/add.o lib/sub.o`
4. `g++ -Iinclude -Llib src/main.cpp -o test -lmymath`
5. `./test`