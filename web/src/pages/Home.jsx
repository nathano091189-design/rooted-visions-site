import { useState } from 'react';

export default function Home(){
  const [image, setImage] = useState(null);
  const [video, setVideo] = useState(null);

  const handleImageChange = (e) => {
    const file = e.target.files[0];
    if (file) {
      setImage(URL.createObjectURL(file));
    }
  };

  const handleVideoChange = (e) => {
    const file = e.target.files[0];
    if (file) {
      setVideo(URL.createObjectURL(file));
    }
  };

  return (
    <main className="min-h-screen flex flex-col items-center justify-center bg-white px-4">
      <img src="/logo.svg" alt="Rooted Visions logo" className="w-32 mb-8" />
      <h1 className="text-4xl font-bold text-slate-900 mb-2 text-center">
        Welcome to Rooted Visions
      </h1>
      <p className="text-slate-600 mb-8 text-center">
        Upload an image or video to get started.
      </p>

      <div className="w-full max-w-md space-y-8">
        <div className="flex flex-col items-center p-6 border-2 border-dashed rounded-lg">
          <label htmlFor="imageUpload" className="cursor-pointer text-center">
            <span className="text-green-600 font-semibold">Upload Image</span>
            <input
              id="imageUpload"
              type="file"
              accept="image/*"
              onChange={handleImageChange}
              className="hidden"
            />
          </label>
          {image && (
            <img
              src={image}
              alt="Preview"
              className="mt-4 max-h-48 rounded-md"
            />
          )}
        </div>

        <div className="flex flex-col items-center p-6 border-2 border-dashed rounded-lg">
          <label htmlFor="videoUpload" className="cursor-pointer text-center">
            <span className="text-green-600 font-semibold">Upload Video</span>
            <input
              id="videoUpload"
              type="file"
              accept="video/*"
              onChange={handleVideoChange}
              className="hidden"
            />
          </label>
          {video && (
            <video
              src={video}
              controls
              className="mt-4 max-h-48 rounded-md"
            />
          )}
        </div>
      </div>
    </main>
  );
}
