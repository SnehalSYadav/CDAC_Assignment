var arr=[23,76,12,89,34,78];
console.log(arr.sort());
console.log("max array is :")
console.log(arr.pop())


const arr1 = [10, 5, 8, 20, 3];
let max = arr1[0];

for (let i = 1; i < arr1.length; i++) {
  if (arr1[i] > max) {
    max = arr1[i];
  }
}


//

let largest=0;
arr1.forEach(element => {
    if (element > largest) {
        largest = element
    }
});

console.log("Largest element:", largest)
//



const arr2 = [10, 5, 8, 20, 3];
const max1 = arr2.reduce((acc, val) => (val > acc ? val : acc), arr2[0])
console.log(max1); 




