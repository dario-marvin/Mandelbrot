# Mandelbrot

### Introduction

A point ![equation](http://latex.codecogs.com/gif.latex?c) in the complex plane is said to belong to the Mandelbrot set if the sequence ![equation](http://latex.codecogs.com/gif.latex?z_{n+1}%3Dz_n^2+c) does not diverge when iterated from starting point ![equation](http://latex.codecogs.com/gif.latex?z_0%3D[0,0]) .

Thus we iterate ![equation](http://latex.codecogs.com/gif.latex?z_0) a fixed number of times and register at what iteration ![equation](http://latex.codecogs.com/gif.latex?n) we have ![equation](http://latex.codecogs.com/gif.latex?|z_n|%3E2).   
If that does not happen, then the sequence does not diverge and the point ![equation](http://latex.codecogs.com/gif.latex?c) is part of the Mandelbrot set. 

Every character space of the Ubuntu console is treated as a point in the complex space and colored according to the loop exiting value.

### Results

<p align="center">
  <img width="1024" height="576" src="https://github.com/dario-marvin/Mandelbrot/blob/master/Mandelbrot1_.png">
</p>
<p align="center">
  <img width="1024" height="576" src="https://github.com/dario-marvin/Mandelbrot/blob/master/Mandelbrot2_.png">
</p>
<p align="center">
  <img width="1024" height="576" src="https://github.com/dario-marvin/Mandelbrot/blob/master/Mandelbrot3_.png">
</p>

### Animation

<p align="center">
  <img width="1024" height="576" src="https://github.com/dario-marvin/Mandelbrot/blob/master/Mandelbrot.gif">
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
