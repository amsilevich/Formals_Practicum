mkdir ./coverage/coverage_build
cd ./coverage/coverage_build
cmake ..
make init
make gcov
make lcov
cd ../
rm -R coverage_build