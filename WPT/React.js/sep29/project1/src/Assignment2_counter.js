import { useState } from "react";
export default function Countermain(){

  const [count, setindex] = useState(0) 

  function Handler(){
  setindex(count+1)
  }
  return (
<>
<h1>Simple counter function</h1>
 <p>Count is {count}</p>
 <button onClick={Handler} >Add</button>
</>
  );


}