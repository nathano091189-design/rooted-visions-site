import { defineConfig } from 'vite'
import react from '@vitejs/plugin-react'

// IMPORTANT:
// - When deployed to GitHub Pages, your site is served under /rooted-visions-site/
// - In dev, Vite ignores base for script tags, but we still use BASE_URL in the app.
export default defineConfig({
  base: '/rooted-visions-site/',
  plugins: [react()]
})
