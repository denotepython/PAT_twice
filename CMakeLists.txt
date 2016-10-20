cmake_minimum_required(VERSION 3.6)
project(PAT_twice)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    "chapter1 simple simulation/A1002 A+B forpolynomials.cpp"
    "chapter1 simple simulation/A1009 product of polynomials.cpp"
    "chapter1 simple simulation/A1042 shuffling machine.cpp"
    "chapter1 simple simulation/B1001 3n+1 guess.cpp"
    "chapter1 simple simulation/B1008 array loop right move.cpp"
    "chapter1 simple simulation/B1010 Polynomial derivation.cpp"
    "chapter1 simple simulation/B1011 A+B and C.cpp"
    "chapter1.2 find element/A1006 sign in and sign out.cpp"
    "chapter1.2 find element/A1011 world cup betting.cpp"
    "chapter1.2 find element/A1036 boys vs girls.cpp"
    "chapter1.2 find element/B1004 score rank.cpp"
    "chapter1.2 find element/B1028 population survey.cpp"
    "chapter1.2 find element/B1032 which dig school is best.cpp"
    "chapter1.2 find element/B1041 test num.cpp"
    "chapter1.3 print shape/A1031 hello world for u.cpp"
    "chapter1.3 print shape/B1027 print sandglass.cpp"
    "chapter1.3 print shape/B1036 learn with obama.cpp"
    "chapter1.5 radix change/A1027 colors in mars.cpp"
    "chapter1.5 radix change/A1058 A + B in hogwarts.cpp"
    "chapter1.5 radix change/B1037 hogwards change.cpp"
    "chapter1.6 deal string/A1035 password.cpp"
    "chapter1.6 deal string/B1006 change posture to print integer.cpp"
    "chapter1.6 deal string/B1031 exam id.cpp"
    "chapter2.1 sort/A1012 the best rank.cpp"
    "chapter2.1 sort/A1025 PAT ranking.cpp"
    "chapter2.1 sort/A1028 list sorting.cpp"
    "chapter2.1 sort/A1055 the world's richest.cpp"
    "chapter2.1 sort/A1083 list grades.cpp"
    "chapter2.1 sort/B1015 moral VS talent.cpp"
    "chapter2.2 hash/B1029 old keyboard.cpp")

add_executable(PAT_twice ${SOURCE_FILES})