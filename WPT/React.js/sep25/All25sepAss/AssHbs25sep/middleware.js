const express = require('express');
const app = express();

app.use((req, res, next) => {
  req.customMessage = 'Hello from middleware!';
  next(); 
});

app.get('/', (req, res) => {
  res.send(`Middleware says: ${req.customMessage}`);
});

app.listen(3000, () => {
  console.log('Server running on http://localhost:3000');
});
