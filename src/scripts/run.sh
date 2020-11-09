mkdir ./src/main_src/build
cd ./src/main_src/build
cmake ..
make
./solve
cd ../
rm -R build