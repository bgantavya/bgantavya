import { useState } from "react";

export default function Table(){
    // let num = 2;
    let i = 2;
    let [num,updatenum] = useState(2)
    function update(){
        updatenum(num+10)
    }
    return(
    <div>
        <div>{`${num} x ${i} = ${num*i}`}</div>
        <div>{`${num} x ${i} = ${num*i}`}</div>
        <div>{`${num} x ${i} = ${num*i}`}</div>
        <button onClick={update}>change</button>
    </div>
    
    )
}