import { useState } from "react"
export default function LogIndemo(){

let[uname, setName]= useState('')
    let[uEmail, setEmail]= useState('')
     let[submitted, setsubmitted]= useState('')

     function display(e){
          e.preventDefault();
    setsubmitted(true);
     }
       
return (
    <>
    

    <form >
    <input  type="text" name="uName" placeholder="User name" onChange={(e) => setName(e.target.value)}/>
    <input  type="email" name="uEmail" placeholder="User email" onChange={(e) => setEmail(e.target.value)}/>
    <input  type="password" name="uPassword" placeholder="user Password" />

    <button type="submit" onClick={display} >Submit</button>

    </form>
    
           {submitted && (
        <p>
          Name: {uname} <br />
          Email: {uEmail}
        </p>
      )}
    
    </>
)
}