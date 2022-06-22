// { Driver Code Starts
//Initial Template for javascript

"use strict";

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;



process.stdin.on("data", (inputStdin) => {
  inputString += inputStdin;
});

process.stdin.on("end", (_) => {
  inputString = inputString
    .trim()
    .split("\n")
    .map((string) => {
      return string.trim();
    });

  main();
});

function readLine() {
  return inputString[currentLine++];
}

class Node {
  constructor(x){
    this.data = x;
    this.next = null;
  }
}


function main() {
  let t = parseInt(readLine());
  let i = 0;
 
  for (; i < t; i++) {
    let n = parseInt(readLine());
    let arr = readLine().trim().split(" ").map((x) => parseInt(x));

    let head = new Node(arr[0]);
    let tail = head;
    for(let j = 1;j<n;j++){
      tail.next = new Node(arr[j]);
      tail = tail.next;
    }
    let obj = new Solution();
    obj.display(head);
 
  }

}// } Driver Code Ends


//User function Template for javascript

/*LINKED LIST NODE
class Node {
  constructor(x){
    this.data = x;
    this.next = null;
  }
}
*/


/**
 * @param {Node} head
*/

class Solution {
  display(head){
    //code here
    let curr=head;
    let str="";
    
    while(curr!=null){
        str+=curr.data+" ";
        curr=curr.next;
    }
    console.log(str);
  }
}