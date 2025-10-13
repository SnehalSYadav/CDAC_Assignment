import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import Countermain from './Assignment2_counter';
import Demo2 from './Assignment3_table';
import OrderedListInput from './Assignment4';
import reportWebVitals from './reportWebVitals';
import Demo from './Assign1_UseEffect';

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <React.StrictMode>
 <Countermain /> 
   <Demo />
   <Demo2 />
   <OrderedListInput />
  </React.StrictMode>
);

// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
reportWebVitals();
