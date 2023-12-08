echo debug session

echo compile and debug solution.cpp
g++ solution.cpp -o DEBUG -g -std=c++11

echo Debug session starts
lldb DEBUG



