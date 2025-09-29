
const express = require('express');
const path = require('path');
const app = express();
const port = 8000;

app.set('view engine', 'hbs');
app.set('views', path.join(__dirname, 'view'));


app.use(express.urlencoded({ extended: true }));

app.get('/', (req, res) => {
  res.render('calc');
});

// Route to handle form submission
app.post('/calculate', (req, res) => {
  const num1 = Number(req.body.num1);
  const num2 = Number(req.body.num2);
  const result = num1 + num2;
  res.render('calc', { result });
});

app.listen(port, () => {
  console.log(`Server running at http://localhost:${port}`);
});
