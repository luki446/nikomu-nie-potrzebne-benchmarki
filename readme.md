# Nikomu nie potrzebne benchmarki
From polish Benchmarks that nobody wants. My experiments with very slow alghorithms on different programming languages
## Some commands
To run
```
time ./a.exe 40
time java fib 40
time ./fib.exe 40
time python fib.py 40
```
And compile
```
gcc -O3 fib.c
rustc -O fib.rs
javac fib.java
```
## Example results
Example results for computing 40th number of fibonacci sequence  

Rust:  
0m0.262s  

C:  
0m0.245s  

Java:  
0m0.421s  

Python:  
0m34.009s  