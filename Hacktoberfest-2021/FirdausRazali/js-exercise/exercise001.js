/*
Stand in Line

In Computer Science a queue is an abstract Data Structure where items are kept in order.
New items can be added at the back of the queue and old items are taken off from the front of the queue.

Write a function `nextInLine` which takes an array (`arr`) and a number (`item`) as arguments.

Add the number to the end of the array, then remove the first element of the array.

The `nextInLine` function should then return the element that was removed.

Display the initial array, the return element, and the modified array.
*/

/*
pop = remove last element
push = add last element
shift = remove first element
unshift = add first element
*/

let testArr = [1, 2, 3, 4, 5]; // initialize array

function nextInLine(arr, item){
    arr.push(item);// add item to end of array
    return arr.shift();// remove first element from array
}

console.log("Before: " + JSON.stringify(testArr));
console.log("Removed element: " + JSON.stringify(nextInLine(testArr, 6)));
console.log("After: " + JSON.stringify(testArr));

/*
JSON.stringify== is used to convert array or object (in this case, array testArr) to string for display purpose.
This can be useful when want to transmit or store data in a text-based format,
such as when working with APIs or saving data to a file.
*/