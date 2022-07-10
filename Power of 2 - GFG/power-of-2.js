// { Driver Code Starts
//Initial Template for javascript
'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for(;i<t;i++)
    {
        let input_line = readLine().split(' ').map(x=>parseInt(x));
        let n = input_line[0];
        let obj = new Solution();
        if(obj.isPowerofTwo(n)){
            console.log("YES");
        }
        else{
            console.log("NO");
        }
    }
}// } Driver Code Ends


//User function Template for javascript

/**
 * @param {Number} n
 * @returns {boolean}
*/

class Solution {
    // Function to check if given number n is a power of two.
    isPowerofTwo(n)
    {
        // code here
        return n>0 && (n&n-1)===0;
    }
}