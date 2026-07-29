let classroom={
    className:"section A",
    totalStudents:2,
    studentsList:
    [
        {name:"moin-ramu",rollNumber:101},
        {name:"ravi",rollNumber:102}
    ]
};
console.log(classroom.className);
console.log(classroom.studentsList[0].name);
let classroomString=JSON.stringify(classroom);
console.log(classroomString);