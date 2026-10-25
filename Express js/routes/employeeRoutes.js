const express = require('express');
const {
    createEmployee,
    getEmployees,
    updateEmployee,
    deleteEmployee,
    calculateSalary,
} = require('../controller/employeeController');

const router = express.Router();

router.post('/add-emp', createEmployee);
router.get('/allemployees', getEmployees);
router.put('/update/:id', updateEmployee);
router.delete('/delete/:id', deleteEmployee);
router.get('/salary/:id', calculateSalary);

module.exports = router;
