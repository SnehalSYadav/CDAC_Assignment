
import React, { useState, useEffect } from "react";

export default function PasswordGenerator({ onPasswordChange }) {
  const [password, setPassword] = useState('');
  const [length, setLength] = useState(12);
  const [includeNumbers, setIncludeNumbers] = useState(false);
  const [includeSymbols, setIncludeSymbols] = useState(false);

  const generatePassword = () => {
    let characters = 'abcdefghijklmopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ';
    if (includeNumbers) characters += '0123456789';
    if (includeSymbols) characters += '~!@#$%^&*()_+-=';

    let newPassword = '';
    for (let i = 0; i < length; i++) {
      newPassword += characters.charAt(Math.floor(Math.random() * characters.length));
    }
    setPassword(newPassword);

    if (onPasswordChange) {
      onPasswordChange(newPassword);
    }
  };

  useEffect(() => {
    generatePassword();
  }, [length, includeNumbers, includeSymbols]);

  const copyToClipboard = () => {
    navigator.clipboard.writeText(password);
    alert('Password copied to clipboard!');
  };

  return (
    <>
      <div>
        <h2>Random Password Generator</h2>
        <label>Password Length: </label>
        <input
          type="number"
          min="1"
          max="100"
          value={length}
          onChange={(e) => setLength(parseInt(e.target.value) || 1)}
        />
      </div>

      <div>
        <label>
          <input
            type="checkbox"
            checked={includeNumbers}
            onChange={() => setIncludeNumbers(!includeNumbers)}
          />
          Include Numbers
        </label>
      </div>

      <div>
        <label>
          <input
            type="checkbox"
            checked={includeSymbols}
            onChange={() => setIncludeSymbols(!includeSymbols)}
          />
          Include Symbols
        </label>
      </div>

      <div>
        <h3>Generated Password:</h3>
        <input type="text" readOnly value={password} />
        <button onClick={copyToClipboard}>Copy to Clipboard</button>
      </div>
    </>
  );
}


