mkdir build
pushd build
cmake -Dtemplated=$1 -Dthrift_example_$2=ON  -DTHRIFT_INCLUDE_DIR=~/Documents/fbthrift -DTHRIFT_LIBRARY=~/Documents/thrift_build/thrift/lib/cpp2 ..
make
popd
