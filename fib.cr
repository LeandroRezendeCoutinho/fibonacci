def fib(n)
  if n <= 1
    1
  else
    fib(n - 1) + fib(n - 2)
  end
end

time = Time.local
puts fib(42)
puts Time.local - time
