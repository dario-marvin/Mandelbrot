# Mandelbrot

### Introduction

A point c in the complex plane is said to belong to the Mandelbrot set if the sequence z[n+1] = z[n]^2 + c does not diverge when iterated from starting point z[0] = (0,0).

Thus we iterate z[n] a fixed number of times and register at what iteration the value of z[n] exceeded a specific threshold, if that does happen at all. 

Every character space of the Ubuntu console is treated as a point in the complex space and colored according to the loop exiting value.

### Results

<p align="center">
  <img width="1024" height="576" src="https://github.com/dario-marvin/Mandelbrot/blob/master/Mandelbrot1.png">
</p>
<p align="center">
  <img width="1024" height="576" src="https://github.com/dario-marvin/Mandelbrot/blob/master/Mandelbrot2.png">
</p>
<p align="center">
  <img width="1024" height="576" src="https://github.com/dario-marvin/Mandelbrot/blob/master/Mandelbrot3.png">
</p>

### How to compile and execute the code
Save the source code file [`Mandelbrot.cc`](https://github.com/dario-marvin/Mandelbrot/blob/master/Mandelbrot.cc) in a folder on your computer. Open a terminal and navigate to you folder with the command `cd`, then run the commands
```
g++ Mandelbrot.cc -std=c++0x -o Mandelbrot
```
and
```
./Mandelbrot
```
