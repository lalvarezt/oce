#!/bin/sh
set -e
cd `dirname "$0"`/..
#if [ "$ARCH" = Win32 ]; then
  #PATH=$PATH:/c/MinGW/bin
if [ "$ARCH" = Win32 ]; then
  f=i686-6.1.0-release-posix-dwarf-rt_v5-rev0.7z
  if ! [ -e $f ]; then
    echo "Downloading $f"
    curl -LsSO http://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/6.1.0/threads-posix/dwarf/$f
  fi
  7z x $f > /dev/null
  echo "Extracting $f"
  mv mingw32 /MinGW
else
  f=x86_64-5.4.0-release-posix-seh-rt_v5-rev0.7z
  if ! [ -e $f ]; then
    echo "Downloading $f"
    curl -LsSO http://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/5.4.0/threads-posix/seh/$f
  fi
  echo "Extracting $f"
  7z x $f > /dev/null
  mv mingw64 /MinGW
fi
g++ -v
# make oce
cd /c/projects/oce
mkdir cmake-build
cd cmake-build
cmake -DOCE_VISUALISATION:BOOL=ON \
      -DOCE_DATAEXCHANGE:BOOL=OFF -DOCE_OCAF:BOOL=OFF \
      -DOCE_WITH_GL2PS:BOOL=ON \
      -DOCE_WITH_FREEIMAGE:BOOL=OFF \
      -DOCE_TESTING:BOOL=ON \
      -DOCE_COPY_HEADERS_BUILD:BOOL=ON \
      -DOCE_INSTALL_PREFIX=C:\\oce-$oce_version \
      -G'MSYS Makefiles' ..
mingw32-make -j4
mingw32-make install > /dev/null
#
# Finally run tests
#
export PATH=$PATH:/c/MinGW/bin:/c/oce-0.17.1-dev/oce-$oce_version/bin:/c/MinGW/bin:
mingw32-make test
