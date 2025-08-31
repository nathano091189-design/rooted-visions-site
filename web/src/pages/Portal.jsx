import { useState } from 'react'
import { supabase } from '../lib/supabase.js'

export default function Portal() {
  if (!supabase) {
    return (
      <div className="mx-auto max-w-xl p-6">
        <h1 className="text-2xl font-semibold mb-2">Portal unavailable</h1>
        <p className="text-sm opacity-80">
          Supabase is not configured. Add <code>VITE_SUPABASE_URL</code> and <code>VITE_SUPABASE_ANON_KEY</code> to <code>web/.env.local</code> and restart the dev server.
        </p>
      </div>
    )
  }

  const [email, setEmail] = useState('')
  const [status, setStatus] = useState('')

  const redirectTo = `${location.origin}${import.meta.env.BASE_URL}portal`

  async function signIn(e) {
    e.preventDefault()
    setStatus('')
    try {
      const { error } = await supabase.auth.signInWithOtp({
        email,
        options: { emailRedirectTo: redirectTo, shouldCreateUser: true }
      })
      if (error) throw error
      setStatus('Check your email for the magic link.')
    } catch (err) {
      console.error(err)
      setStatus(err?.message || 'Failed to send magic link.')
    }
  }

  return (
    <div className="mx-auto max-w-xl p-6">
      <header className="flex items-center justify-between mb-6">
        <a href={import.meta.env.BASE_URL} className="text-sm opacity-70 hover:opacity-100">← Back</a>
        <div className="text-sm opacity-70">Client Portal</div>
      </header>
      <h1 className="text-2xl font-semibold mb-4">Sign in</h1>
      <form onSubmit={signIn} className="space-y-3">
        <input
          type="email"
          required
          value={email}
          onChange={(e) => setEmail(e.target.value)}
          placeholder="you@work.org"
          className="w-full rounded border px-3 py-2"
        />
        <button type="submit" className="rounded bg-emerald-600 px-4 py-2 text-white hover:bg-emerald-700">
          Send magic link
        </button>
      </form>
      {status && <p className="mt-3 text-sm">{status}</p>}
    </div>
  )
}
