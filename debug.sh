echo DEBUG SESSION

echo COMPILE 
g++ solution.cpp -o DEBUG -std=c++11 -g

echo START DEBUGGING
lldb DEBUG

echo REMOVE
rm DEBUG

echo scripts terminated