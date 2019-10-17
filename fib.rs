use std::time::{Instant};

fn main() {
  let start = Instant::now();
  println!("{}",fib(42));
  let duration = start.elapsed();
  println!("Time elapsed is: {:?}", duration);
}

fn fib(n: i32) -> i32 {
    if n == 0 { return 0; }
    if n == 1 { return 1; }

    fib(n - 1) + fib(n - 2)
}
