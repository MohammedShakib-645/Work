const express = require("express");
const app = express();
const port = 5000;

app.use(express.urlencoded({ extended: true }));

let students = [
  { id: 1, name: "Ramu", rollNumber: 601 },
  { id: 2, name: "shakib", rollNumber: 602 },
  { id: 3, name: "nawaz", rollNumber: 603 },
];
app.use((req,res,next)=>{
  if(10<40){
    next();
  }
})
app.get("/", (req, res) => {
  res.send(`
     <h2>School of computing</h2>
     <p>List of CSE Students:</p>
     <ul>
       <li><a href="/students">Students</a> - view all students</li>
     </ul>
     
     <h3>Register New Student</h3>
     <form action="/register" method="POST">
      <input type="text" name="name" placeholder="Name" required/>
      <input type="number" name="rollNumber" placeholder="Roll Number" Required />
      <button type="submit">Add Student</button>
    </form>
  `);
});

app.post("/register",(req,res)=>{
  const {name , rollNumber}=req.body;
  const newStudent={
    id:students.length>0 ? students[students.length-1].id+ 1:1,
    name:name,
    rollNumber:Number(rollNumber),
  };
  students.push(newStudent);
  return res.redirect("/students");
});

app.get("/students",(req, res) => {
  const sdata = students
    .map((s) => `<p>${s.id}, ${s.name}, ${s.rollNumber}</p>`)
    .join("_______________________________");

  res.send(`
    <!DOCTYPE html>
    <html>
      <body>
        <h2>Student Data</h2>
        <div>${sdata}</div>
      </body>
    </html>
  `);
});

app.listen(port, () => {
  console.log("Server started successfully on https://localhost:5000");
});