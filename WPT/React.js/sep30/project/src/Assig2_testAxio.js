import axios from 'axios'
import { useState, useEffect } from 'react';
export default function Data(){
 let [data, setData] = useState([])
  function Handler(){

   const Alldata= axios.get("https://jsonplaceholder.typicode.com/users")
            .then((response) => {
                setData(response.data);
               
               
            })
            .catch((err)=>{
                console.log(err)
                
            })
            console.log(Alldata)
   
        }
          useEffect(() => {
    console.log(data);
  }, [data]);
  
    return (
    <>
      <button onClick={Handler}>Show Data</button>
      {data.map((item) => (
        <p key={item.id}>{item.name}</p>
      ))}
    
    </>)


}
