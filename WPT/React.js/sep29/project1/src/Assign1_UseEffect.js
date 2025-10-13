import { useEffect } from "react";
import { useState } from "react";

export default function Demo(){
 
  let [count, setindex] = useState(0) 
  
    function Handler(){
    setindex(count+1)
    }
    
        function reset(){
    setindex(count=0)
    }


     useEffect (()=>{
  console.log("calling useEffect")

  },[count])

    return (
  <>
  <h1>UseEffect Function calling on count variable value change</h1>
   <p>Count is {count}</p>
   <button onClick={Handler} >Add</button>
   <button onClick={reset}>Reset</button>
  </>
    );

    

}

