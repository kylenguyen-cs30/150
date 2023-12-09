echo DEBUG SESSION

echo COMPILE
g++ solution.cpp -o DEBUG -g -std=c++11

echo START DEBUGGER
lldb DEBUG

echo REMOVE
rm DEBUG

echo TERMINATED
