


import React, { useState } from 'react';
import PasswordGenerator from './PasswordGenerator.js'; // Make sure path is correct

function App() {
  const [latestPassword, setLatestPassword] = useState('');

  const handlePasswordChange = (newPassword) => {
    setLatestPassword(newPassword);
    console.log("Password generated:", newPassword);
  };

  return (
    <div style={{ padding: 20 }}>
      <h1>Password Generator Demo</h1>
      <PasswordGenerator onPasswordChange={handlePasswordChange} />
      <p>Latest password from callback: <strong>{latestPassword}</strong></p>
    </div>
  );
}

export default App;
