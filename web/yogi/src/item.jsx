import logo from './logo.svg';
import './App.css';
import Table from './table';
import { useState } from 'react';
export default function Item(){
    
  let [k, update] = useState([0,1])
  function flip(){
    update([1,0])
  }
    return(
<div className="App">
        <img src={logo} className="App-logo" alt="logo" />
        <div className='flex'>
        <Table key={k[0]}/>
        <Table key={k[1]}/>
        </div>
        <button onClick={flip}>flip it</button>
        <p>
          Edit <code>src/App.js</code> and save to reload.
        </p>
        <a
          className="App-link"
          href="https://reactjs.org"
          target="_blank"
          rel="noopener noreferrer"
        >
          Learn React
        </a>
    </div>
    )}