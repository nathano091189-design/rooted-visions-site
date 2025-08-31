export default function Footer(){
  return (
    <footer className="mt-16 border-t">
      <div className="max-w-6xl mx-auto px-4 py-6 text-sm text-slate-600 flex flex-col gap-2 md:flex-row md:items-center md:justify-between">
        <p>© {new Date().getFullYear()} Rooted Visions — Phase I Prototype (R&D)</p>
        <div className="flex gap-4">
          <a href="mailto:ortiz.brianja@gmail.com">Email</a>
          <a href="https://github.com/">GitHub</a>
        </div>
      </div>
    </footer>
  );
}
