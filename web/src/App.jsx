import { useEffect } from "react";
import {
  Rocket,
  Wrench,
  ClipboardCheck,
  BarChart3,
  Phone,
  Mail,
} from "lucide-react";

/** smooth scroll helper */
function scrollToId(id) {
  const el = document.getElementById(id);
  if (el) el.scrollIntoView({ behavior: "smooth", block: "start" });
}

export default function RootedVisionsSite() {
  useEffect(() => {
    document.title =
      "Rooted Visions — Rooted in Community. Built for the Future.";
  }, []);

  return (
    <div className="min-h-screen bg-gray-50 text-gray-900">
      {/* Header */}
      <header className="sticky top-0 z-40 bg-white/70 backdrop-blur border-b border-gray-100">
        <div className="mx-auto max-w-7xl px-4 h-16 flex items-center justify-between">
          {/* Brand */}
          <a
            href={import.meta.env.BASE_URL}
            className="inline-flex items-center gap-2 font-semibold"
          >
            <span className="inline-block size-2 rounded-full bg-emerald-500" />
            Rooted Visions
          </a>

          {/* Desktop nav */}
          <nav className="hidden md:flex items-center gap-6 text-sm">
            <button onClick={() => scrollToId("services")} className="hover:text-emerald-700">
              Services
            </button>
            <button onClick={() => scrollToId("work")} className="hover:text-emerald-700">
              Work
            </button>
            <button onClick={() => scrollToId("about")} className="hover:text-emerald-700">
              About
            </button>
            <button onClick={() => scrollToId("contact")} className="hover:text-emerald-700">
              Contact
            </button>

            {/* 👇 Client portal link */}
            <a
              href={`${import.meta.env.BASE_URL}portal`}
              className="inline-flex items-center gap-2 rounded-2xl px-4 py-2 text-sm font-medium shadow-sm ring-1 ring-gray-200 hover:ring-emerald-500 transition"
            >
              Client portal
            </a>

            <a
              href="#contact"
              onClick={(e) => {
                e.preventDefault();
                scrollToId("contact");
              }}
              className="inline-flex items-center gap-2 rounded-2xl bg-emerald-600 text-white px-4 py-2 text-sm font-medium shadow-sm hover:bg-emerald-700 transition"
            >
              Free consult
            </a>
          </nav>
        </div>
      </header>

      {/* Hero */}
      <section id="hero" className="relative overflow-hidden">
        <div className="absolute inset-0 bg-gradient-to-b from-emerald-50/60 to-transparent pointer-events-none" />
        <div className="mx-auto max-w-7xl px-4 py-16 grid gap-10 lg:grid-cols-2">
          <div>
            <span className="inline-flex items-center gap-2 rounded-full ring-1 ring-gray-200 px-3 py-1 text-xs font-medium mb-4 bg-white">
              Free, fast, and lightweight
            </span>
            <h1 className="text-4xl/tight sm:text-5xl font-bold">
              Systems that give your team{" "}
              <span className="text-emerald-600">time back</span>
            </h1>
            <p className="mt-4 text-gray-600 max-w-xl">
              Rooted Visions — Rooted in Community. Built for the Future.
              We help schools, nonprofits, and small teams streamline
              operations with automation, clear SOPs, and real-time KPIs —
              without breaking the budget.
            </p>
            <div className="mt-6 flex flex-wrap gap-3">
              <button
                onClick={() => scrollToId("contact")}
                className="inline-flex items-center gap-2 rounded-2xl bg-emerald-600 text-white px-4 py-2 text-sm font-medium shadow-sm hover:bg-emerald-700 transition"
              >
                Get a free consult
              </button>
              <button
                onClick={() => scrollToId("services")}
                className="inline-flex items-center gap-2 rounded-2xl px-4 py-2 text-sm font-medium shadow-sm ring-1 ring-gray-200 hover:ring-emerald-500 transition"
              >
                Explore services
              </button>
            </div>
          </div>

          {/* Quick list card */}
          <div className="lg:pl-8">
            <div className="rounded-2xl border border-gray-200 bg-white shadow-sm p-4 divide-y">
              {[
                ["Grant intake ➜ CRM"],
                ["Field trip SOPs"],
                ["Attendance dashboard"],
              ].map(([title], i) => (
                <div key={i} className="py-4">
                  <div className="text-sm font-medium">{title}</div>
                </div>
              ))}
            </div>
          </div>
        </div>
      </section>

      {/* Services */}
      <section id="services" className="mx-auto max-w-7xl px-4 py-14">
        <h2 className="text-2xl font-bold">What we do</h2>
        <p className="mt-2 text-gray-600">
          Start simple, scale smart. Pick a starter package and we tailor it to your context.
        </p>

        <div className="mt-8 grid gap-6 sm:grid-cols-2 lg:grid-cols-4">
          <Card
            icon={<Wrench className="size-5" />}
            title="Workflow Automation"
            desc="Zapier/Make, AI assistants, and low-code tools to remove busywork."
          />
          <Card
            icon={<ClipboardCheck className="size-5" />}
            title="Ops Consulting"
            desc="SOPs, playbooks, and systems design for schools, nonprofits, and small orgs."
          />
          <Card
            icon={<BarChart3 className="size-5" />}
            title="Dashboards & Data"
            desc="Clean pipelines, KPI dashboards, and lightweight analytics you can trust."
          />
          <Card
            icon={<Rocket className="size-5" />}
            title="Training & Enablement"
            desc="Onboarding, change-management, and workshops that stick."
          />
        </div>

        <div className="mt-8 rounded-2xl bg-emerald-600 text-white p-6 flex items-center justify-between">
          <div>
            <div className="font-semibold">Launch Week: $0 starter</div>
            <p className="text-emerald-50 text-sm mt-1 max-w-2xl">
              We’ll scope one process, sketch your SOP, and prototype a quick automation — free.
              If you love it, we’ll expand.
            </p>
          </div>
          <Rocket className="size-6" />
        </div>
      </section>

      {/* Work */}
      <section id="work" className="mx-auto max-w-7xl px-4 py-14">
        <h2 className="text-2xl font-bold">Recent work</h2>
        <p className="mt-2 text-gray-600">
          A few examples we’ve helped teams ship quickly and safely.
        </p>
        <ul className="mt-6 list-disc pl-6 space-y-1 text-gray-700">
          <li>Grant intake → CRM sync with approvals</li>
          <li>Field trip checklist & automated reminders</li>
          <li>Attendance dashboard with weekly snapshots</li>
        </ul>
      </section>

      {/* About */}
      <section id="about" className="mx-auto max-w-7xl px-4 py-14">
        <h2 className="text-2xl font-bold">About</h2>
        <p className="mt-2 text-gray-600 max-w-2xl">
          Rooted in community, focused on affordable systems that save time and reduce errors.
          Pragmatic, transparent, and friendly.
        </p>
      </section>

      {/* Contact */}
      <section id="contact" className="mx-auto max-w-7xl px-4 py-14">
        <div className="rounded-2xl border border-gray-200 bg-white p-6 shadow-sm">
          <h2 className="text-2xl font-bold">Let’s chat</h2>
          <p className="mt-2 text-gray-600">
            Book a 20-minute call. Tell us your bottleneck; we’ll show a quick path to value.
          </p>
          <div className="mt-6 flex flex-wrap gap-3">
            <a
              href="mailto:hello@example.com"
              className="inline-flex items-center gap-2 rounded-2xl px-4 py-2 text-sm font-medium shadow-sm ring-1 ring-gray-200 hover:ring-emerald-500 transition"
            >
              <Mail className="size-4" />
              hello@example.com
            </a>
            <a
              href="tel:+15551234567"
              className="inline-flex items-center gap-2 rounded-2xl px-4 py-2 text-sm font-medium shadow-sm ring-1 ring-gray-200 hover:ring-emerald-500 transition"
            >
              <Phone className="size-4" />
              +1 (555) 123-4567
            </a>
          </div>
        </div>
      </section>

      {/* Footer */}
      <footer className="border-t border-gray-100">
        <div className="mx-auto max-w-7xl px-4 py-6 text-sm text-gray-500 flex items-center justify-between">
          <span>© {new Date().getFullYear()} Rooted Visions. All rights reserved.</span>
          <a
            href={`${import.meta.env.BASE_URL}portal`}
            className="inline-flex items-center gap-2 rounded-xl px-3 py-1.5 ring-1 ring-gray-200 hover:ring-emerald-500 transition"
          >
            Client portal
          </a>
        </div>
      </footer>
    </div>
  );
}

/** simple card component */
function Card({ icon, title, desc }) {
  return (
    <div className="rounded-2xl border border-gray-200 bg-white p-5 shadow-sm">
      <div className="inline-flex items-center justify-center size-9 rounded-xl bg-emerald-50 text-emerald-700">
        {icon}
      </div>
      <h3 className="mt-3 font-semibold">{title}</h3>
      <p className="mt-1 text-sm text-gray-600">{desc}</p>
    </div>
  );
}
