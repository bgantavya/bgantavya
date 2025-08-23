import { Link } from "react-router-dom"
export default function Sidebar(){
    return(
        <div className="flex bg-gray-500 flex-col">
        <Link to="/table">Table</Link>
        <Link to="/item">Item</Link>
        </div>
    )
}