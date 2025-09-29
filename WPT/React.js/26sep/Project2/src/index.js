import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import Component from './classComponent.js'
import TextTransformer from './classComponent.js';

//import firstFunction from './firstFunction.js'
import { Myfunction, Yourfunction } from './firstFunction.js';

import reportWebVitals from './reportWebVitals';

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <React.StrictMode>
    
    <Myfunction />
    <Yourfunction />
    <TextTransformer />

  </React.StrictMode>
);

reportWebVitals();
