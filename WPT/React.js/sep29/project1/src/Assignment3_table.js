import React, { useState, useEffect } from "react";

export default function Demo2() {
  const [count, setCount] = useState(0);
  const [history, setHistory] = useState([]);

  function handleIncrement() {
    setCount((prevCount) => prevCount + 1);
  }

  function handleReset() {
    setCount(0);
    setHistory([]); // reset history as well
  }

  useEffect(() => {
    console.log("useEffect called with count:", count);

    // Update history only if count > 0 (to avoid initial 0 addition)
    if (count > 0) {
      setHistory((prevHistory) => [...prevHistory, count]);
    }
  }, [count]);

  return (
    <>
      <h1>This is showing the table on the basis of the count value</h1>
      <p>Count is {count}</p>
      <button onClick={handleIncrement}>Add</button>
      <button onClick={handleReset}>Reset</button>

      <h3>Counter History</h3>
      {history.length === 0 ? (
        <p>No increments yet.</p>
      ) : (
        <table border="1" cellPadding="8">
          <thead>
            <tr>
              <th>Increment #</th>
              <th>Counter Value</th>
            </tr>
          </thead>
          <tbody>
            {history.map((val, idx) => (
              <tr key={idx}>
                <td>{idx + 1}</td>
                <td>{val}</td>
              </tr>
            ))}
          </tbody>
        </table>
      )}
    </>
  );
}
