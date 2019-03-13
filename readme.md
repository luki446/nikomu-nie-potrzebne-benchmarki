# Nikomu nie potrzebne benchmarki
From polish Benchmarks that nobody wants. My experiments with very slow alghorithms on different programming languages
## Some commands
To run for example recursive fibonacci
```
time ./fib-c.exe 40
time java fib 40
time ./fib.exe 40
time python fib.py 40
```
And compile
```
gcc -O3 fib.c -o fib-c.exe
g++ -O3 fib.cpp -o fib-cpp.exe
rustc -O fib.rs
javac fib.java
```
## Results
My results are given in each directory