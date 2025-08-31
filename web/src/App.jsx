import Navbar from './components/Navbar.jsx';
import Footer from './components/Footer.jsx';
import { Routes, Route } from 'react-router-dom';
import Home from './pages/Home.jsx';
import Platform from './pages/Platform.jsx';
import Pilot from './pages/Pilot.jsx';
import About from './pages/About.jsx';
import Portal from './pages/Portal.jsx';

export default function App(){
  return (
    <div className="min-h-screen flex flex-col">
      <Navbar />
      <div className="flex-1">
        <Routes>
          <Route path="/" element={<Home />} />
          <Route path="/platform" element={<Platform />} />
          <Route path="/pilot" element={<Pilot />} />
          <Route path="/about" element={<About />} />
          <Route path="/portal" element={<Portal />} />
        </Routes>
      </div>
      <Footer />
    </div>
  );
}
