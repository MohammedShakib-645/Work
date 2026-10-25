const express=require('express')
const mongoose=require('mongoose')
const dotEnv=require('dotenv')
const bodyparser=require('body-parser')
const app=express()
dotEnv.config()
const PORT=process.env.PORT || 5000
const cors =require ('cors')

app.use(bodyparser.json())
const employeeRoutes=require('./routes/employeeRoutes')
const employee=require('./Model/Employee')

app.get('/',(req,res)=>{
    res.status(200).json(employee)
})

app.use(cors())
app.use('/employee',employeeRoutes)
mongoose.connect(process.env.MONGO_URL)
    .then(()=>{
        console.log("MongoDB Connected Successfully")
    })
    .catch((error)=>{
        console.log("Error:",error)
    })

app.listen(PORT,()=>{
    console.log(`Server started successfully on port${PORT}`)
})
