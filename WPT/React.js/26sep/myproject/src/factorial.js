export default function Factorial(props) {
  const n = parseInt(props.num, 10);

  if (isNaN(n) || n < 0) {
    return <h2>Invalid input</h2>;
  }

  let fac = 1;
  for (let i = 1; i <= n; i++) {
    fac *= i;
  }

  return <h2>Factorial of {n} is {fac}</h2>;
}
