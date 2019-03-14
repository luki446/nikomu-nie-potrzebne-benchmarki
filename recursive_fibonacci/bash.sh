#!/bin/bash

gcc -O3 fib.c -o fib-c.out
javac fib.java
rustc -O fib.rs -o fib-rs.out

rm res.txt

echo "C: " >> res.txt
(time ./fib-c.out 42) 2>> res.txt
echo "Rust: " >> res.txt
(time ./fib-rs.out 42) 2>> res.txt
echo "Java: " >> res.txt
(time java fib 42) 2>> res.txt
echo "Python: " >> res.txt
(time python3 fib.py 42) 2>> res.txt

rm *.class *.out
