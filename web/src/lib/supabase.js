import { createClient } from '@supabase/supabase-js'

const url  = import.meta.env.VITE_SUPABASE_URL
const anon = import.meta.env.VITE_SUPABASE_ANON_KEY

console.log('[supabase] url set:', Boolean(url))
console.log('[supabase] anon key set:', Boolean(anon))

export const supabase = (url && anon) ? createClient(url, anon) : null

if (!url || !anon) {
  console.warn('[Portal] Missing VITE_SUPABASE_URL / VITE_SUPABASE_ANON_KEY in web/.env.local')
} else {
  try {
    console.log('[Portal] Supabase host:', new URL(url).host)
  } catch {
    console.error('[Portal] Invalid VITE_SUPABASE_URL:', url)
  }
}
