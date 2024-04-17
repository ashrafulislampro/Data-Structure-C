// 1^1 + 2^2 + 3^3 + 4^4+ ...... + n^n

function selfPower(n){

    let sum = 0;

    for(let i = 1; i <= n; i++){
        sum += i ** i;
    }
    return sum; 
    
}
const sum = selfPower(5);
console.log("result", sum);  