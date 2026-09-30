const express=require('express')
const router=express.Router()
const employeeController=require('../controlls/employeeController')
const Employee=require('.../models/Employee')
router.post('/add-emp',employeeController.createEmployee)
router.get('/allemloyees',employeeController.getEmployee)
router.put('/update/:id',employeeController.updateEmployee)
router.delete('/delete/:id',employeeController.deleteEmployee)
module.exports=router
