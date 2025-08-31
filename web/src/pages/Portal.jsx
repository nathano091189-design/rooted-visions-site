cat > src/pages/Portal.jsx <<'EOF'
import { Link } from "react-router-dom";

export default function Portal(){
  return (
    <main className="max-w-4xl mx-auto px-4 py-12 space-y-8">
      <header className="space-y-2">
        <h1 className="text-3xl font-bold">Client Portal (Phase I)</h1>
        <p className="text-slate-700">
          This is a non-functional mock for demonstrations. In Phase II, this becomes a secure Supabase-auth portal
          with org dashboards, automations, and reports.
        </p>
      </header>

      {/* Mock login card */}
      <section className="border rounded-xl p-6 bg-white shadow-sm">
        <h2 className="text-xl font-semibold">Partner Login (Mock)</h2>
        <p className="text-sm text-slate-500 mt-1">
          Fields below are placeholders during Phase I; authentication is disabled.
        </p>

        <form className="mt-6 space-y-4" onSubmit={(e)=>e.preventDefault()}>
          <div className="space-y-1">
            <label htmlFor="email" className="block text-sm font-medium text-slate-700">Email</label>
            <input
              id="email"
              type="email"
              placeholder="you@organization.org"
              className="w-full rounded-md border px-3 py-2 text-slate-900 placeholder-slate-400 focus:outline-none focus:ring-2 focus:ring-green-600"
              disabled
              aria-disabled="true"
            />
          </div>

          <div className="space-y-1">
            <label htmlFor="password" className="block text-sm font-medium text-slate-700">Password</label>
            <input
              id="password"
              type="password"
              placeholder="••••••••"
              className="w-full rounded-md border px-3 py-2 text-slate-900 placeholder-slate-400 focus:outline-none focus:ring-2 focus:ring-green-600"
              disabled
              aria-disabled="true"
            />
          </div>

          <button
            type="submit"
            className="w-full rounded-md px-4 py-2 bg-green-600 text-white cursor-not-allowed opacity-60"
            disabled
            aria-disabled="true"
            title="Disabled in Phase I (demo only)"
          >
            Sign in (disabled in Phase I)
          </button>

          <p className="text-xs text-slate-500">
            Need access? Request an invite during the pilot. Existing partners will receive login instructions in Phase II.
          </p>
        </form>
      </section>

      {/* Actions */}
      <div className="flex flex-wrap gap-3">
        <Link to="/pilot" className="px-4 py-2 rounded-md bg-green-600 text-white">Request Pilot Access</Link>
        <Link to="/platform" className="px-4 py-2 rounded-md border">See Platform</Link>
        <a
          href="mailto:ortiz.brianja@gmail.com?subject=Rooted%20Visions%20Pilot%20Access"
          className="px-4 py-2 rounded-md border"
        >
          Email Us
        </a>
      </div>

      {/* Clear disclaimer strip */}
      <div className="rounded-lg border border-dashed bg-slate-50 p-4 text-slate-600 text-sm">
        🔒 <span className="font-medium">Phase I disclaimer:</span> Authentication and data access are disabled in this demo.
        The production portal will use Supabase Auth, role-based access, and encrypted storage.
      </div>
    </main>
  );
}
EOF
