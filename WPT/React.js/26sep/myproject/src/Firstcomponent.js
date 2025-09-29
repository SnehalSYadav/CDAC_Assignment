
function Print() {
  return <>
  {<h1>Data From Print Component</h1>}
 
  </>
}

export default Print;

//calculator
 export function Calculator(props){
  let n1 = parseFloat(props.num1)
  let n2 = parseFloat(props.num2)

  return<>
   <h1>Addition of num1 and num2 is {n1+n2}</h1> 
      <h1>Subtraction of num1 and num2 is {n1-n2}</h1> 
         <h1>Multiplication of num1 and num2 is {n1*n2}</h1> 
            <h1>Division of num1 and num2 is {n1/n2}</h1> 

  </>
}

//Factorial


