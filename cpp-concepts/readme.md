## Important Concepts
- likely, unlikely <br>
  In this we let compiler know which lines of code is more lifely to happen -- accordingly we can use that piece of code and add it in fastpath wherease unlikely is piece of code that may or may not happen.
  <br> Example, vector index we called is out of bounds is rare case but fetching data from the vector is common factor.
