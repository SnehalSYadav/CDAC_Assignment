import { useContext } from "react";
import userContext from "./useContext";

function Data(){
const data = useContext(userContext)
return(
    <>
    <h1>{data.name}</h1>
    
    </>
)
}
export default Data
