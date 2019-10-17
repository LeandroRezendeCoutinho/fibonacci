var initialDate = new Date();

function fibonacci(num) {
  if (num <= 1) return 1;

  return fibonacci(num - 1) + fibonacci(num - 2);
}

fibonacci(42)

var finalDate = new Date();
console.log(`Time elapsed ${Math.floor(finalDate.getTime() - initialDate.getTime())}` )
