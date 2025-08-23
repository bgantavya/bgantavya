import './App.css';
import Table from './table';
import Item from './item'
import Sidebar from './sidebar';
import { Routes, Route } from 'react-router';
function App() {
  const path = window.location.pathname
  console.log("path", path)
  return (
    <div className='flex flex-row'>
      <Sidebar />
      <Routes>
        <Route path="/table" element={<Table />} />
        <Route path="/item" element={<Item />} />
      </Routes>
    </div>
  );
}

export default App;
