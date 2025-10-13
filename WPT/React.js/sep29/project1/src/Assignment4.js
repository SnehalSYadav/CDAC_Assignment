import React, { useState } from 'react';

function OrderedListInput() {
  const [inputText, setInputText] = useState('');
  const [listItems, setListItems] = useState([]);

  const handleBlur = () => {
    const items = inputText
      .split(',')
      .map(item => item.trim())
      .filter(item => item !== '');
    setListItems(items);
  };

  return (
    <div>
      <h2>Enter comma-separated items:</h2>
      <input
        type="text"
        value={inputText}
        onChange={e => setInputText(e.target.value)}
        onBlur={handleBlur}
        placeholder="e.g. Apple, Banana, Cherry"
      />

      {listItems.length > 0 && (
        <div>
          <h3>Your Ordered List:</h3>
          <ol>
            {listItems.map((item, index) => (
              <li key={index}>{item}</li>
            ))}
          </ol>
        </div>
      )}
    </div>
  );
}

export default OrderedListInput;
