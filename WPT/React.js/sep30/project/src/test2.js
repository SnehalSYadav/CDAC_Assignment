import axios from 'axios'
import { useState } from 'react';

// npm install axios    array   logic 
//  node js    RestAPI    url 
// data  display 
// map()/// iterate data 100  predefined 

// lifecycle useEffect []

export default function DemoAjax() {
    let [jsonData, setData] = useState([]);
    let p = axios.get("https://jsonplaceholder.typicode.com//posts");

    p.then((response) => {
        //console.log(response.data);
        setData(response.data);
    })


}


//===========
// import axios from 'axios';
// import { useState } from 'react';

// export default function Data() {
//   const [data, setData] = useState([]);

//   function Handler() {
//     axios.get("https://jsonplaceholder.typicode.com/posts")
//       .then((response) => {
//         setData(response.data);
//       })
//       .catch((error) => {
//         console.error("Error fetching data:", error);
//       });
//   }

//   return (
//     <>
//       <button onClick={Handler}>Show Data</button>
//       <div>
//         {data.length > 0 ? (
//           data.slice(0, 5).map((item) => (
//             <p key={item.id}>{item.title}</p>
//           ))
//         ) : (
//           <p>No data loaded yet.</p>
//         )}
//       </div>
//     </>
//   );
// }
//===============



// import React, { useEffect, useState } from "react";
// import axios from "axios";

// const GetData = () => {
//     const [data, setData] = useState([]);

//     const [error, setError] = useState(null);

//     useEffect(() => {
//         // Make GET request to fetch data
//         axios
//             .get("https://jsonplaceholder.typiode.com/posts")
//             .then((response) => {
//                 setData(response.data);
//             })
//             .catch((err) => {
//                 setError(err.message);

//             });
//     }, []);


//     if (error) return <div>Error: {error}</div>;

//     return (
//         <div>
//             <h1>Posts</h1>
//             <ul>
//                 {data.map((post) => (
//                     <li key={post.id}>{post.title}</li>
//                 ))}
//             </ul>
//         </div>
//     );
// };

// export default GetData;