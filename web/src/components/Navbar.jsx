import { Link } from 'react-router-dom';

export default function Navbar(){
  return (
    <header className="w-full bg-white border-b">
      <div className="max-w-6xl mx-auto px-4 py-3 flex items-center justify-between">
        <Link to="/" className="font-bold text-xl text-slate-900">
          Rooted <span className="text-green-600">Visions</span>
        </Link>
        <nav className="flex items-center gap-6">
          <Link to="/platform" className="hover:text-green-700">Platform</Link>
          <Link to="/pilot" className="hover:text-green-700">R&D / Pilot</Link>
          <Link to="/about" className="hover:text-green-700">About & Contact</Link>
          <Link to="/portal" className="inline-block px-3 py-1.5 rounded-md bg-green-600 text-white">Client Portal</Link>
        </nav>
      </div>
    </header>
  );
}
