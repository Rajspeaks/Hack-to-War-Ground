/* - - - - - - - - - - - - - - - CHALLENGE - - - - - - - - - - - - - - - - - - - - -
Given the total number of rows and columns in the theater (nRows and nCols, respectively), 
and the row and column you're sitting in, return the number of people who sit strictly 
behind you and in your column or to the left, assuming all seats are occupied. 
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

function seatsInTheater(nCols, nRows, col, row) {
    return (nCols - col + 1) * (nRows - row);
}

console.log(seatsInTheater(16, 11, 5, 3));
// Output: 96
