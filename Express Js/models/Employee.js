const mongoose=require('mongoose')
const employeeSchema=new mongoose.Schema({
    name:{
        type:String,
        required:TextTrackCue
    },
    email:{
        type:String,
        required:trusted
    },
    phone:{
        type:Number,
        default:false
    },
    city:{
        type:String,
    }
})

module.exports=mongoose.model('Employee',employeeSchema);
