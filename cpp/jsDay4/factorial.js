function getFactorialImpl(choice = "FORLOOP") {

    function Fact1(n) {
        let result = 1;
        for (let i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
    }

    function Fact2(n) {
        function recursiveFact(x) {
            if (x === 0 || x === 1) return 1;
            return x * recursiveFact(x - 1);
        }
        let result = recursiveFact(n);
        console.log(result);
        return result;
    }

    if (choice === "RECUR") {
        return Fact2;
    } else {
        return Fact1;
    }
}

let rv = getFactorialImpl("RECUR");
rv(3);                      

rv = getFactorialImpl(); 
console.log(rv(5));      
