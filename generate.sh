bazel build -c opt --cxxopt=--std=c++11 --config=android_arm //tensorflow/lite/c:tensorflowlite_c
cp bazel-bin/tensorflow/lite/c/libtensorflowlite_c.so ~/blobs/2.2/new/libtensorflowlite_c_arm.so
bazel build -c opt --cxxopt=--std=c++11 --config=android_arm64 //tensorflow/lite/c:tensorflowlite_c
cp bazel-bin/tensorflow/lite/c/libtensorflowlite_c.so ~/blobs/2.2/new/libtensorflowlite_c_arm64.so
#bazel build -c opt --cxxopt=--std=c++11 --config=android_x86 //tensorflow/lite/c:tensorflowlite_c
#cp bazel-bin/tensorflow/lite/c/libtensorflowlite_c.so ~/blobs/2.2/new/libtensorflowlite_c_x86_delegate.so
#bazel build -c opt --cxxopt=--std=c++11 --config=android_x86_64 //tensorflow/lite/c:tensorflowlite_c
#cp bazel-bin/tensorflow/lite/c/libtensorflowlite_c.so ~/blobs/2.2/new/libtensorflowlite_c_x86_64_delegate.so

