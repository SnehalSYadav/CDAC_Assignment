import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';

import Firstcomponent, { Calculator } from './Firstcomponent'
import Factorial from './27Assign2';

import LifecycleDemo from './27Assign2';

import reportWebVitals from './reportWebVitals';

const root = ReactDOM.createRoot(document.getElementById('root'));

root.render(
  <React.StrictMode>
   
    <Firstcomponent />
    <Calculator num1="26" num2 = "13" n3></Calculator>
    <Factorial num = "5"></Factorial>
    <LifecycleDemo />
  </React.StrictMode>
);

reportWebVitals();
