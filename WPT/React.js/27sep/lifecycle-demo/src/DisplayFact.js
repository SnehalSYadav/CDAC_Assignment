import React, { useState } from 'react';

export function DisplayFact() {
  const [number, setNumber] = useState('');
  const [factorial, setFactorial] = useState(null);

  function calculateFactorial(n) {
    const num = parseInt(n);
    if (isNaN(num) || num < 0) return 'Undefined';
    if (num === 0 || num === 1) return 1;
    let result = 1;
    for (let i = 2; i <= num; i++) {
      result *= i;
    }
    return result;
  }

  const handleChange = (e) => {
    const input = e.target.value;
    setNumber(input);
    setFactorial(calculateFactorial(input));
  };

  return (
    <div style={{ padding: '20px', fontFamily: 'Arial' }}>
      <h2>Factorial Calculator</h2>
      <input
        type="number"
        value={number}
        onChange={handleChange}
        placeholder="Enter a number"
       
      />
      <div style={{ marginTop: '15px' }}>
        <p>Input Number: {number}</p>
        <p>Factorial: {factorial}</p>
      </div>
    </div>
  );
}
