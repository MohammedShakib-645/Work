const mongoose=require('mongoose')
const employeeSchema=new mongoose.Schema({
    employeeId:{
        type:Number,
        required:true,
        unique:true
    },
    name:{
        type:String,
        required:true
    },
    email:{
        type:String,
        required:true
    },
    phone:{
        type:Number,
        default:false,
        unique:true
    },
    city:{
        type:String,
        required:true
    },
    salary:{
        type: Number,
        default:0
    },
    bonus:{
        type: Number,
        default:0
    },
    deductions:{
        type: Number,
        default:0
    }
});

module.exports=mongoose.model('Employee',employeeSchema)
