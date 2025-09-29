import logo from './logo.svg';
import React from './react';
import './App.css';


import LifecycleDemo from './27Assign2';

// function App() {
//   return (
//     <div className="App">
//       <header className="App-header">
//         <img src={logo} className="App-logo" alt="logo" />
//         <p>
//           Edit <code>src/App.js</code> and save to reload.
//         </p>
//         <a
//           className="App-link"
//           href="https://reactjs.org"
//           target="_blank"
//           rel="noopener noreferrer"
//         >
//           Learn React
//            <div>
//           <Print />
//         <Calculator num1="10" num2="5" />
//         <Factorial/>
         
//       <h1>React Lifecycle Demo</h1>
//       <LifecycleDemo />
//     </div>
//         </a>
//       </header>
//     </div>
//   );
// }
function App() {
  return (
    <div className="App">
      <header className="App-header">
        <img src={logo} className="App-logo" alt="logo" />
        <p>
          Edit <code>src/App.js</code> and save to reload.
        </p>

        <a
          className="App-link"
          href="https://reactjs.org"
          target="_blank"
          rel="noopener noreferrer"
        >
          Learn React
        </a>

        <div>
          <Print />
          <Calculator num1="10" num2="5" />
          <Factorial />
          <h1>React Lifecycle Demo</h1>
          <LifecycleDemo />
        </div>
      </header>
    </div>
  );
}


export default App;
