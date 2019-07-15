# Mandelbrot

### Introduction

A point ![equation](http://latex.codecogs.com/gif.latex?c) in the complex plane is said to belong to the Mandelbrot set if the sequence 

![equation](http://latex.codecogs.com/gif.latex?z_{n+1}%3Dz_n^2+c) 

does not diverge when iterated from starting point ![equation](http://latex.codecogs.com/gif.latex?z_0%3D[0,0]) .

Thus we iterate ![equation](http://latex.codecogs.com/gif.latex?z_n) a fixed number of times and register at what iteration the value of ![equation](http://latex.codecogs.com/gif.latex?z_n) exceeded a specific threshold, if that does happen at all. 

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
