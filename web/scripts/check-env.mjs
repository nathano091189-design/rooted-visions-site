const fs = await import('node:fs/promises')
const path = (p) => new URL(p, import.meta.url).pathname
const envPath = path('../.env.local')

try {
  const raw = await fs.readFile(envPath, 'utf8')
  const url = (raw.match(/^VITE_SUPABASE_URL=(.*)$/m)||[])[1]?.trim()
  const key = (raw.match(/^VITE_SUPABASE_ANON_KEY=(.*)$/m)||[])[1]?.trim()
  if (!url || !key) throw new Error('Missing one or both envs.')

  try { new URL(url) } catch { throw new Error(`Invalid URL: ${url}`) }
  if (!key || key.length < 20) throw new Error('Anon key looks too short.')
  console.log('✅ Env looks good.')
} catch (e) {
  console.error('❌ Env check failed:', e.message)
  process.exit(1)
}
