import React, { useState } from 'react';

export function Calculator() {
  const [num1, setNum1] = useState('');
  const [num2, setNum2] = useState('');
  const [results, setResults] = useState(null);

  const handleCalculate = () => {
    const a = parseFloat(num1);
    const b = parseFloat(num2);

    if (isNaN(a) || isNaN(b)) {
      setResults({ error: 'Please enter valid numbers.' });
      return;
    }

    setResults({
      sum: a + b,
      difference: a - b,
      product: a * b,
      quotient: b !== 0 ? (a / b).toFixed(2) : 'Undefined'
    });
  };

  return (
    <div style={{ padding: '20px', fontFamily: 'Arial' }}>
      <h2>Simple Calculator</h2>
      <input
        type="number"
        value={num1}
        onChange={e => setNum1(e.target.value)}
        placeholder="Enter first number"
       
      />
      <input
        type="number"
        value={num2}
        onChange={e => setNum2(e.target.value)}
        placeholder="Enter second number"
        
      />
      <br />
      <button
        onClick={handleCalculate}
        style={{ marginTop: '10px', padding: '8px 16px' }}
      >
        Calculate
      </button>

      {results && (
        <div style={{ marginTop: '20px' }}>
          {results.error ? (
            <p style={{ color: 'red' }}>{results.error}</p>
          ) : (
            <>
              <p>Sum: {results.sum}</p>
              <p>Difference: {results.difference}</p>
              <p>Product: {results.product}</p>
              <p>Quotient: {results.quotient}</p>
            </>
          )}
        </div>
      )}
    </div>
  );
}

