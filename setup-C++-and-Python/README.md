# setup-C++-and-Python

This shows you how to call python scripts using C++.

I had to dig around in mutiple places for it, so I decided to keep it here.

## How to compile

This is how I've been doing it.
`g++ -I /usr/include/Python3.9 -l python3.9 main.cpp`

To find what to put behind `-I`, you'll want to cast `find / -iname python.h`.
Replace what is behind `-l` with your version of python that you will be using.

## Run it
`./a.out`
