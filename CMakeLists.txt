cmake_minimum_required(VERSION 3.8)
project(PO1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Portfel.h Aktywo.cpp Aktywo.h Aktywa/Lokata.cpp Aktywa/Lokata.h Aktywa/Kontrakt.cpp Aktywa/Kontrakt.h Aktywa/Nieruchomosc.cpp Aktywa/Nieruchomosc.h Aktywa/KontoEmerytalne.cpp Aktywa/KontoEmerytalne.h Aktywa/IKE.cpp Aktywa/IKE.h Aktywa/IKZE.cpp Aktywa/IKZE.h)
add_executable(PO1 ${SOURCE_FILES})