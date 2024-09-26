// import logo from './logo.svg';
import './App.css';
import map from './map.jpg';
import ImageMap from './imageMap';  
function App() {
  return (
    <div className="App">
      <header className="App-header">
        <h1 color='red'>Vrinda-Arshan</h1>
        <h3>
          step1: choose location
        </h3>
        
        <h3>
          step2: Tap onit
        </h3>
        <h3>
          step3: cLet it load. make it full screen 
        </h3>
        <h3>
          step4: Surf with it and explore the place
        </h3>
        {/* <img src={logo} className="App-logo" alt="logo" controls /> */}
        <div class= "image-container">
        <img src={map} alt="hello"  usemap= "#image-map"/>
        <ImageMap/>

        </div>
        
        
      </header>
    </div>
  );
}

export default App;




// // import logo from './logo.svg';
// import './App.css';
// import map from './map.jpg';
// import ImageMap from './imageMap';
// import Zoom from 'react-medium-image-zoom';
// import 'react-medium-image-zoom/dist/styles.css';

// function App() {
//   return (
//     <div className="App">
//       <header className="App-header">
//         <h1 style={{ color: 'red' }}>Vrinda-Arshan</h1>
//         <h3>step1: choose location</h3>
//         <h3>step2: Tap on it</h3>
//         <h3>step3: Let it load. make it full screen</h3>
//         <h3>step4: Surf with it and explore the place</h3>
//         {/* <img src={logo} className="App-logo" alt="logo" controls /> */}
//         <div className="image-container">
//           <Zoom>
//             <img src={map} alt="hello" useMap="#image-map" />
//           </Zoom>
//           <ImageMap />
//         </div>
//       </header>
//     </div>
//   );
// }

// export default App;
