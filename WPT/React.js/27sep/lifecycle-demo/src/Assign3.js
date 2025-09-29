import React, { useState } from 'react';

function TextTransformer() {
  const [text, setText] = useState('');
  const [caseType, setCaseType] = useState('');
  const [output, setOutput] = useState('');

  const handleTransform = () => {
    let transformed = '';
    switch (caseType) {
      case 'uppercase':
        transformed = text.toUpperCase();
        break;
      case 'lowercase':
        transformed = text.toLowerCase();
        break;
      case 'titlecase':
        transformed = text
          .toLowerCase()
          .split(' ')
          .map(word => word.charAt(0).toUpperCase() + word.slice(1))
          .join(' ');
        break;
      default:
        transformed = text;
    }
    setOutput(transformed);
  };

  return (
    <div style={{ padding: '20px', fontFamily: 'Arial' }}>
      <h2>Text Case Transformer</h2>
      <input
        type="text"
        value={text}
        onChange={e => setText(e.target.value)}
        placeholder="Enter your text here"
        style={{ width: '300px', padding: '8px' }}
      />
      <div style={{ marginTop: '10px' }}>
        <label>
          <input
            type="radio"
            name="case"
            value="uppercase"
            onChange={e => setCaseType(e.target.value)}
          />
          Uppercase
        </label>
        <label style={{ marginLeft: '10px' }}>
          <input
            type="radio"
            name="case"
            value="lowercase"
            onChange={e => setCaseType(e.target.value)}
          />
          Lowercase
        </label>
        <label style={{ marginLeft: '10px' }}>
          <input
            type="radio"
            name="case"
            value="titlecase"
            onChange={e => setCaseType(e.target.value)}
          />
          Title Case
        </label>
      </div>
      <button
        onClick={handleTransform}
        style={{ marginTop: '10px', padding: '8px 16px' }}
      >
        Transform
      </button>
      <div style={{ marginTop: '20px' }}>
        <strong>Output:</strong>
        <p>{output}</p>
      </div>
    </div>
  );
}

export default TextTransformer;
