// SPDX-License-Identifier: GPL-3.0

pragma solidity >=0.8.2 <0.9.0;


struct student{
    uint rollno;
    string name;


}


contract array{
    // bytes3  public b3;//3 bytes array

    // bytes2 public b2;//it stored in bytes
    //  function setter() public{
    //     b3='abc';
    //     b2='ab';
    //     // b3[0]='d';this cannot be done
    //     // they are immutable
    //  }this is lec 1
    // bytes public b1="abc";
    // function pushe() public{
    //     b1.push('d');
    // }
    //   function getele(uint i) public view returns(bytes1){
    //    return b1[i];

    
    // }
    // function length() public view returns(uint){
    //     return b1.length;
    // }lec 2
// uint[3] public arr;
// uint public count;
// // function loop() public{
// // // while(count<arr.length){
// // //     arr[count]=count;
// // //     count++;
// // // }
// // // for(uint i=count;i<arr.length;i++){
// // //     arr[count]=count;
// // //     count++;
// // // }

// // }lec 3
// function check(int a ) public pure returns(string memory){
//     string memory value;
//     if(a>0){
//         value="greater than 0";
//     }
//     else{
//         value="less than the thing";
//     }
//     return value;
// }lec 4
//   bool public value=true;
//   function check(uint a) public returns(bool){
//     if(a>0){
        
//         value= true;
//         return value;
//     }
//     else{
//        value=false;
//        return value;
//     }
//   } lec 5

// student public s1;
// constructor(uint _roll,string memory _name){
//     s1.rollno=_roll; 
//     s1.name=_name;

// }
// function change(uint _roll,string memory _name)public{
//     student memory new_student=student({
//         rollno:_roll,
//         name:_name;
//     });
//     s1=new_student;
// }
}