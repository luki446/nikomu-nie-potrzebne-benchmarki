
use std::env;
use std::str::FromStr;

fn fib(n: u32) -> u32
{
    if n == 1 || n == 2
    {
        return 1;
    }
    else {
        return fib(n - 1) + fib(n - 2);
    }
}

fn main()
{
    let args: Vec<String> = env::args().collect();
    let num: u32 = u32::from_str(&args[1]).unwrap();
    print!("{}", fib(num));
}