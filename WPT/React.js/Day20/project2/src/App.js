
import React from "react";
import {Routes, Link, NavLink, Route, BrowserRouter} from 'react-router-dom'
import Home from './Home';
import AboutUs from './AboutUs'
import Contact from './Contact'

function App() {
  return (
    <BrowserRouter>
    <ul style={{backgroundColor: "skyblue" }}>
      <nav style={{display : "flex", justifyContent: "space-evenly"}}>
           <li>
        <Link to ="/Home" >HomePage</Link>
      </li>
            <li>
        <Link to ="/AboutUs" >AboutUs</Link>
      </li>
            <li>
        <Link to ="/Contact" >ContactUs</Link>
      </li>
      </nav>
         
    </ul>

    <Routes>
      <Route path="/Home" element={<Home />} />
      <Route path="/AboutUs" element={<AboutUs />} />
      <Route path="/Contact" element={<Contact />} /> 
    </Routes>
    </BrowserRouter>
  
  );
}

export default App;
