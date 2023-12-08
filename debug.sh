echo DEBUG SESSION START

echo compile and debug
g++ solution.cpp -o DEBUG -g -std=c++11

echo START DEBUGGER
lldb DEBUG

echo remove 
rm DEBUG

echo scripts terminated
