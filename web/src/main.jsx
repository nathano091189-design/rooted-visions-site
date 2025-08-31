import React from 'react';

export default function App() {
  return (
    <div className="flex flex-col min-h-screen font-inter bg-[#0d1117] text-[#c9d1d9]">

      {/* Header */}
      <header className="bg-[#161b22] text-[#c9d1d9] p-4 sticky top-0 z-50 shadow-lg">
        <div className="container mx-auto flex justify-between items-center">
          <a href="#" className="text-2xl font-bold rounded-lg px-2 py-1 transition-all duration-300 transform hover:scale-105">Rooted Visions</a>
          <nav>
            <ul className="flex space-x-4">
              <li><a href="#about" className="px-3 py-2 rounded-md hover:bg-gray-700 transition-colors duration-300">About</a></li>
              <li><a href="#services" className="px-3 py-2 rounded-md hover:bg-gray-700 transition-colors duration-300">Services</a></li>
              <li><a href="#contact" className="px-3 py-2 rounded-md hover:bg-gray-700 transition-colors duration-300">Contact</a></li>
            </ul>
          </nav>
        </div>
      </header>

      {/* Main Content */}
      <main className="flex-grow">
        {/* Hero Section */}
        <section className="relative h-screen flex items-center justify-center text-center p-4 bg-cover bg-center" style={{ backgroundImage: "url('https://placehold.co/1920x1080/0d1117/2C5364?text=Rooted+Visions')" }}>
          <div className="absolute inset-0 bg-black opacity-70"></div>
          <div className="relative z-10 text-white p-6 rounded-lg max-w-4xl mx-auto">
            <h1 className="text-4xl md:text-7xl font-extrabold leading-tight">Your Vision. Our Foundation.</h1>
            <p className="mt-4 text-lg md:text-2xl font-light max-w-2xl mx-auto">
              Transforming bold ideas into tangible realities with expert strategy, automation, and design.
            </p>
            <button className="mt-8 px-8 py-4 bg-gradient-to-r from-teal-500 to-emerald-600 text-white font-semibold rounded-full shadow-lg hover:from-teal-600 hover:to-emerald-700 transition-all duration-300 transform hover:scale-105">
              Start Your Project
            </button>
          </div>
        </section>

        {/* About Section */}
        <section id="about" className="py-24 bg-[#161b22]">
          <div className="container mx-auto px-4 md:px-8">
            <h2 className="text-3xl md:text-5xl font-bold text-center mb-10 text-white">Rooted in Community. Built for the Future.</h2>
            <div className="flex flex-col md:flex-row items-center md:space-x-12">
              <div className="md:w-1/2 mb-8 md:mb-0">
                <img src="https://placehold.co/800x600/1e2329/c9d1d9?text=Our+Mission" alt="Our Team" className="rounded-xl shadow-2xl w-full transform transition-all duration-500 hover:scale-105" />
              </div>
              <div className="md:w-1/2 text-center md:text-left">
                <p className="text-gray-400 leading-relaxed text-lg">
                  At Rooted Visions, we believe that every great project starts with a strong foundation. We are a team dedicated to providing bespoke solutions that are deeply rooted in your goals and values. From initial concept to final execution, we are here to support and guide you every step of the way. Our mission is to build lasting partnerships and deliver results that not only meet but exceed your expectations.
                </p>
              </div>
            </div>
          </div>
        </section>

        {/* Services Section */}
        <section id="services" className="py-24 bg-[#0d1117]">
          <div className="container mx-auto px-4 md:px-8">
            <h2 className="text-3xl md:text-5xl font-bold text-center mb-16 text-white">What We Do</h2>
            <div className="grid grid-cols-1 md:grid-cols-3 gap-10">
              {/* Service Card 1: Web Design */}
              <div className="bg-[#161b22] p-8 rounded-xl shadow-lg text-center transform transition-all duration-300 hover:scale-105">
                <div className="text-teal-500 mb-4">
                  <svg xmlns="http://www.w3.org/2000/svg" className="h-12 w-12 mx-auto" fill="none" viewBox="0 0 24 24" stroke="currentColor" strokeWidth="2">
                    <path strokeLinecap="round" strokeLinejoin="round" d="M10 20l4-16m4 4l4 4-4 4M6 16l-4-4 4-4" />
                  </svg>
                </div>
                <h3 className="text-2xl font-semibold text-white mb-2">Web Design & Development</h3>
                <p className="text-gray-400">
                  Crafting beautiful, responsive, and high-performance websites tailored to your specific needs.
                </p>
              </div>
              {/* Service Card 2: Digital Strategy */}
              <div className="bg-[#161b22] p-8 rounded-xl shadow-lg text-center transform transition-all duration-300 hover:scale-105">
                <div className="text-emerald-500 mb-4">
                  <svg xmlns="http://www.w3.org/2000/svg" className="h-12 w-12 mx-auto" fill="none" viewBox="0 0 24 24" stroke="currentColor" strokeWidth="2">
                    <path strokeLinecap="round" strokeLinejoin="round" d="M13 10V3L4 14h7v7l9-11h-7z" />
                  </svg>
                </div>
                <h3 className="text-2xl font-semibold text-white mb-2">Strategic Consulting</h3>
                <p className="text-gray-400">
                  Developing a clear roadmap to help you achieve your online goals and streamline operations.
                </p>
              </div>
              {/* Service Card 3: Brand Identity */}
              <div className="bg-[#161b22] p-8 rounded-xl shadow-lg text-center transform transition-all duration-300 hover:scale-105">
                <div className="text-blue-500 mb-4">
                  <svg xmlns="http://www.w3.org/2000/svg" className="h-12 w-12 mx-auto" fill="none" viewBox="0 0 24 24" stroke="currentColor" strokeWidth="2">
                    <path strokeLinecap="round" strokeLinejoin="round" d="M21 12a9 9 0 01-9 9m9-9a9 9 0 00-9-9m9 9H3m9 9a9 9 0 01-9-9m9 9c1.657 0 3-4.5 3-9s-1.343-9-3-9m0 18v-1.5m0-9V3m-9 9h-1.5m1.5 0h-1.5m0 0a9 9 0 01-9-9m9 9a9 9 0 00-9-9m9 9h-1.5m1.5 0h-1.5" />
                  </svg>
                </div>
                <h3 className="text-2xl font-semibold text-white mb-2">Brand Identity</h3>
                <p className="text-gray-400">
                  Building a cohesive and memorable brand that resonates with your target audience.
                </p>
              </div>
            </div>
          </div>
        </section>

        {/* Contact Section */}
        <section id="contact" className="py-24 bg-[#161b22]">
          <div className="container mx-auto px-4 md:px-8">
            <h2 className="text-3xl md:text-5xl font-bold text-center mb-10 text-white">Let's Build Something Together</h2>
            <div className="max-w-xl mx-auto text-center">
              <p className="text-gray-400 mb-8 leading-relaxed text-lg">
                Ready to start your project? Fill out the form below and we'll get back to you soon to discuss your vision.
              </p>
              <form action="#" method="POST" className="space-y-6">
                <input type="text" placeholder="Your Name" className="w-full p-4 rounded-xl bg-[#0d1117] text-white placeholder-gray-500 border border-[#30363d] focus:outline-none focus:ring-2 focus:ring-teal-500 transition-colors duration-300" />
                <input type="email" placeholder="Your Email" className="w-full p-4 rounded-xl bg-[#0d1117] text-white placeholder-gray-500 border border-[#30363d] focus:outline-none focus:ring-2 focus:ring-teal-500 transition-colors duration-300" />
                <textarea placeholder="Your Message" rows="6" className="w-full p-4 rounded-xl bg-[#0d1117] text-white placeholder-gray-500 border border-[#30363d] focus:outline-none focus:ring-2 focus:ring-teal-500 transition-colors duration-300"></textarea>
                <button type="submit" className="w-full px-8 py-4 bg-gradient-to-r from-teal-500 to-emerald-600 text-white font-semibold rounded-full shadow-lg hover:from-teal-600 hover:to-emerald-700 transition-all duration-300 transform hover:scale-105">
                  Send Message
                </button>
              </form>
            </div>
          </div>
        </section>
      </main>

      {/* Footer */}
      <footer className="bg-[#161b22] text-gray-400 py-6">
        <div className="container mx-auto text-center px-4">
          <p>&copy; 2024 Rooted Visions. All rights reserved.</p>
        </div>
      </footer>

    </div>
  );
}
