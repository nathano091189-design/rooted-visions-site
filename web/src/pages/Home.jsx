export default function Home(){
  return (
    <main>
      <section className="bg-slate-50 border-b">
        <div className="max-w-6xl mx-auto px-4 py-16">
          <h1 className="text-4xl font-bold text-slate-900">Co-intelligence that makes small teams feel bigger.</h1>
          <p className="mt-4 text-lg text-slate-700">
            Workflow automation, an AI co-assistant, and micro-learning—built for nonprofits and small businesses.
          </p>
          <div className="mt-6 flex gap-3">
            <a href="/rooted-visions-site/pilot" className="px-4 py-2 rounded-md bg-green-600 text-white">
              Join the Bronx Phase I Pilot
            </a>
            <a href="/rooted-visions-site/platform" className="px-4 py-2 rounded-md border">
              See how it works
            </a>
          </div>
        </div>
      </section>
    </main>
  );
}
