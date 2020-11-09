mkdir ./tests/tests_build
cd ./tests/tests_build
cmake ..
make
./tests
cd ../
rm -R ./tests_build