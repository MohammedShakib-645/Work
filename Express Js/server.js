const express=require('express')
const mongoose=require('mongoose')
const dotEnv=require('dotenv')
const bodyParser=require('body-parser')
const app=express();
dotEnv.config()
const PORT=process.env.PORT
app.use(bodyParser.json())
const employeeRoutes=require('./routes/employeeRoutes')
app.use('/employee',employeeRoutes)

mongoose.connect(process.env.MONGO_URL)
    .then(()=>{
        console.log("MongoDB connected successfully")
    })
    .catch((error)=>{
        console.log("Error:",error)
    })
app.listen(PORT,()=>{
    console.log(`Server started successfully on Port ${PORT}`)
})
