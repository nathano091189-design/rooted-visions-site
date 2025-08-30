export default function Portal() {
  return (
    <div className="min-h-screen bg-gray-50">
      <header className="sticky top-0 z-40 bg-white/70 backdrop-blur border-b border-gray-100">
        <div className="mx-auto max-w-5xl px-4 h-14 flex items-center justify-between">
          <a href={import.meta.env.BASE_URL} className="font-semibold">Rooted Visions</a>
          <div className="text-sm text-gray-500">Client Portal</div>
        </div>
      </header>

      <main className="mx-auto max-w-5xl px-4 py-10">
        <div className="rounded-2xl border border-gray-200 bg-white p-6 shadow-sm">
          <h1 className="text-2xl font-bold">Welcome</h1>
          <p className="mt-2 text-gray-600">
            This is your portal. Next we’ll add sign-in and secure uploads.
          </p>
        </div>
      </main>
    </div>
  );
}
