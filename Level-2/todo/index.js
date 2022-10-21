const express = require("express");
const app = express();

app.use(express.json());

const notes = [
  {
    text: "This is a test note",
    id: 1,
  },
];

app.get("/", (req, res) => {
  res.status(200).json(notes);
});

app.post()

app.put()

app.delete()

app.listen(3000, () => {
  console.log("Listening on port 3000");
});
