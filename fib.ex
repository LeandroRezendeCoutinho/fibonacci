defmodule Fib do 
  def fib(0) do 0 end
  def fib(1) do 1 end
  def fib(n) do fib(n-1) + fib(n-2) end
end

start = Time.utc_now
IO.puts Fib.fib(42)
IO.puts Time.diff(Time.utc_now,  start)
