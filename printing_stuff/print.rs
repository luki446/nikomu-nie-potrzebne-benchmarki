use std::env;
use std::str::FromStr;

fn main()
{
    let args: Vec<String> = env::args().collect();
    let num: u32 = u32::from_str(&args[1]).unwrap();
    for i in 0..num
    {
        print!("Hello World {} \n", i)
    }
}