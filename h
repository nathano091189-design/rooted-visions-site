[1mdiff --git a/package-lock.json b/package-lock.json[m
[1mindex 97aaf88..1a4e29d 100644[m
[1m--- a/package-lock.json[m
[1m+++ b/package-lock.json[m
[36m@@ -4,19 +4,10 @@[m
   "requires": true,[m
   "packages": {[m
     "": {[m
[31m-      "dependencies": {[m
[31m-        "@supabase/supabase-js": "^2.56.1",[m
[31m-        "framer-motion": "^12.23.12",[m
[31m-        "lucide-react": "^0.542.0",[m
[31m-        "react-router-dom": "^7.8.2"[m
[31m-      },[m
[31m-      "devDependencies": {[m
[31m-        "@tailwindcss/postcss": "^4.1.12",[m
[31m-        "@vitejs/plugin-react": "^5.0.2",[m
[31m-        "autoprefixer": "^10.4.21",[m
[31m-        "postcss": "^8.5.6",[m
[31m-        "tailwindcss": "^4.1.12"[m
[31m-      }[m
[32m+[m[32m      "name": "rooted-visions-site",[m
[32m+[m[32m      "workspaces": [[m
[32m+[m[32m        "web"[m
[32m+[m[32m      ][m
     },[m
     "node_modules/@alloc/quick-lru": {[m
       "version": "5.2.0",[m
[36m@@ -318,7 +309,6 @@[m
       "os": [[m
         "aix"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -335,7 +325,6 @@[m
       "os": [[m
         "android"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -352,7 +341,6 @@[m
       "os": [[m
         "android"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -369,7 +357,6 @@[m
       "os": [[m
         "android"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -386,7 +373,6 @@[m
       "os": [[m
         "darwin"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -403,7 +389,6 @@[m
       "os": [[m
         "darwin"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -420,7 +405,6 @@[m
       "os": [[m
         "freebsd"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -437,7 +421,6 @@[m
       "os": [[m
         "freebsd"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -454,7 +437,6 @@[m
       "os": [[m
         "linux"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -471,7 +453,6 @@[m
       "os": [[m
         "linux"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -488,7 +469,6 @@[m
       "os": [[m
         "linux"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -505,7 +485,6 @@[m
       "os": [[m
         "linux"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -522,7 +501,6 @@[m
       "os": [[m
         "linux"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -539,7 +517,6 @@[m
       "os": [[m
         "linux"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -556,7 +533,6 @@[m
       "os": [[m
         "linux"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -573,7 +549,6 @@[m
       "os": [[m
         "linux"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -590,7 +565,6 @@[m
       "os": [[m
         "linux"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -607,7 +581,6 @@[m
       "os": [[m
         "netbsd"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -624,7 +597,6 @@[m
       "os": [[m
         "netbsd"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -641,7 +613,6 @@[m
       "os": [[m
         "openbsd"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -658,7 +629,6 @@[m
       "os": [[m
         "openbsd"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -675,7 +645,6 @@[m
       "os": [[m
         "openharmony"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -692,7 +661,6 @@[m
       "os": [[m
         "sunos"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -709,7 +677,6 @@[m
       "os": [[m
         "win32"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -726,7 +693,6 @@[m
       "os": [[m
         "win32"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
[36m@@ -743,11 +709,214 @@[m
       "os": [[m
         "win32"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=18"[m
       }[m
     },[m
[32m+[m[32m    "node_modules/@eslint-community/eslint-utils": {[m
[32m+[m[32m      "version": "4.7.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@eslint-community/eslint-utils/-/eslint-utils-4.7.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-dyybb3AcajC7uha6CvhdVRJqaKyn7w2YKqKyAN37NKYgZT36w+iRb0Dymmc5qEJ549c/S31cMMSFd75bteCpCw==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "eslint-visitor-keys": "^3.4.3"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": "^12.22.0 || ^14.17.0 || >=16.0.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://opencollective.com/eslint"[m
[32m+[m[32m      },[m
[32m+[m[32m      "peerDependencies": {[m
[32m+[m[32m        "eslint": "^6.0.0 || ^7.0.0 || >=8.0.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@eslint-community/eslint-utils/node_modules/eslint-visitor-keys": {[m
[32m+[m[32m      "version": "3.4.3",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/eslint-visitor-keys/-/eslint-visitor-keys-3.4.3.tgz",[m
[32m+[m[32m      "integrity": "sha512-wpc+LXeiyiisxPlEkUzU6svyS1frIO3Mgxj1fdy7Pm8Ygzguax2N3Fa/D/ag1WqbOprdI+uY6wMUl8/a2G+iag==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": "^12.22.0 || ^14.17.0 || >=16.0.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://opencollective.com/eslint"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@eslint-community/regexpp": {[m
[32m+[m[32m      "version": "4.12.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@eslint-community/regexpp/-/regexpp-4.12.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-CCZCDJuduB9OUkFkY2IgppNZMi2lBQgD2qzwXkEia16cge2pijY/aXi96CJMquDMn3nJdlPV1A5KrJEXwfLNzQ==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": "^12.0.0 || ^14.0.0 || >=16.0.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@eslint/config-array": {[m
[32m+[m[32m      "version": "0.21.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@eslint/config-array/-/config-array-0.21.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-ENIdc4iLu0d93HeYirvKmrzshzofPw6VkZRKQGe9Nv46ZnWUzcF1xV01dcvEg/1wXUR61OmmlSfyeyO7EvjLxQ==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@eslint/object-schema": "^2.1.6",[m
[32m+[m[32m        "debug": "^4.3.1",[m
[32m+[m[32m        "minimatch": "^3.1.2"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": "^18.18.0 || ^20.9.0 || >=21.1.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@eslint/config-helpers": {[m
[32m+[m[32m      "version": "0.3.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@eslint/config-helpers/-/config-helpers-0.3.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-xR93k9WhrDYpXHORXpxVL5oHj3Era7wo6k/Wd8/IsQNnZUTzkGS29lyn3nAT05v6ltUuTFVCCYDEGfy2Or/sPA==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": "^18.18.0 || ^20.9.0 || >=21.1.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@eslint/core": {[m
[32m+[m[32m      "version": "0.15.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@eslint/core/-/core-0.15.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-78Md3/Rrxh83gCxoUc0EiciuOHsIITzLy53m3d9UyiW8y9Dj2D29FeETqyKA+BRK76tnTp6RXWb3pCay8Oyomg==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@types/json-schema": "^7.0.15"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": "^18.18.0 || ^20.9.0 || >=21.1.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@eslint/eslintrc": {[m
[32m+[m[32m      "version": "3.3.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@eslint/eslintrc/-/eslintrc-3.3.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-gtF186CXhIl1p4pJNGZw8Yc6RlshoePRvE0X91oPGb3vZ8pM3qOS9W9NGPat9LziaBV7XrJWGylNQXkGcnM3IQ==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "ajv": "^6.12.4",[m
[32m+[m[32m        "debug": "^4.3.2",[m
[32m+[m[32m        "espree": "^10.0.1",[m
[32m+[m[32m        "globals": "^14.0.0",[m
[32m+[m[32m        "ignore": "^5.2.0",[m
[32m+[m[32m        "import-fresh": "^3.2.1",[m
[32m+[m[32m        "js-yaml": "^4.1.0",[m
[32m+[m[32m        "minimatch": "^3.1.2",[m
[32m+[m[32m        "strip-json-comments": "^3.1.1"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": "^18.18.0 || ^20.9.0 || >=21.1.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://opencollective.com/eslint"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@eslint/eslintrc/node_modules/globals": {[m
[32m+[m[32m      "version": "14.0.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/globals/-/globals-14.0.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-oahGvuMGQlPw/ivIYBjVSrWAfWLBeku5tpPE2fOPLi+WHffIWbuh2tCjhyQhTBPMf5E9jDEH4FOmTYgYwbKwtQ==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=18"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://github.com/sponsors/sindresorhus"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@eslint/js": {[m
[32m+[m[32m      "version": "9.34.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@eslint/js/-/js-9.34.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-EoyvqQnBNsV1CWaEJ559rxXL4c8V92gxirbawSmVUOWXlsRxxQXl6LmCpdUblgxgSkDIqKnhzba2SjRTI/A5Rw==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": "^18.18.0 || ^20.9.0 || >=21.1.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://eslint.org/donate"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@eslint/object-schema": {[m
[32m+[m[32m      "version": "2.1.6",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@eslint/object-schema/-/object-schema-2.1.6.tgz",[m
[32m+[m[32m      "integrity": "sha512-RBMg5FRL0I0gs51M/guSAj5/e14VQ4tpZnQNWwuDT66P14I43ItmPfIZRhO9fUVIPOAQXU47atlywZ/czoqFPA==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": "^18.18.0 || ^20.9.0 || >=21.1.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@eslint/plugin-kit": {[m
[32m+[m[32m      "version": "0.3.5",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@eslint/plugin-kit/-/plugin-kit-0.3.5.tgz",[m
[32m+[m[32m      "integrity": "sha512-Z5kJ+wU3oA7MMIqVR9tyZRtjYPr4OC004Q4Rw7pgOKUOKkJfZ3O24nz3WYfGRpMDNmcOi3TwQOmgm7B7Tpii0w==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@eslint/core": "^0.15.2",[m
[32m+[m[32m        "levn": "^0.4.1"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": "^18.18.0 || ^20.9.0 || >=21.1.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@humanfs/core": {[m
[32m+[m[32m      "version": "0.19.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@humanfs/core/-/core-0.19.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-5DyQ4+1JEUzejeK1JGICcideyfUbGixgS9jNgex5nqkW+cY7WZhxBigmieN5Qnw9ZosSNVC9KQKyb+GUaGyKUA==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=18.18.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@humanfs/node": {[m
[32m+[m[32m      "version": "0.16.6",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@humanfs/node/-/node-0.16.6.tgz",[m
[32m+[m[32m      "integrity": "sha512-YuI2ZHQL78Q5HbhDiBA1X4LmYdXCKCMQIfw0pw7piHJwyREFebJUvrQN4cMssyES6x+vfUbx1CIpaQUKYdQZOw==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@humanfs/core": "^0.19.1",[m
[32m+[m[32m        "@humanwhocodes/retry": "^0.3.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=18.18.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@humanfs/node/node_modules/@humanwhocodes/retry": {[m
[32m+[m[32m      "version": "0.3.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@humanwhocodes/retry/-/retry-0.3.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-JBxkERygn7Bv/GbN5Rv8Ul6LVknS+5Bp6RgDC/O8gEBU/yeH5Ui5C/OlWrTb6qct7LjjfT6Re2NxB0ln0yYybA==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=18.18"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "type": "github",[m
[32m+[m[32m        "url": "https://github.com/sponsors/nzakas"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@humanwhocodes/module-importer": {[m
[32m+[m[32m      "version": "1.0.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@humanwhocodes/module-importer/-/module-importer-1.0.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-bxveV4V8v5Yb4ncFTT3rPSgZBOpCkjfK0y4oVVVJwIuDVBRMDXrPyXRL988i5ap9m9bnyEEjWfm5WkBmtffLfA==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=12.22"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "type": "github",[m
[32m+[m[32m        "url": "https://github.com/sponsors/nzakas"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@humanwhocodes/retry": {[m
[32m+[m[32m      "version": "0.4.3",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@humanwhocodes/retry/-/retry-0.4.3.tgz",[m
[32m+[m[32m      "integrity": "sha512-bV0Tgo9K4hfPCek+aMAn81RppFKv2ySDQeMoSZuvTASywNTnVJCArCZE2FWqpvIatKu7VMRLWlR1EazvVhDyhQ==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=18.18"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "type": "github",[m
[32m+[m[32m        "url": "https://github.com/sponsors/nzakas"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
     "node_modules/@isaacs/fs-minipass": {[m
       "version": "4.0.1",[m
       "resolved": "https://registry.npmjs.org/@isaacs/fs-minipass/-/fs-minipass-4.0.1.tgz",[m
[36m@@ -822,8 +991,7 @@[m
       "optional": true,[m
       "os": [[m
         "android"[m
[31m-      ],[m
[31m-      "peer": true[m
[32m+[m[32m      ][m
     },[m
     "node_modules/@rollup/rollup-android-arm64": {[m
       "version": "4.49.0",[m
[36m@@ -836,8 +1004,7 @@[m
       "optional": true,[m
       "os": [[m
         "android"[m
[31m-      ],[m
[31m-      "peer": true[m
[32m+[m[32m      ][m
     },[m
     "node_modules/@rollup/rollup-darwin-arm64": {[m
       "version": "4.49.0",[m
[36m@@ -850,8 +1017,7 @@[m
       "optional": true,[m
       "os": [[m
         "darwin"[m
[31m-      ],[m
[31m-      "peer": true[m
[32m+[m[32m      ][m
     },[m
     "node_modules/@rollup/rollup-darwin-x64": {[m
       "version": "4.49.0",[m
[36m@@ -864,8 +1030,7 @@[m
       "optional": true,[m
       "os": [[m
         "darwin"[m
[31m-      ],[m
[31m-      "peer": true[m
[32m+[m[32m      ][m
     },[m
     "node_modules/@rollup/rollup-freebsd-arm64": {[m
       "version": "4.49.0",[m
[36m@@ -878,8 +1043,7 @@[m
       "optional": true,[m
       "os": [[m
         "freebsd"[m
[31m-      ],[m
[31m-      "peer": true[m
[32m+[m[32m      ][m
     },[m
     "node_modules/@rollup/rollup-freebsd-x64": {[m
       "version": "4.49.0",[m
[36m@@ -892,8 +1056,7 @@[m
       "optional": true,[m
       "os": [[m
         "freebsd"[m
[31m-      ],[m
[31m-      "peer": true[m
[32m+[m[32m      ][m
     },[m
     "node_modules/@rollup/rollup-linux-arm-gnueabihf": {[m
       "version": "4.49.0",[m
[36m@@ -906,8 +1069,7 @@[m
       "optional": true,[m
       "os": [[m
         "linux"[m
[31m-      ],[m
[31m-      "peer": true[m
[32m+[m[32m      ][m
     },[m
     "node_modules/@rollup/rollup-linux-arm-musleabihf": {[m
       "version": "4.49.0",[m
[36m@@ -920,8 +1082,7 @@[m
       "optional": true,[m
       "os": [[m
         "linux"[m
[31m-      ],[m
[31m-      "peer": true[m
[32m+[m[32m      ][m
     },[m
     "node_modules/@rollup/rollup-linux-arm64-gnu": {[m
       "version": "4.49.0",[m
[36m@@ -934,8 +1095,7 @@[m
       "optional": true,[m
       "os": [[m
         "linux"[m
[31m-      ],[m
[31m-      "peer": true[m
[32m+[m[32m      ][m
     },[m
     "node_modules/@rollup/rollup-linux-arm64-musl": {[m
       "version": "4.49.0",[m
[36m@@ -948,8 +1108,7 @@[m
       "optional": true,[m
       "os": [[m
         "linux"[m
[31m-      ],[m
[31m-      "peer": true[m
[32m+[m[32m      ][m
     },[m
     "node_modules/@rollup/rollup-linux-loongarch64-gnu": {[m
       "version": "4.49.0",[m
[36m@@ -962,8 +1121,7 @@[m
       "optional": true,[m
       "os": [[m
         "linux"[m
[31m-      ],[m
[31m-      "peer": true[m
[32m+[m[32m      ][m
     },[m
     "node_modules/@rollup/rollup-linux-ppc64-gnu": {[m
       "version": "4.49.0",[m
[36m@@ -976,8 +1134,7 @@[m
       "optional": true,[m
       "os": [[m
         "linux"[m
[31m-      ],[m
[31m-      "peer": true[m
[32m+[m[32m      ][m
     },[m
     "node_modules/@rollup/rollup-linux-riscv64-gnu": {[m
       "version": "4.49.0",[m
[36m@@ -990,8 +1147,7 @@[m
       "optional": true,[m
       "os": [[m
         "linux"[m
[31m-      ],[m
[31m-      "peer": true[m
[32m+[m[32m      ][m
     },[m
     "node_modules/@rollup/rollup-linux-riscv64-musl": {[m
       "version": "4.49.0",[m
[36m@@ -1004,8 +1160,7 @@[m
       "optional": true,[m
       "os": [[m
         "linux"[m
[31m-      ],[m
[31m-      "peer": true[m
[32m+[m[32m      ][m
     },[m
     "node_modules/@rollup/rollup-linux-s390x-gnu": {[m
       "version": "4.49.0",[m
[36m@@ -1018,8 +1173,7 @@[m
       "optional": true,[m
       "os": [[m
         "linux"[m
[31m-      ],[m
[31m-      "peer": true[m
[32m+[m[32m      ][m
     },[m
     "node_modules/@rollup/rollup-linux-x64-gnu": {[m
       "version": "4.49.0",[m
[36m@@ -1032,8 +1186,7 @@[m
       "optional": true,[m
       "os": [[m
         "linux"[m
[31m-      ],[m
[31m-      "peer": true[m
[32m+[m[32m      ][m
     },[m
     "node_modules/@rollup/rollup-linux-x64-musl": {[m
       "version": "4.49.0",[m
[36m@@ -1046,8 +1199,7 @@[m
       "optional": true,[m
       "os": [[m
         "linux"[m
[31m-      ],[m
[31m-      "peer": true[m
[32m+[m[32m      ][m
     },[m
     "node_modules/@rollup/rollup-win32-arm64-msvc": {[m
       "version": "4.49.0",[m
[36m@@ -1060,8 +1212,7 @@[m
       "optional": true,[m
       "os": [[m
         "win32"[m
[31m-      ],[m
[31m-      "peer": true[m
[32m+[m[32m      ][m
     },[m
     "node_modules/@rollup/rollup-win32-ia32-msvc": {[m
       "version": "4.49.0",[m
[36m@@ -1074,8 +1225,7 @@[m
       "optional": true,[m
       "os": [[m
         "win32"[m
[31m-      ],[m
[31m-      "peer": true[m
[32m+[m[32m      ][m
     },[m
     "node_modules/@rollup/rollup-win32-x64-msvc": {[m
       "version": "4.49.0",[m
[36m@@ -1088,8 +1238,7 @@[m
       "optional": true,[m
       "os": [[m
         "win32"[m
[31m-      ],[m
[31m-      "peer": true[m
[32m+[m[32m      ][m
     },[m
     "node_modules/@supabase/auth-js": {[m
       "version": "2.71.1",[m
[36m@@ -1464,8 +1613,13 @@[m
       "version": "1.0.8",[m
       "resolved": "https://registry.npmjs.org/@types/estree/-/estree-1.0.8.tgz",[m
       "integrity": "sha512-dWHzHa2WqEXI/O1E9OjrocMTKJl2mSrEolh1Iomrv6U+JuNwaHXsXx9bLu5gG7BUWFIN0skIQJQ/L1rIex4X6w==",[m
[31m-      "dev": true,[m
[31m-      "peer": true[m
[32m+[m[32m      "dev": true[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@types/json-schema": {[m
[32m+[m[32m      "version": "7.0.15",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@types/json-schema/-/json-schema-7.0.15.tgz",[m
[32m+[m[32m      "integrity": "sha512-5+fP8P8MFNC+AyZCDxrB2pkZFPGzqQWUzpSeuuVLvm8VMcorNYavBqoFcxK8bQz4Qsbn4oUEEem4wDLfcysGHA==",[m
[32m+[m[32m      "dev": true[m
     },[m
     "node_modules/@types/node": {[m
       "version": "24.3.0",[m
[36m@@ -1480,6 +1634,24 @@[m
       "resolved": "https://registry.npmjs.org/@types/phoenix/-/phoenix-1.6.6.tgz",[m
       "integrity": "sha512-PIzZZlEppgrpoT2QgbnDU+MMzuR6BbCjllj0bM70lWoejMeNJAxCchxnv7J3XFkI8MpygtRpzXrIlmWUBclP5A=="[m
     },[m
[32m+[m[32m    "node_modules/@types/react": {[m
[32m+[m[32m      "version": "19.1.12",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@types/react/-/react-19.1.12.tgz",[m
[32m+[m[32m      "integrity": "sha512-cMoR+FoAf/Jyq6+Df2/Z41jISvGZZ2eTlnsaJRptmZ76Caldwy1odD4xTr/gNV9VLj0AWgg/nmkevIyUfIIq5w==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "csstype": "^3.0.2"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@types/react-dom": {[m
[32m+[m[32m      "version": "19.1.9",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@types/react-dom/-/react-dom-19.1.9.tgz",[m
[32m+[m[32m      "integrity": "sha512-qXRuZaOsAdXKFyOhRBg6Lqqc0yay13vN7KrIg4L7N4aaHN68ma9OK3NE1BoDFgFOTfM7zg+3/8+2n8rLUH3OKQ==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "peerDependencies": {[m
[32m+[m[32m        "@types/react": "^19.0.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
     "node_modules/@types/ws": {[m
       "version": "8.18.1",[m
       "resolved": "https://registry.npmjs.org/@types/ws/-/ws-8.18.1.tgz",[m
[36m@@ -1508,6 +1680,64 @@[m
         "vite": "^4.2.0 || ^5.0.0 || ^6.0.0 || ^7.0.0"[m
       }[m
     },[m
[32m+[m[32m    "node_modules/acorn": {[m
[32m+[m[32m      "version": "8.15.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/acorn/-/acorn-8.15.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-NZyJarBfL7nWwIq+FDL6Zp/yHEhePMNnnJ0y3qfieCrmNvYct8uvtiV41UvlSe6apAfk0fY1FbWx+NwfmpvtTg==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "bin": {[m
[32m+[m[32m        "acorn": "bin/acorn"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=0.4.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/acorn-jsx": {[m
[32m+[m[32m      "version": "5.3.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/acorn-jsx/-/acorn-jsx-5.3.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-rq9s+JNhf0IChjtDXxllJ7g41oZk5SlXtp0LHwyA5cejwn7vKmKp4pPri6YEePv2PU65sAsegbXtIinmDFDXgQ==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "peerDependencies": {[m
[32m+[m[32m        "acorn": "^6.0.0 || ^7.0.0 || ^8.0.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/ajv": {[m
[32m+[m[32m      "version": "6.12.6",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/ajv/-/ajv-6.12.6.tgz",[m
[32m+[m[32m      "integrity": "sha512-j3fVLgvTo527anyYyJOGTYJbG+vnnQYvE0m5mmkc1TK+nxAppkCLMIL0aZ4dblVCNoGShhm+kzE4ZUykBoMg4g==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "fast-deep-equal": "^3.1.1",[m
[32m+[m[32m        "fast-json-stable-stringify": "^2.0.0",[m
[32m+[m[32m        "json-schema-traverse": "^0.4.1",[m
[32m+[m[32m        "uri-js": "^4.2.2"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "type": "github",[m
[32m+[m[32m        "url": "https://github.com/sponsors/epoberezkin"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/ansi-styles": {[m
[32m+[m[32m      "version": "4.3.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/ansi-styles/-/ansi-styles-4.3.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-zbB9rCJAT1rbjiVDb2hqKFHNYLxgtk8NURxZ3IZwD3F6NtxbXZQCnnSi1Lkx+IDohdPlFp222wVALIheZJQSEg==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "color-convert": "^2.0.1"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=8"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://github.com/chalk/ansi-styles?sponsor=1"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/argparse": {[m
[32m+[m[32m      "version": "2.0.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/argparse/-/argparse-2.0.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-8+9WqebbFzpX9OR+Wa6O29asIogeRMzcGtAINdpMHHyAg10f05aSFVBbcEqGf/PXw1EjAZ+q2/bEBg3DvurK3Q==",[m
[32m+[m[32m      "dev": true[m
[32m+[m[32m    },[m
     "node_modules/autoprefixer": {[m
       "version": "10.4.21",[m
       "resolved": "https://registry.npmjs.org/autoprefixer/-/autoprefixer-10.4.21.tgz",[m
[36m@@ -1545,6 +1775,22 @@[m
         "postcss": "^8.1.0"[m
       }[m
     },[m
[32m+[m[32m    "node_modules/balanced-match": {[m
[32m+[m[32m      "version": "1.0.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/balanced-match/-/balanced-match-1.0.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-3oSeUO0TMV67hN1AmbXsK4yaqU7tjiHlbxRDZOpH0KW9+CeX4bRAaX0Anxt0tx2MrpRpWwQaPwIlISEJhYU5Pw==",[m
[32m+[m[32m      "dev": true[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/brace-expansion": {[m
[32m+[m[32m      "version": "1.1.12",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/brace-expansion/-/brace-expansion-1.1.12.tgz",[m
[32m+[m[32m      "integrity": "sha512-9T9UjW3r0UW5c1Q7GTwllptXwhvYmEzFhzMfZ9H7FQWt+uZePjZPjBP/W1ZEyZ1twGWom5/56TF4lPcqjnDHcg==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "balanced-match": "^1.0.0",[m
[32m+[m[32m        "concat-map": "0.0.1"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
     "node_modules/browserslist": {[m
       "version": "4.25.4",[m
       "resolved": "https://registry.npmjs.org/browserslist/-/browserslist-4.25.4.tgz",[m
[36m@@ -1577,6 +1823,15 @@[m
         "node": "^6 || ^7 || ^8 || ^9 || ^10 || ^11 || ^12 || >=13.7"[m
       }[m
     },[m
[32m+[m[32m    "node_modules/callsites": {[m
[32m+[m[32m      "version": "3.1.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/callsites/-/callsites-3.1.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-P8BjAsXvZS+VIDUI11hHCQEv74YT67YUi5JJFNWIqL235sBmjX4+qx9Muvls5ivyNENctx46xQLQ3aTuE7ssaQ==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=6"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
     "node_modules/caniuse-lite": {[m
       "version": "1.0.30001737",[m
       "resolved": "https://registry.npmjs.org/caniuse-lite/-/caniuse-lite-1.0.30001737.tgz",[m
[36m@@ -1597,6 +1852,22 @@[m
         }[m
       ][m
     },[m
[32m+[m[32m    "node_modules/chalk": {[m
[32m+[m[32m      "version": "4.1.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/chalk/-/chalk-4.1.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-oKnbhFyRIXpUuez8iBMmyEa4nbj4IOQyuhc/wy9kY7/WVPcwIO9VA668Pu8RkO7+0G76SLROeyw9CpQ061i4mA==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "ansi-styles": "^4.1.0",[m
[32m+[m[32m        "supports-color": "^7.1.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=10"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://github.com/chalk/chalk?sponsor=1"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
     "node_modules/chownr": {[m
       "version": "3.0.0",[m
       "resolved": "https://registry.npmjs.org/chownr/-/chownr-3.0.0.tgz",[m
[36m@@ -1606,6 +1877,30 @@[m
         "node": ">=18"[m
       }[m
     },[m
[32m+[m[32m    "node_modules/color-convert": {[m
[32m+[m[32m      "version": "2.0.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/color-convert/-/color-convert-2.0.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-RRECPsj7iu/xb5oKYcsFHSppFNnsj/52OVTRKb4zP5onXwVF3zVmmToNcOfGC+CRDpfK/U584fMg38ZHCaElKQ==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "color-name": "~1.1.4"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=7.0.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/color-name": {[m
[32m+[m[32m      "version": "1.1.4",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/color-name/-/color-name-1.1.4.tgz",[m
[32m+[m[32m      "integrity": "sha512-dOy+3AuW3a2wNbZHIuMZpTcgjGuLU/uBL/ubcZF9OXbDo8ff4O8yVp5Bf0efS8uEoYo5q4Fx7dY9OgQGXgAsQA==",[m
[32m+[m[32m      "dev": true[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/concat-map": {[m
[32m+[m[32m      "version": "0.0.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/concat-map/-/concat-map-0.0.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-/Srv4dswyQNBfohGpz9o6Yb3Gz3SrUDqBH5rTuhGR7ahtlbYKnVxw2bCFMRljaA7EXHaXZ8wsHdodFvbkhKmqg==",[m
[32m+[m[32m      "dev": true[m
[32m+[m[32m    },[m
     "node_modules/convert-source-map": {[m
       "version": "2.0.0",[m
       "resolved": "https://registry.npmjs.org/convert-source-map/-/convert-source-map-2.0.0.tgz",[m
[36m@@ -1620,6 +1915,26 @@[m
         "node": ">=18"[m
       }[m
     },[m
[32m+[m[32m    "node_modules/cross-spawn": {[m
[32m+[m[32m      "version": "7.0.6",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/cross-spawn/-/cross-spawn-7.0.6.tgz",[m
[32m+[m[32m      "integrity": "sha512-uV2QOWP2nWzsy2aMp8aRibhi9dlzF5Hgh5SHaB9OiTGEyDTiJJyx0uy51QXdyWbtAHNua4XJzUKca3OzKUd3vA==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "path-key": "^3.1.0",[m
[32m+[m[32m        "shebang-command": "^2.0.0",[m
[32m+[m[32m        "which": "^2.0.1"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">= 8"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/csstype": {[m
[32m+[m[32m      "version": "3.1.3",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/csstype/-/csstype-3.1.3.tgz",[m
[32m+[m[32m      "integrity": "sha512-M1uQkMl8rQK/szD0LNhtqxIPLpimGm8sOBwU7lLnCpSbTyY3yeU1Vc7l4KT5zT4s/yOxHH5O7tIuuLOCnLADRw==",[m
[32m+[m[32m      "dev": true[m
[32m+[m[32m    },[m
     "node_modules/debug": {[m
       "version": "4.4.1",[m
       "resolved": "https://registry.npmjs.org/debug/-/debug-4.4.1.tgz",[m
[36m@@ -1637,6 +1952,12 @@[m
         }[m
       }[m
     },[m
[32m+[m[32m    "node_modules/deep-is": {[m
[32m+[m[32m      "version": "0.1.4",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/deep-is/-/deep-is-0.1.4.tgz",[m
[32m+[m[32m      "integrity": "sha512-oIPzksmTg4/MriiaYGO+okXDT7ztn/w3Eptv/+gSIdMdKsJo0u4CfYNFJPy+4SKMuCqGw2wxnA+URMg3t8a/bQ==",[m
[32m+[m[32m      "dev": true[m
[32m+[m[32m    },[m
     "node_modules/detect-libc": {[m
       "version": "2.0.4",[m
       "resolved": "https://registry.npmjs.org/detect-libc/-/detect-libc-2.0.4.tgz",[m
[36m@@ -1671,7 +1992,6 @@[m
       "integrity": "sha512-CRbODhYyQx3qp7ZEwzxOk4JBqmD/seJrzPa/cGjY1VtIn5E09Oi9/dB4JwctnfZ8Q8iT7rioVv5k/FNT/uf54g==",[m
       "dev": true,[m
       "hasInstallScript": true,[m
[31m-      "peer": true,[m
       "bin": {[m
         "esbuild": "bin/esbuild"[m
       },[m
[36m@@ -1716,27 +2036,271 @@[m
         "node": ">=6"[m
       }[m
     },[m
[31m-    "node_modules/fdir": {[m
[31m-      "version": "6.5.0",[m
[31m-      "resolved": "https://registry.npmjs.org/fdir/-/fdir-6.5.0.tgz",[m
[31m-      "integrity": "sha512-tIbYtZbucOs0BRGqPJkshJUYdL+SDH7dVM8gjy+ERp3WAUjLEFJE+02kanyHtwjWOnwrKYBiwAmM0p4kLJAnXg==",[m
[32m+[m[32m    "node_modules/escape-string-regexp": {[m
[32m+[m[32m      "version": "4.0.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/escape-string-regexp/-/escape-string-regexp-4.0.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-TtpcNJ3XAzx3Gq8sWRzJaVajRs0uVxA2YAkdb1jm2YkPz4G6egUFAyA3n5vtEIZefPk5Wa4UXbKuS5fKkJWdgA==",[m
       "dev": true,[m
[31m-      "peer": true,[m
       "engines": {[m
[31m-        "node": ">=12.0.0"[m
[32m+[m[32m        "node": ">=10"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://github.com/sponsors/sindresorhus"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/eslint": {[m
[32m+[m[32m      "version": "9.34.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/eslint/-/eslint-9.34.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-RNCHRX5EwdrESy3Jc9o8ie8Bog+PeYvvSR8sDGoZxNFTvZ4dlxUB3WzQ3bQMztFrSRODGrLLj8g6OFuGY/aiQg==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@eslint-community/eslint-utils": "^4.2.0",[m
[32m+[m[32m        "@eslint-community/regexpp": "^4.12.1",[m
[32m+[m[32m        "@eslint/config-array": "^0.21.0",[m
[32m+[m[32m        "@eslint/config-helpers": "^0.3.1",[m
[32m+[m[32m        "@eslint/core": "^0.15.2",[m
[32m+[m[32m        "@eslint/eslintrc": "^3.3.1",[m
[32m+[m[32m        "@eslint/js": "9.34.0",[m
[32m+[m[32m        "@eslint/plugin-kit": "^0.3.5",[m
[32m+[m[32m        "@humanfs/node": "^0.16.6",[m
[32m+[m[32m        "@humanwhocodes/module-importer": "^1.0.1",[m
[32m+[m[32m        "@humanwhocodes/retry": "^0.4.2",[m
[32m+[m[32m        "@types/estree": "^1.0.6",[m
[32m+[m[32m        "@types/json-schema": "^7.0.15",[m
[32m+[m[32m        "ajv": "^6.12.4",[m
[32m+[m[32m        "chalk": "^4.0.0",[m
[32m+[m[32m        "cross-spawn": "^7.0.6",[m
[32m+[m[32m        "debug": "^4.3.2",[m
[32m+[m[32m        "escape-string-regexp": "^4.0.0",[m
[32m+[m[32m        "eslint-scope": "^8.4.0",[m
[32m+[m[32m        "eslint-visitor-keys": "^4.2.1",[m
[32m+[m[32m        "espree": "^10.4.0",[m
[32m+[m[32m        "esquery": "^1.5.0",[m
[32m+[m[32m        "esutils": "^2.0.2",[m
[32m+[m[32m        "fast-deep-equal": "^3.1.3",[m
[32m+[m[32m        "file-entry-cache": "^8.0.0",[m
[32m+[m[32m        "find-up": "^5.0.0",[m
[32m+[m[32m        "glob-parent": "^6.0.2",[m
[32m+[m[32m        "ignore": "^5.2.0",[m
[32m+[m[32m        "imurmurhash": "^0.1.4",[m
[32m+[m[32m        "is-glob": "^4.0.0",[m
[32m+[m[32m        "json-stable-stringify-without-jsonify": "^1.0.1",[m
[32m+[m[32m        "lodash.merge": "^4.6.2",[m
[32m+[m[32m        "minimatch": "^3.1.2",[m
[32m+[m[32m        "natural-compare": "^1.4.0",[m
[32m+[m[32m        "optionator": "^0.9.3"[m
[32m+[m[32m      },[m
[32m+[m[32m      "bin": {[m
[32m+[m[32m        "eslint": "bin/eslint.js"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": "^18.18.0 || ^20.9.0 || >=21.1.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://eslint.org/donate"[m
       },[m
       "peerDependencies": {[m
[31m-        "picomatch": "^3 || ^4"[m
[32m+[m[32m        "jiti": "*"[m
       },[m
       "peerDependenciesMeta": {[m
[31m-        "picomatch": {[m
[32m+[m[32m        "jiti": {[m
           "optional": true[m
         }[m
       }[m
     },[m
[31m-    "node_modules/fraction.js": {[m
[31m-      "version": "4.3.7",[m
[31m-      "resolved": "https://registry.npmjs.org/fraction.js/-/fraction.js-4.3.7.tgz",[m
[32m+[m[32m    "node_modules/eslint-plugin-react-hooks": {[m
[32m+[m[32m      "version": "5.2.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/eslint-plugin-react-hooks/-/eslint-plugin-react-hooks-5.2.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-+f15FfK64YQwZdJNELETdn5ibXEUQmW1DZL6KXhNnc2heoy/sg9VJJeT7n8TlMWouzWqSWavFkIhHyIbIAEapg==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=10"[m
[32m+[m[32m      },[m
[32m+[m[32m      "peerDependencies": {[m
[32m+[m[32m        "eslint": "^3.0.0 || ^4.0.0 || ^5.0.0 || ^6.0.0 || ^7.0.0 || ^8.0.0-0 || ^9.0.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/eslint-plugin-react-refresh": {[m
[32m+[m[32m      "version": "0.4.20",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/eslint-plugin-react-refresh/-/eslint-plugin-react-refresh-0.4.20.tgz",[m
[32m+[m[32m      "integrity": "sha512-XpbHQ2q5gUF8BGOX4dHe+71qoirYMhApEPZ7sfhF/dNnOF1UXnCMGZf79SFTBO7Bz5YEIT4TMieSlJBWhP9WBA==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "peerDependencies": {[m
[32m+[m[32m        "eslint": ">=8.40"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/eslint-scope": {[m
[32m+[m[32m      "version": "8.4.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/eslint-scope/-/eslint-scope-8.4.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-sNXOfKCn74rt8RICKMvJS7XKV/Xk9kA7DyJr8mJik3S7Cwgy3qlkkmyS2uQB3jiJg6VNdZd/pDBJu0nvG2NlTg==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "esrecurse": "^4.3.0",[m
[32m+[m[32m        "estraverse": "^5.2.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": "^18.18.0 || ^20.9.0 || >=21.1.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://opencollective.com/eslint"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/eslint-visitor-keys": {[m
[32m+[m[32m      "version": "4.2.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/eslint-visitor-keys/-/eslint-visitor-keys-4.2.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-Uhdk5sfqcee/9H/rCOJikYz67o0a2Tw2hGRPOG2Y1R2dg7brRe1uG0yaNQDHu+TO/uQPF/5eCapvYSmHUjt7JQ==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": "^18.18.0 || ^20.9.0 || >=21.1.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://opencollective.com/eslint"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/espree": {[m
[32m+[m[32m      "version": "10.4.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/espree/-/espree-10.4.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-j6PAQ2uUr79PZhBjP5C5fhl8e39FmRnOjsD5lGnWrFU8i2G776tBK7+nP8KuQUTTyAZUwfQqXAgrVH5MbH9CYQ==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "acorn": "^8.15.0",[m
[32m+[m[32m        "acorn-jsx": "^5.3.2",[m
[32m+[m[32m        "eslint-visitor-keys": "^4.2.1"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": "^18.18.0 || ^20.9.0 || >=21.1.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://opencollective.com/eslint"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/esquery": {[m
[32m+[m[32m      "version": "1.6.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/esquery/-/esquery-1.6.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-ca9pw9fomFcKPvFLXhBKUK90ZvGibiGOvRJNbjljY7s7uq/5YO4BOzcYtJqExdx99rF6aAcnRxHmcUHcz6sQsg==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "estraverse": "^5.1.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=0.10"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/esrecurse": {[m
[32m+[m[32m      "version": "4.3.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/esrecurse/-/esrecurse-4.3.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-KmfKL3b6G+RXvP8N1vr3Tq1kL/oCFgn2NYXEtqP8/L3pKapUA4G8cFVaoF3SU323CD4XypR/ffioHmkti6/Tag==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "estraverse": "^5.2.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=4.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/estraverse": {[m
[32m+[m[32m      "version": "5.3.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/estraverse/-/estraverse-5.3.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-MMdARuVEQziNTeJD8DgMqmhwR11BRQ/cBP+pLtYdSTnf3MIO8fFeiINEbX36ZdNlfU/7A9f3gUw49B3oQsvwBA==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=4.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/esutils": {[m
[32m+[m[32m      "version": "2.0.3",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/esutils/-/esutils-2.0.3.tgz",[m
[32m+[m[32m      "integrity": "sha512-kVscqXk4OCp68SZ0dkgEKVi6/8ij300KBWTJq32P/dYeWTSwK41WyTxalN1eRmA5Z9UU/LX9D7FWSmV9SAYx6g==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=0.10.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/fast-deep-equal": {[m
[32m+[m[32m      "version": "3.1.3",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/fast-deep-equal/-/fast-deep-equal-3.1.3.tgz",[m
[32m+[m[32m      "integrity": "sha512-f3qQ9oQy9j2AhBe/H9VC91wLmKBCCU/gDOnKNAYG5hswO7BLKj09Hc5HYNz9cGI++xlpDCIgDaitVs03ATR84Q==",[m
[32m+[m[32m      "dev": true[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/fast-json-stable-stringify": {[m
[32m+[m[32m      "version": "2.1.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/fast-json-stable-stringify/-/fast-json-stable-stringify-2.1.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-lhd/wF+Lk98HZoTCtlVraHtfh5XYijIjalXck7saUtuanSDyLMxnHhSXEDJqHxD7msR8D0uCmqlkwjCV8xvwHw==",[m
[32m+[m[32m      "dev": true[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/fast-levenshtein": {[m
[32m+[m[32m      "version": "2.0.6",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/fast-levenshtein/-/fast-levenshtein-2.0.6.tgz",[m
[32m+[m[32m      "integrity": "sha512-DCXu6Ifhqcks7TZKY3Hxp3y6qphY5SJZmrWMDrKcERSOXWQdMhU9Ig/PYrzyw/ul9jOIyh0N4M0tbC5hodg8dw==",[m
[32m+[m[32m      "dev": true[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/fdir": {[m
[32m+[m[32m      "version": "6.5.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/fdir/-/fdir-6.5.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-tIbYtZbucOs0BRGqPJkshJUYdL+SDH7dVM8gjy+ERp3WAUjLEFJE+02kanyHtwjWOnwrKYBiwAmM0p4kLJAnXg==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=12.0.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "peerDependencies": {[m
[32m+[m[32m        "picomatch": "^3 || ^4"[m
[32m+[m[32m      },[m
[32m+[m[32m      "peerDependenciesMeta": {[m
[32m+[m[32m        "picomatch": {[m
[32m+[m[32m          "optional": true[m
[32m+[m[32m        }[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/file-entry-cache": {[m
[32m+[m[32m      "version": "8.0.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/file-entry-cache/-/file-entry-cache-8.0.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-XXTUwCvisa5oacNGRP9SfNtYBNAMi+RPwBFmblZEF7N7swHYQS6/Zfk7SRwx4D5j3CH211YNRco1DEMNVfZCnQ==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "flat-cache": "^4.0.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=16.0.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/find-up": {[m
[32m+[m[32m      "version": "5.0.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/find-up/-/find-up-5.0.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-78/PXT1wlLLDgTzDs7sjq9hzz0vXD+zn+7wypEe4fXQxCmdmqfGsEPQxmiCSQI3ajFV91bVSsvNtrJRiW6nGng==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "locate-path": "^6.0.0",[m
[32m+[m[32m        "path-exists": "^4.0.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=10"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://github.com/sponsors/sindresorhus"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/flat-cache": {[m
[32m+[m[32m      "version": "4.0.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/flat-cache/-/flat-cache-4.0.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-f7ccFPK3SXFHpx15UIGyRJ/FJQctuKZ0zVuN3frBo4HnK3cay9VEW0R6yPYFHC0AgqhukPzKjq22t5DmAyqGyw==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "flatted": "^3.2.9",[m
[32m+[m[32m        "keyv": "^4.5.4"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=16"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/flatted": {[m
[32m+[m[32m      "version": "3.3.3",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/flatted/-/flatted-3.3.3.tgz",[m
[32m+[m[32m      "integrity": "sha512-GX+ysw4PBCz0PzosHDepZGANEuFCMLrnRTiEy9McGjmkCQYwRq4A/X786G/fjM/+OjsWSU1ZrY5qyARZmO/uwg==",[m
[32m+[m[32m      "dev": true[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/fraction.js": {[m
[32m+[m[32m      "version": "4.3.7",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/fraction.js/-/fraction.js-4.3.7.tgz",[m
       "integrity": "sha512-ZsDfxO51wGAXREY55a7la9LScWpwv9RxIrYABrlvOFBlH/ShPnrtsXeuUIfXKKOVicNxQ+o8JTbJvjS4M89yew==",[m
       "dev": true,[m
       "engines": {[m
[36m@@ -1783,7 +2347,6 @@[m
       "os": [[m
         "darwin"[m
       ],[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": "^8.16.0 || ^10.6.0 || >=11.0.0"[m
       }[m
[36m@@ -1797,12 +2360,106 @@[m
         "node": ">=6.9.0"[m
       }[m
     },[m
[32m+[m[32m    "node_modules/glob-parent": {[m
[32m+[m[32m      "version": "6.0.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/glob-parent/-/glob-parent-6.0.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-XxwI8EOhVQgWp6iDL+3b0r86f4d6AX6zSU55HfB4ydCEuXLXc5FcYeOu+nnGftS4TEju/11rt4KJPTMgbfmv4A==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "is-glob": "^4.0.3"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=10.13.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/globals": {[m
[32m+[m[32m      "version": "16.3.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/globals/-/globals-16.3.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-bqWEnJ1Nt3neqx2q5SFfGS8r/ahumIakg3HcwtNlrVlwXIeNumWn/c7Pn/wKzGhf6SaW6H6uWXLqC30STCMchQ==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=18"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://github.com/sponsors/sindresorhus"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
     "node_modules/graceful-fs": {[m
       "version": "4.2.11",[m
       "resolved": "https://registry.npmjs.org/graceful-fs/-/graceful-fs-4.2.11.tgz",[m
       "integrity": "sha512-RbJ5/jmFcNNCcDV5o9eTnBLJ/HszWV0P73bc+Ff4nS/rJj+YaS6IGyiOL0VoBYX+l1Wrl3k63h/KrH+nhJ0XvQ==",[m
       "dev": true[m
     },[m
[32m+[m[32m    "node_modules/has-flag": {[m
[32m+[m[32m      "version": "4.0.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/has-flag/-/has-flag-4.0.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-EykJT/Q1KjTWctppgIAgfSO0tKVuZUjhgMr17kqTumMl6Afv3EISleU7qZUzoXDFTAHTDC4NOoG/ZxU3EvlMPQ==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=8"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/ignore": {[m
[32m+[m[32m      "version": "5.3.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/ignore/-/ignore-5.3.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-hsBTNUqQTDwkWtcdYI2i06Y/nUBEsNEDJKjWdigLvegy8kDuJAS8uRlpkkcQpyEXL0Z/pjDy5HBmMjRCJ2gq+g==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">= 4"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/import-fresh": {[m
[32m+[m[32m      "version": "3.3.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/import-fresh/-/import-fresh-3.3.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-TR3KfrTZTYLPB6jUjfx6MF9WcWrHL9su5TObK4ZkYgBdWKPOFoSoQIdEuTuR82pmtxH2spWG9h6etwfr1pLBqQ==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "parent-module": "^1.0.0",[m
[32m+[m[32m        "resolve-from": "^4.0.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=6"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://github.com/sponsors/sindresorhus"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/imurmurhash": {[m
[32m+[m[32m      "version": "0.1.4",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/imurmurhash/-/imurmurhash-0.1.4.tgz",[m
[32m+[m[32m      "integrity": "sha512-JmXMZ6wuvDmLiHEml9ykzqO6lwFbof0GG4IkcGaENdCRDDmMVnny7s5HsIgHCbaq0w2MyPhDqkhTUgS2LU2PHA==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=0.8.19"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/is-extglob": {[m
[32m+[m[32m      "version": "2.1.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/is-extglob/-/is-extglob-2.1.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-SbKbANkN603Vi4jEZv49LeVJMn4yGwsbzZworEoyEiutsN3nJYdbO36zfhGJ6QEDpOZIFkDtnq5JRxmvl3jsoQ==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=0.10.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/is-glob": {[m
[32m+[m[32m      "version": "4.0.3",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/is-glob/-/is-glob-4.0.3.tgz",[m
[32m+[m[32m      "integrity": "sha512-xelSayHH36ZgE7ZWhli7pW34hNbNl8Ojv5KVmkJD4hBdD3th8Tfk9vYasLM+mXWOZhFkgZfxhLSnrwRr4elSSg==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "is-extglob": "^2.1.1"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=0.10.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/isexe": {[m
[32m+[m[32m      "version": "2.0.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/isexe/-/isexe-2.0.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-RHxMLp9lnKHGHRng9QFhRCMbYAcVpn69smSGcq3f36xjgVVWThj4qqLbTLlq7Ssj8B+fIQ1EuCEGI2lKsyQeIw==",[m
[32m+[m[32m      "dev": true[m
[32m+[m[32m    },[m
     "node_modules/jiti": {[m
       "version": "2.5.1",[m
       "resolved": "https://registry.npmjs.org/jiti/-/jiti-2.5.1.tgz",[m
[36m@@ -1818,6 +2475,18 @@[m
       "integrity": "sha512-RdJUflcE3cUzKiMqQgsCu06FPu9UdIJO0beYbPhHN4k6apgJtifcoCtT9bcxOpYBtpD2kCM6Sbzg4CausW/PKQ==",[m
       "dev": true[m
     },[m
[32m+[m[32m    "node_modules/js-yaml": {[m
[32m+[m[32m      "version": "4.1.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/js-yaml/-/js-yaml-4.1.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-wpxZs9NoxZaJESJGIZTyDEaYpl0FKSA+FB9aJiyemKhMwkxQg63h4T1KJgUGHpTqPDNRcmmYLugrRjJlBtWvRA==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "argparse": "^2.0.1"[m
[32m+[m[32m      },[m
[32m+[m[32m      "bin": {[m
[32m+[m[32m        "js-yaml": "bin/js-yaml.js"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
     "node_modules/jsesc": {[m
       "version": "3.1.0",[m
       "resolved": "https://registry.npmjs.org/jsesc/-/jsesc-3.1.0.tgz",[m
[36m@@ -1830,6 +2499,24 @@[m
         "node": ">=6"[m
       }[m
     },[m
[32m+[m[32m    "node_modules/json-buffer": {[m
[32m+[m[32m      "version": "3.0.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/json-buffer/-/json-buffer-3.0.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-4bV5BfR2mqfQTJm+V5tPPdf+ZpuhiIvTuAB5g8kcrXOZpTT/QwwVRWBywX1ozr6lEuPdbHxwaJlm9G6mI2sfSQ==",[m
[32m+[m[32m      "dev": true[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/json-schema-traverse": {[m
[32m+[m[32m      "version": "0.4.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/json-schema-traverse/-/json-schema-traverse-0.4.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-xbbCH5dCYU5T8LcEhhuh7HJ88HXuW3qsI3Y0zOZFKfZEHcpWiHU/Jxzk629Brsab/mMiHQti9wMP+845RPe3Vg==",[m
[32m+[m[32m      "dev": true[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/json-stable-stringify-without-jsonify": {[m
[32m+[m[32m      "version": "1.0.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/json-stable-stringify-without-jsonify/-/json-stable-stringify-without-jsonify-1.0.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-Bdboy+l7tA3OGW6FjyFHWkP5LuByj1Tk33Ljyq0axyzdk9//JSi2u3fP1QSmd1KNwq6VOKYGlAu87CisVir6Pw==",[m
[32m+[m[32m      "dev": true[m
[32m+[m[32m    },[m
     "node_modules/json5": {[m
       "version": "2.2.3",[m
       "resolved": "https://registry.npmjs.org/json5/-/json5-2.2.3.tgz",[m
[36m@@ -1842,6 +2529,28 @@[m
         "node": ">=6"[m
       }[m
     },[m
[32m+[m[32m    "node_modules/keyv": {[m
[32m+[m[32m      "version": "4.5.4",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/keyv/-/keyv-4.5.4.tgz",[m
[32m+[m[32m      "integrity": "sha512-oxVHkHR/EJf2CNXnWxRLW6mg7JyCCUcG0DtEGmL2ctUo1PNTin1PUil+r/+4r5MpVgC/fn1kjsx7mjSujKqIpw==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "json-buffer": "3.0.1"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/levn": {[m
[32m+[m[32m      "version": "0.4.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/levn/-/levn-0.4.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-+bT2uH4E5LGE7h/n3evcS/sQlJXCpIp6ym8OWJ5eV6+67Dsql/LaaT7qJBAt2rzfoa/5QBGBhxDix1dMt2kQKQ==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "prelude-ls": "^1.2.1",[m
[32m+[m[32m        "type-check": "~0.4.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">= 0.8.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
     "node_modules/lightningcss": {[m
       "version": "1.30.1",[m
       "resolved": "https://registry.npmjs.org/lightningcss/-/lightningcss-1.30.1.tgz",[m
[36m@@ -2070,6 +2779,27 @@[m
         "url": "https://opencollective.com/parcel"[m
       }[m
     },[m
[32m+[m[32m    "node_modules/locate-path": {[m
[32m+[m[32m      "version": "6.0.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/locate-path/-/locate-path-6.0.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-iPZK6eYjbxRu3uB4/WZ3EsEIMJFMqAoopl3R+zuq0UjcAm/MO6KCweDgPfP3elTztoKP3KtnVHxTn2NHBSDVUw==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "p-locate": "^5.0.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=10"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://github.com/sponsors/sindresorhus"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/lodash.merge": {[m
[32m+[m[32m      "version": "4.6.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/lodash.merge/-/lodash.merge-4.6.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-0KpjqXRVvrYyCsX1swR/XTK0va6VQkQM6MNo7PqW77ByjAhoARA8EfrP1N4+KlKj8YS0ZUCtRT/YUuhyYDujIQ==",[m
[32m+[m[32m      "dev": true[m
[32m+[m[32m    },[m
     "node_modules/lru-cache": {[m
       "version": "5.1.1",[m
       "resolved": "https://registry.npmjs.org/lru-cache/-/lru-cache-5.1.1.tgz",[m
[36m@@ -2096,6 +2826,18 @@[m
         "@jridgewell/sourcemap-codec": "^1.5.5"[m
       }[m
     },[m
[32m+[m[32m    "node_modules/minimatch": {[m
[32m+[m[32m      "version": "3.1.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/minimatch/-/minimatch-3.1.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-J7p63hRiAjw1NDEww1W7i37+ByIrOWO5XQQAzZ3VOcL0PNybwpfmV/N05zFAzwQ9USyEcX6t3UO+K5aqBQOIHw==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "brace-expansion": "^1.1.7"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": "*"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
     "node_modules/minipass": {[m
       "version": "7.1.2",[m
       "resolved": "https://registry.npmjs.org/minipass/-/minipass-7.1.2.tgz",[m
[36m@@ -2169,6 +2911,12 @@[m
         "node": "^10 || ^12 || ^13.7 || ^14 || >=15.0.1"[m
       }[m
     },[m
[32m+[m[32m    "node_modules/natural-compare": {[m
[32m+[m[32m      "version": "1.4.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/natural-compare/-/natural-compare-1.4.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-OWND8ei3VtNC9h7V60qff3SVobHr996CTwgxubgyQYEpg290h9J0buyECNNJexkFm5sOajh5G116RYA1c8ZMSw==",[m
[32m+[m[32m      "dev": true[m
[32m+[m[32m    },[m
     "node_modules/node-releases": {[m
       "version": "2.0.19",[m
       "resolved": "https://registry.npmjs.org/node-releases/-/node-releases-2.0.19.tgz",[m
[36m@@ -2184,6 +2932,83 @@[m
         "node": ">=0.10.0"[m
       }[m
     },[m
[32m+[m[32m    "node_modules/optionator": {[m
[32m+[m[32m      "version": "0.9.4",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/optionator/-/optionator-0.9.4.tgz",[m
[32m+[m[32m      "integrity": "sha512-6IpQ7mKUxRcZNLIObR0hz7lxsapSSIYNZJwXPGeF0mTVqGKFIXj1DQcMoT22S3ROcLyY/rz0PWaWZ9ayWmad9g==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "deep-is": "^0.1.3",[m
[32m+[m[32m        "fast-levenshtein": "^2.0.6",[m
[32m+[m[32m        "levn": "^0.4.1",[m
[32m+[m[32m        "prelude-ls": "^1.2.1",[m
[32m+[m[32m        "type-check": "^0.4.0",[m
[32m+[m[32m        "word-wrap": "^1.2.5"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">= 0.8.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/p-limit": {[m
[32m+[m[32m      "version": "3.1.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/p-limit/-/p-limit-3.1.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-TYOanM3wGwNGsZN2cVTYPArw454xnXj5qmWF1bEoAc4+cU/ol7GVh7odevjp1FNHduHc3KZMcFduxU5Xc6uJRQ==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "yocto-queue": "^0.1.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=10"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://github.com/sponsors/sindresorhus"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/p-locate": {[m
[32m+[m[32m      "version": "5.0.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/p-locate/-/p-locate-5.0.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-LaNjtRWUBY++zB5nE/NwcaoMylSPk+S+ZHNB1TzdbMJMny6dynpAGt7X/tl/QYq3TIeE6nxHppbo2LGymrG5Pw==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "p-limit": "^3.0.2"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=10"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://github.com/sponsors/sindresorhus"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/parent-module": {[m
[32m+[m[32m      "version": "1.0.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/parent-module/-/parent-module-1.0.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-GQ2EWRpQV8/o+Aw8YqtfZZPfNRWZYkbidE9k5rpl/hC3vtHHBfGm2Ifi6qWV+coDGkrUKZAxE3Lot5kcsRlh+g==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "callsites": "^3.0.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=6"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/path-exists": {[m
[32m+[m[32m      "version": "4.0.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/path-exists/-/path-exists-4.0.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-ak9Qy5Q7jYb2Wwcey5Fpvg2KoAc/ZIhLSLOSBmRmygPsGwkVVt0fZa0qrtMz+m6tJTAHfZQ8FnmB4MG4LWy7/w==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=8"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/path-key": {[m
[32m+[m[32m      "version": "3.1.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/path-key/-/path-key-3.1.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-ojmeN0qd+y0jszEtoY48r0Peq5dwMEkIlCOu6Q5f41lfkswXuKtYrhgoTpLnyIcHm24Uhqx+5Tqm2InSwLhE6Q==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=8"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
     "node_modules/picocolors": {[m
       "version": "1.1.1",[m
       "resolved": "https://registry.npmjs.org/picocolors/-/picocolors-1.1.1.tgz",[m
[36m@@ -2195,7 +3020,6 @@[m
       "resolved": "https://registry.npmjs.org/picomatch/-/picomatch-4.0.3.tgz",[m
       "integrity": "sha512-5gTmgEY/sqK6gFXLIsQNH19lWb4ebPDLA4SdLP7dsWkIXHWlG66oPuVvXSGFPppYZz8ZDZq0dYYrbHfBCVUb1Q==",[m
       "dev": true,[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=12"[m
       },[m
[36m@@ -2237,11 +3061,28 @@[m
       "integrity": "sha512-1NNCs6uurfkVbeXG4S8JFT9t19m45ICnif8zWLd5oPSZ50QnwMfK+H3jv408d4jw/7Bttv5axS5IiHoLaVNHeQ==",[m
       "dev": true[m
     },[m
[32m+[m[32m    "node_modules/prelude-ls": {[m
[32m+[m[32m      "version": "1.2.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/prelude-ls/-/prelude-ls-1.2.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-vkcDPrRZo1QZLbn5RLGPpg/WmIQ65qoWWhcGKf/b5eplkkarX0m9z8ppCat4mlOqUsWpyNuYgO3VRyrYHSzX5g==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">= 0.8.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/punycode": {[m
[32m+[m[32m      "version": "2.3.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/punycode/-/punycode-2.3.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-vYt7UD1U9Wg6138shLtLOvdAu+8DsC/ilFtEVHcH+wydcSpNE20AfSOduf6MkRFahL5FY7X1oU7nKVZFtfq8Fg==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=6"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
     "node_modules/react": {[m
       "version": "19.1.1",[m
       "resolved": "https://registry.npmjs.org/react/-/react-19.1.1.tgz",[m
       "integrity": "sha512-w8nqGImo45dmMIfljjMwOGtbmC/mk4CMYhWIicdSflH91J9TyCyczcPFXJzrZ/ZXcgGRFeP6BU0BEJTw6tZdfQ==",[m
[31m-      "peer": true,[m
       "engines": {[m
         "node": ">=0.10.0"[m
       }[m
[36m@@ -2250,7 +3091,6 @@[m
       "version": "19.1.1",[m
       "resolved": "https://registry.npmjs.org/react-dom/-/react-dom-19.1.1.tgz",[m
       "integrity": "sha512-Dlq/5LAZgF0Gaz6yiqZCf6VCcZs1ghAJyrsu84Q/GT0gV+mCxbfmKNoGRKBYMJ8IEdGPqu49YWXD02GCknEDkw==",[m
[31m-      "peer": true,[m
       "dependencies": {[m
         "scheduler": "^0.26.0"[m
       },[m
[36m@@ -2303,12 +3143,20 @@[m
         "react-dom": ">=18"[m
       }[m
     },[m
[32m+[m[32m    "node_modules/resolve-from": {[m
[32m+[m[32m      "version": "4.0.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/resolve-from/-/resolve-from-4.0.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-pb/MYmXstAkysRFx8piNI1tGFNQIFA3vkE3Gq4EuA1dF6gHp/+vgZqsCGJapvy8N3Q+4o7FwvquPJcnZ7RYy4g==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=4"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
     "node_modules/rollup": {[m
       "version": "4.49.0",[m
       "resolved": "https://registry.npmjs.org/rollup/-/rollup-4.49.0.tgz",[m
       "integrity": "sha512-3IVq0cGJ6H7fKXXEdVt+RcYvRCt8beYY9K1760wGQwSAHZcS9eot1zDG5axUbcp/kWRi5zKIIDX8MoKv/TzvZA==",[m
       "dev": true,[m
[31m-      "peer": true,[m
       "dependencies": {[m
         "@types/estree": "1.0.8"[m
       },[m
[36m@@ -2343,11 +3191,14 @@[m
         "fsevents": "~2.3.2"[m
       }[m
     },[m
[32m+[m[32m    "node_modules/rooted-visions-web": {[m
[32m+[m[32m      "resolved": "web",[m
[32m+[m[32m      "link": true[m
[32m+[m[32m    },[m
     "node_modules/scheduler": {[m
       "version": "0.26.0",[m
       "resolved": "https://registry.npmjs.org/scheduler/-/scheduler-0.26.0.tgz",[m
[31m-      "integrity": "sha512-NlHwttCI/l5gCPR3D1nNXtWABUmBwvZpEQiD4IXSbIDq8BzLIK/7Ir5gTFSGZDUu37K5cMNp0hFtzO38sC7gWA==",[m
[31m-      "peer": true[m
[32m+[m[32m      "integrity": "sha512-NlHwttCI/l5gCPR3D1nNXtWABUmBwvZpEQiD4IXSbIDq8BzLIK/7Ir5gTFSGZDUu37K5cMNp0hFtzO38sC7gWA=="[m
     },[m
     "node_modules/semver": {[m
       "version": "6.3.1",[m
[36m@@ -2363,6 +3214,27 @@[m
       "resolved": "https://registry.npmjs.org/set-cookie-parser/-/set-cookie-parser-2.7.1.tgz",[m
       "integrity": "sha512-IOc8uWeOZgnb3ptbCURJWNjWUPcO3ZnTTdzsurqERrP6nPyv+paC55vJM0LpOlT2ne+Ix+9+CRG1MNLlyZ4GjQ=="[m
     },[m
[32m+[m[32m    "node_modules/shebang-command": {[m
[32m+[m[32m      "version": "2.0.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/shebang-command/-/shebang-command-2.0.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-kHxr2zZpYtdmrN1qDjrrX/Z1rR1kG8Dx+gkpK1G4eXmvXswmcE1hTWBWYUzlraYw1/yZp6YuDY77YtvbN0dmDA==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "shebang-regex": "^3.0.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=8"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/shebang-regex": {[m
[32m+[m[32m      "version": "3.0.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/shebang-regex/-/shebang-regex-3.0.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-7++dFhtcx3353uBaq8DDR4NuxBetBzC7ZQOhmTQInHEd6bSrXdiEyzCvG07Z44UYdLShWUyXt5M/yhz8ekcb1A==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=8"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
     "node_modules/source-map-js": {[m
       "version": "1.2.1",[m
       "resolved": "https://registry.npmjs.org/source-map-js/-/source-map-js-1.2.1.tgz",[m
[36m@@ -2372,6 +3244,30 @@[m
         "node": ">=0.10.0"[m
       }[m
     },[m
[32m+[m[32m    "node_modules/strip-json-comments": {[m
[32m+[m[32m      "version": "3.1.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/strip-json-comments/-/strip-json-comments-3.1.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-6fPc+R4ihwqP6N/aIv2f1gMH8lOVtWQHoqC4yK6oSDVVocumAsfCqjkXnqiYMhmMwS/mEHLp7Vehlt3ql6lEig==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=8"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://github.com/sponsors/sindresorhus"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/supports-color": {[m
[32m+[m[32m      "version": "7.2.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/supports-color/-/supports-color-7.2.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-qpCAvRl9stuOHveKsn7HncJRvv501qIacKzQlO/+Lwxc9+0q2wLyv4Dfvt80/DPn2pqOBsJdDiogXGR9+OvwRw==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "has-flag": "^4.0.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=8"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
     "node_modules/tailwindcss": {[m
       "version": "4.1.12",[m
       "resolved": "https://registry.npmjs.org/tailwindcss/-/tailwindcss-4.1.12.tgz",[m
[36m@@ -2422,7 +3318,6 @@[m
       "resolved": "https://registry.npmjs.org/tinyglobby/-/tinyglobby-0.2.14.tgz",[m
       "integrity": "sha512-tX5e7OM1HnYr2+a2C/4V0htOcSQcoSTH9KgJnVvNm5zm/cyEWKJ7j7YutsH9CxMdtOkkLFy2AHrMci9IM8IPZQ==",[m
       "dev": true,[m
[31m-      "peer": true,[m
       "dependencies": {[m
         "fdir": "^6.4.4",[m
         "picomatch": "^4.0.2"[m
[36m@@ -2444,6 +3339,18 @@[m
       "resolved": "https://registry.npmjs.org/tslib/-/tslib-2.8.1.tgz",[m
       "integrity": "sha512-oJFu94HQb+KVduSUQL7wnpmqnfmLsOA/nAh6b6EH0wCEoK0/mPeXU6c3wKDV83MkOuHPRHtSXKKU99IBazS/2w=="[m
     },[m
[32m+[m[32m    "node_modules/type-check": {[m
[32m+[m[32m      "version": "0.4.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/type-check/-/type-check-0.4.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-XleUoc9uwGXqjWwXaUTZAmzMcFZ5858QA2vvx1Ur5xIcixXIP+8LnFDgRplU30us6teqdlskFfu+ae4K79Ooew==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "prelude-ls": "^1.2.1"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">= 0.8.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
     "node_modules/undici-types": {[m
       "version": "7.10.0",[m
       "resolved": "https://registry.npmjs.org/undici-types/-/undici-types-7.10.0.tgz",[m
[36m@@ -2479,12 +3386,20 @@[m
         "browserslist": ">= 4.21.0"[m
       }[m
     },[m
[32m+[m[32m    "node_modules/uri-js": {[m
[32m+[m[32m      "version": "4.4.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/uri-js/-/uri-js-4.4.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-7rKUyy33Q1yc98pQ1DAmLtwX109F7TIfWlW1Ydo8Wl1ii1SeHieeh0HHfPeL2fMXK6z0s8ecKs9frCuLJvndBg==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "punycode": "^2.1.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
     "node_modules/vite": {[m
       "version": "7.1.3",[m
       "resolved": "https://registry.npmjs.org/vite/-/vite-7.1.3.tgz",[m
       "integrity": "sha512-OOUi5zjkDxYrKhTV3V7iKsoS37VUM7v40+HuwEmcrsf11Cdx9y3DIr2Px6liIcZFwt3XSRpQvFpL3WVy7ApkGw==",[m
       "dev": true,[m
[31m-      "peer": true,[m
       "dependencies": {[m
         "esbuild": "^0.25.0",[m
         "fdir": "^6.5.0",[m
[36m@@ -2568,6 +3483,30 @@[m
         "webidl-conversions": "^3.0.0"[m
       }[m
     },[m
[32m+[m[32m    "node_modules/which": {[m
[32m+[m[32m      "version": "2.0.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/which/-/which-2.0.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-BLI3Tl1TW3Pvl70l3yq3Y64i+awpwXqsGBYWkkqMtnbXgrMD+yj7rhW0kuEDxzJaYXGjEW5ogapKNMEKNMjibA==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "isexe": "^2.0.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "bin": {[m
[32m+[m[32m        "node-which": "bin/node-which"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">= 8"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/word-wrap": {[m
[32m+[m[32m      "version": "1.2.5",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/word-wrap/-/word-wrap-1.2.5.tgz",[m
[32m+[m[32m      "integrity": "sha512-BN22B5eaMMI9UMtjrGd5g5eCYPpCPDUy0FJXbYsaT5zYxjFOckS53SQDE3pWkVoWpHXVb3BrYcEN4Twa55B5cA==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=0.10.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
     "node_modules/ws": {[m
       "version": "8.18.3",[m
       "resolved": "https://registry.npmjs.org/ws/-/ws-8.18.3.tgz",[m
[36m@@ -2593,6 +3532,45 @@[m
       "resolved": "https://registry.npmjs.org/yallist/-/yallist-3.1.1.tgz",[m
       "integrity": "sha512-a4UGQaWPH59mOXUYnAG2ewncQS4i4F43Tv3JoAM+s2VDAmS9NsK8GpDMLrCHPksFT7h3K6TOoUNn2pb7RoXx4g==",[m
       "dev": true[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/yocto-queue": {[m
[32m+[m[32m      "version": "0.1.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/yocto-queue/-/yocto-queue-0.1.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-rVksvsnNCdJ/ohGc6xgPwyN8eheCxsiLM8mxuE/t/mOVqJewPuO1miLpTHQiRgTKCLexL4MeAFVagts7HmNZ2Q==",[m
[32m+[m[32m      "dev": true,[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=10"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://github.com/sponsors/sindresorhus"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "web": {[m
[32m+[m[32m      "name": "rooted-visions-web",[m
[32m+[m[32m      "version": "0.0.0",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@supabase/supabase-js": "^2.56.1",[m
[32m+[m[32m        "framer-motion": "^12.23.12",[m
[32m+[m[32m        "lucide-react": "^0.542.0",[m
[32m+[m[32m        "react": "^19.1.1",[m
[32m+[m[32m        "react-dom": "^19.1.1",[m
[32m+[m[32m        "react-router-dom": "^7.8.2"[m
[32m+[m[32m      },[m
[32m+[m[32m      "devDependencies": {[m
[32m+[m[32m        "@eslint/js": "^9.33.0",[m
[32m+[m[32m        "@tailwindcss/postcss": "^4.1.12",[m
[32m+[m[32m        "@types/react": "^19.1.10",[m
[32m+[m[32m        "@types/react-dom": "^19.1.7",[m
[32m+[m[32m        "@vitejs/plugin-react": "^5.0.2",[m
[32m+[m[32m        "autoprefixer": "^10.4.21",[m
[32m+[m[32m        "eslint": "^9.33.0",[m
[32m+[m[32m        "eslint-plugin-react-hooks": "^5.2.0",[m
[32m+[m[32m        "eslint-plugin-react-refresh": "^0.4.20",[m
[32m+[m[32m        "globals": "^16.3.0",[m
[32m+[m[32m        "postcss": "^8.5.6",[m
[32m+[m[32m        "tailwindcss": "^4.1.12",[m
[32m+[m[32m        "vite": "^7.1.2"[m
[32m+[m[32m      }[m
     }[m
   }[m
 }[m
[1mdiff --git a/package.json b/package.json[m
[1mindex 614f046..c59f7ef 100644[m
[1m--- a/package.json[m
[1m+++ b/package.json[m
[36m@@ -1,15 +1,12 @@[m
 {[m
[31m-  "dependencies": {[m
[31m-    "@supabase/supabase-js": "^2.56.1",[m
[31m-    "framer-motion": "^12.23.12",[m
[31m-    "lucide-react": "^0.542.0",[m
[31m-    "react-router-dom": "^7.8.2"[m
[31m-  },[m
[31m-  "devDependencies": {[m
[31m-    "@tailwindcss/postcss": "^4.1.12",[m
[31m-    "@vitejs/plugin-react": "^5.0.2",[m
[31m-    "autoprefixer": "^10.4.21",[m
[31m-    "postcss": "^8.5.6",[m
[31m-    "tailwindcss": "^4.1.12"[m
[32m+[m[32m  "name": "rooted-visions-site",[m
[32m+[m[32m  "private": true,[m
[32m+[m[32m  "version": "0.0.0",[m
[32m+[m[32m  "type": "module",[m
[32m+[m[32m  "scripts": {[m
[32m+[m[32m    "dev": "npm --prefix web run dev",[m
[32m+[m[32m    "build": "npm --prefix web run build",[m
[32m+[m[32m    "preview": "npm --prefix web run preview",[m
[32m+[m[32m    "check": "node web/scripts/check-env.mjs"[m
   }[m
 }[m
[1mdiff --git a/web/404.html b/web/404.html[m
[1mindex 0c589ec..9026ee7 100644[m
[1m--- a/web/404.html[m
[1m+++ b/web/404.html[m
[36m@@ -1,13 +1 @@[m
[31m-<!doctype html>[m
[31m-<html lang="en">[m
[31m-  <head>[m
[31m-    <meta charset="UTF-8" />[m
[31m-    <link rel="icon" type="image/svg+xml" href="/vite.svg" />[m
[31m-    <meta name="viewport" content="width=device-width, initial-scale=1.0" />[m
[31m-    <title>Vite + React</title>[m
[31m-  </head>[m
[31m-  <body>[m
[31m-    <div id="root"></div>[m
[31m-    <script type="module" src="/src/main.jsx"></script>[m
[31m-  </body>[m
[31m-</html>[m
[32m+[m[32m<!doctype html><html><head><meta charset="utf-8"><meta http-equiv="refresh" content="0; URL=/rooted-visions-site/"></head><body></body></html>[m
[1mdiff --git a/web/index.html b/web/index.html[m
[1mindex 7246940..1af2f98 100644[m
[1m--- a/web/index.html[m
[1m+++ b/web/index.html[m
[36m@@ -1,20 +1,26 @@[m
[31m-<head>[m
[31m-  <meta charset="UTF-8" />[m
[31m-  <meta name="viewport" content="width=device-width, initial-scale=1" />[m
[32m+[m[32m<!doctype html>[m
[32m+[m[32m<html lang="en" class="scroll-smooth">[m
[32m+[m[32m  <head>[m
[32m+[m[32m    <meta charset="UTF-8" />[m
[32m+[m[32m    <meta name="viewport" content="width=device-width, initial-scale=1" />[m
 [m
[31m-  <title>Rooted Visions — Rooted in Community. Built for the Future.</title>[m
[31m-  <meta name="description" content="Rooted Visions helps schools, nonprofits, and small teams streamline operations with automation, SOPs, and real-time KPIs—without breaking the budget." />[m
[31m-  <meta name="robots" content="index,follow" />[m
[31m-  <meta name="theme-color" content="#059669" />[m
[32m+[m[32m    <title>Rooted Visions — Rooted in Community. Built for the Future.</title>[m
[32m+[m[32m    <meta name="description" content="Rooted Visions helps small teams streamline operations with automation, SOPs, and real-time KPIs—without breaking the budget." />[m
[32m+[m[32m    <meta name="robots" content="index,follow" />[m
[32m+[m[32m    <meta name="theme-color" content="#059669" />[m
 [m
[31m-  <!-- Open Graph / social preview -->[m
[31m-  <meta property="og:type" content="website" />[m
[31m-  <meta property="og:title" content="Rooted Visions — Rooted in Community. Built for the Future." />[m
[31m-  <meta property="og:description" content="Systems that give your team time back: automation, SOPs, and dashboards for schools, nonprofits, and small teams." />[m
[31m-  <meta property="og:image" content="%BASE_URL%og.svg" />[m
[31m-  <meta property="og:url" content="https://nathano091189-design.github.io/rooted-visions-site/" />[m
[31m-  <meta name="twitter:card" content="summary_large_image" />[m
[32m+[m[32m    <!-- Social -->[m
[32m+[m[32m    <meta property="og:type" content="website" />[m
[32m+[m[32m    <meta property="og:title" content="Rooted Visions — Rooted in Community. Built for the Future." />[m
[32m+[m[32m    <meta property="og:description" content="Systems that give your team time back: automation, SOPs, and dashboards." />[m
[32m+[m[32m    <meta property="og:image" content="%BASE_URL%og.svg" />[m
[32m+[m[32m    <meta property="og:url" content="https://nathano091189-design.github.io/rooted-visions-site/" />[m
[32m+[m[32m    <meta name="twitter:card" content="summary_large_image" />[m
 [m
[31m-  <!-- Favicon -->[m
[31m-  <link rel="icon" type="image/svg+xml" href="%BASE_URL%favicon.svg" />[m
[31m-</head>[m
[32m+[m[32m    <link rel="icon" type="image/svg+xml" href="%BASE_URL%favicon.svg" />[m
[32m+[m[32m  </head>[m
[32m+[m[32m  <body>[m
[32m+[m[32m    <div id="root"></div>[m
[32m+[m[32m    <script type="module" src="/src/main.jsx"></script>[m
[32m+[m[32m  </body>[m
[32m+[m[32m</html>[m
[1mdiff --git a/web/package-lock.json b/web/package-lock.json[m
[1mindex 1fd2a6e..ad3c435 100644[m
[1m--- a/web/package-lock.json[m
[1m+++ b/web/package-lock.json[m
[36m@@ -16,33 +16,13 @@[m
         "react-router-dom": "^7.8.2"[m
       },[m
       "devDependencies": {[m
[31m-        "@eslint/js": "^9.33.0",[m
[31m-        "@tailwindcss/postcss": "^4.1.12",[m
[31m-        "@types/react": "^19.1.10",[m
[31m-        "@types/react-dom": "^19.1.7",[m
         "@vitejs/plugin-react": "^5.0.2",[m
         "autoprefixer": "^10.4.21",[m
[31m-        "eslint": "^9.33.0",[m
[31m-        "eslint-plugin-react-hooks": "^5.2.0",[m
[31m-        "eslint-plugin-react-refresh": "^0.4.20",[m
[31m-        "globals": "^16.3.0",[m
         "postcss": "^8.5.6",[m
         "tailwindcss": "^4.1.12",[m
         "vite": "^7.1.2"[m
       }[m
     },[m
[31m-    "node_modules/@alloc/quick-lru": {[m
[31m-      "version": "5.2.0",[m
[31m-      "resolved": "https://registry.npmjs.org/@alloc/quick-lru/-/quick-lru-5.2.0.tgz",[m
[31m-      "integrity": "sha512-UrcABB+4bUrFABwbluTIBErXwvbsU/V7TZWfmbgJfbkwiBuziS9gxdODUyuiecfdGQ85jglMW6juS3+z5TsKLw==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=10"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://github.com/sponsors/sindresorhus"[m
[31m-      }[m
[31m-    },[m
     "node_modules/@ampproject/remapping": {[m
       "version": "2.3.0",[m
       "resolved": "https://registry.npmjs.org/@ampproject/remapping/-/remapping-2.3.0.tgz",[m
[36m@@ -735,222 +715,6 @@[m
         "node": ">=18"[m
       }[m
     },[m
[31m-    "node_modules/@eslint-community/eslint-utils": {[m
[31m-      "version": "4.7.0",[m
[31m-      "resolved": "https://registry.npmjs.org/@eslint-community/eslint-utils/-/eslint-utils-4.7.0.tgz",[m
[31m-      "integrity": "sha512-dyybb3AcajC7uha6CvhdVRJqaKyn7w2YKqKyAN37NKYgZT36w+iRb0Dymmc5qEJ549c/S31cMMSFd75bteCpCw==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "eslint-visitor-keys": "^3.4.3"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": "^12.22.0 || ^14.17.0 || >=16.0.0"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://opencollective.com/eslint"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "eslint": "^6.0.0 || ^7.0.0 || >=8.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@eslint-community/eslint-utils/node_modules/eslint-visitor-keys": {[m
[31m-      "version": "3.4.3",[m
[31m-      "resolved": "https://registry.npmjs.org/eslint-visitor-keys/-/eslint-visitor-keys-3.4.3.tgz",[m
[31m-      "integrity": "sha512-wpc+LXeiyiisxPlEkUzU6svyS1frIO3Mgxj1fdy7Pm8Ygzguax2N3Fa/D/ag1WqbOprdI+uY6wMUl8/a2G+iag==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": "^12.22.0 || ^14.17.0 || >=16.0.0"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://opencollective.com/eslint"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@eslint-community/regexpp": {[m
[31m-      "version": "4.12.1",[m
[31m-      "resolved": "https://registry.npmjs.org/@eslint-community/regexpp/-/regexpp-4.12.1.tgz",[m
[31m-      "integrity": "sha512-CCZCDJuduB9OUkFkY2IgppNZMi2lBQgD2qzwXkEia16cge2pijY/aXi96CJMquDMn3nJdlPV1A5KrJEXwfLNzQ==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": "^12.0.0 || ^14.0.0 || >=16.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@eslint/config-array": {[m
[31m-      "version": "0.21.0",[m
[31m-      "resolved": "https://registry.npmjs.org/@eslint/config-array/-/config-array-0.21.0.tgz",[m
[31m-      "integrity": "sha512-ENIdc4iLu0d93HeYirvKmrzshzofPw6VkZRKQGe9Nv46ZnWUzcF1xV01dcvEg/1wXUR61OmmlSfyeyO7EvjLxQ==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "@eslint/object-schema": "^2.1.6",[m
[31m-        "debug": "^4.3.1",[m
[31m-        "minimatch": "^3.1.2"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": "^18.18.0 || ^20.9.0 || >=21.1.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@eslint/config-helpers": {[m
[31m-      "version": "0.3.1",[m
[31m-      "resolved": "https://registry.npmjs.org/@eslint/config-helpers/-/config-helpers-0.3.1.tgz",[m
[31m-      "integrity": "sha512-xR93k9WhrDYpXHORXpxVL5oHj3Era7wo6k/Wd8/IsQNnZUTzkGS29lyn3nAT05v6ltUuTFVCCYDEGfy2Or/sPA==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": "^18.18.0 || ^20.9.0 || >=21.1.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@eslint/core": {[m
[31m-      "version": "0.15.2",[m
[31m-      "resolved": "https://registry.npmjs.org/@eslint/core/-/core-0.15.2.tgz",[m
[31m-      "integrity": "sha512-78Md3/Rrxh83gCxoUc0EiciuOHsIITzLy53m3d9UyiW8y9Dj2D29FeETqyKA+BRK76tnTp6RXWb3pCay8Oyomg==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "@types/json-schema": "^7.0.15"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": "^18.18.0 || ^20.9.0 || >=21.1.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@eslint/eslintrc": {[m
[31m-      "version": "3.3.1",[m
[31m-      "resolved": "https://registry.npmjs.org/@eslint/eslintrc/-/eslintrc-3.3.1.tgz",[m
[31m-      "integrity": "sha512-gtF186CXhIl1p4pJNGZw8Yc6RlshoePRvE0X91oPGb3vZ8pM3qOS9W9NGPat9LziaBV7XrJWGylNQXkGcnM3IQ==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "ajv": "^6.12.4",[m
[31m-        "debug": "^4.3.2",[m
[31m-        "espree": "^10.0.1",[m
[31m-        "globals": "^14.0.0",[m
[31m-        "ignore": "^5.2.0",[m
[31m-        "import-fresh": "^3.2.1",[m
[31m-        "js-yaml": "^4.1.0",[m
[31m-        "minimatch": "^3.1.2",[m
[31m-        "strip-json-comments": "^3.1.1"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": "^18.18.0 || ^20.9.0 || >=21.1.0"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://opencollective.com/eslint"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@eslint/eslintrc/node_modules/globals": {[m
[31m-      "version": "14.0.0",[m
[31m-      "resolved": "https://registry.npmjs.org/globals/-/globals-14.0.0.tgz",[m
[31m-      "integrity": "sha512-oahGvuMGQlPw/ivIYBjVSrWAfWLBeku5tpPE2fOPLi+WHffIWbuh2tCjhyQhTBPMf5E9jDEH4FOmTYgYwbKwtQ==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=18"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://github.com/sponsors/sindresorhus"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@eslint/js": {[m
[31m-      "version": "9.34.0",[m
[31m-      "resolved": "https://registry.npmjs.org/@eslint/js/-/js-9.34.0.tgz",[m
[31m-      "integrity": "sha512-EoyvqQnBNsV1CWaEJ559rxXL4c8V92gxirbawSmVUOWXlsRxxQXl6LmCpdUblgxgSkDIqKnhzba2SjRTI/A5Rw==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": "^18.18.0 || ^20.9.0 || >=21.1.0"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://eslint.org/donate"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@eslint/object-schema": {[m
[31m-      "version": "2.1.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@eslint/object-schema/-/object-schema-2.1.6.tgz",[m
[31m-      "integrity": "sha512-RBMg5FRL0I0gs51M/guSAj5/e14VQ4tpZnQNWwuDT66P14I43ItmPfIZRhO9fUVIPOAQXU47atlywZ/czoqFPA==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": "^18.18.0 || ^20.9.0 || >=21.1.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@eslint/plugin-kit": {[m
[31m-      "version": "0.3.5",[m
[31m-      "resolved": "https://registry.npmjs.org/@eslint/plugin-kit/-/plugin-kit-0.3.5.tgz",[m
[31m-      "integrity": "sha512-Z5kJ+wU3oA7MMIqVR9tyZRtjYPr4OC004Q4Rw7pgOKUOKkJfZ3O24nz3WYfGRpMDNmcOi3TwQOmgm7B7Tpii0w==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "@eslint/core": "^0.15.2",[m
[31m-        "levn": "^0.4.1"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": "^18.18.0 || ^20.9.0 || >=21.1.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@humanfs/core": {[m
[31m-      "version": "0.19.1",[m
[31m-      "resolved": "https://registry.npmjs.org/@humanfs/core/-/core-0.19.1.tgz",[m
[31m-      "integrity": "sha512-5DyQ4+1JEUzejeK1JGICcideyfUbGixgS9jNgex5nqkW+cY7WZhxBigmieN5Qnw9ZosSNVC9KQKyb+GUaGyKUA==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=18.18.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@humanfs/node": {[m
[31m-      "version": "0.16.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@humanfs/node/-/node-0.16.6.tgz",[m
[31m-      "integrity": "sha512-YuI2ZHQL78Q5HbhDiBA1X4LmYdXCKCMQIfw0pw7piHJwyREFebJUvrQN4cMssyES6x+vfUbx1CIpaQUKYdQZOw==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "@humanfs/core": "^0.19.1",[m
[31m-        "@humanwhocodes/retry": "^0.3.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=18.18.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@humanfs/node/node_modules/@humanwhocodes/retry": {[m
[31m-      "version": "0.3.1",[m
[31m-      "resolved": "https://registry.npmjs.org/@humanwhocodes/retry/-/retry-0.3.1.tgz",[m
[31m-      "integrity": "sha512-JBxkERygn7Bv/GbN5Rv8Ul6LVknS+5Bp6RgDC/O8gEBU/yeH5Ui5C/OlWrTb6qct7LjjfT6Re2NxB0ln0yYybA==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=18.18"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "type": "github",[m
[31m-        "url": "https://github.com/sponsors/nzakas"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@humanwhocodes/module-importer": {[m
[31m-      "version": "1.0.1",[m
[31m-      "resolved": "https://registry.npmjs.org/@humanwhocodes/module-importer/-/module-importer-1.0.1.tgz",[m
[31m-      "integrity": "sha512-bxveV4V8v5Yb4ncFTT3rPSgZBOpCkjfK0y4oVVVJwIuDVBRMDXrPyXRL988i5ap9m9bnyEEjWfm5WkBmtffLfA==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=12.22"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "type": "github",[m
[31m-        "url": "https://github.com/sponsors/nzakas"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@humanwhocodes/retry": {[m
[31m-      "version": "0.4.3",[m
[31m-      "resolved": "https://registry.npmjs.org/@humanwhocodes/retry/-/retry-0.4.3.tgz",[m
[31m-      "integrity": "sha512-bV0Tgo9K4hfPCek+aMAn81RppFKv2ySDQeMoSZuvTASywNTnVJCArCZE2FWqpvIatKu7VMRLWlR1EazvVhDyhQ==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=18.18"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "type": "github",[m
[31m-        "url": "https://github.com/sponsors/nzakas"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@isaacs/fs-minipass": {[m
[31m-      "version": "4.0.1",[m
[31m-      "resolved": "https://registry.npmjs.org/@isaacs/fs-minipass/-/fs-minipass-4.0.1.tgz",[m
[31m-      "integrity": "sha512-wgm9Ehl2jpeqP3zw/7mo3kRHFp5MEDhqAdwy1fTGkHAwnkGOVsgpvQhL8B5n1qlb01jV3n/bI0ZfZp5lWA1k4w==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "minipass": "^7.0.4"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=18.0.0"[m
[31m-      }[m
[31m-    },[m
     "node_modules/@jridgewell/gen-mapping": {[m
       "version": "0.3.13",[m
       "resolved": "https://registry.npmjs.org/@jridgewell/gen-mapping/-/gen-mapping-0.3.13.tgz",[m
[36m@@ -961,16 +725,6 @@[m
         "@jridgewell/trace-mapping": "^0.3.24"[m
       }[m
     },[m
[31m-    "node_modules/@jridgewell/remapping": {[m
[31m-      "version": "2.3.5",[m
[31m-      "resolved": "https://registry.npmjs.org/@jridgewell/remapping/-/remapping-2.3.5.tgz",[m
[31m-      "integrity": "sha512-LI9u/+laYG4Ds1TDKSJW2YPrIlcVYOwi2fUC6xB43lueCjgxV4lffOCZCtYFiH6TNOX+tQKXx97T4IKHbhyHEQ==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "@jridgewell/gen-mapping": "^0.3.5",[m
[31m-        "@jridgewell/trace-mapping": "^0.3.24"[m
[31m-      }[m
[31m-    },[m
     "node_modules/@jridgewell/resolve-uri": {[m
       "version": "3.1.2",[m
       "resolved": "https://registry.npmjs.org/@jridgewell/resolve-uri/-/resolve-uri-3.1.2.tgz",[m
[36m@@ -1329,437 +1083,94 @@[m
         "@supabase/storage-js": "^2.10.4"[m
       }[m
     },[m
[31m-    "node_modules/@tailwindcss/node": {[m
[31m-      "version": "4.1.12",[m
[31m-      "resolved": "https://registry.npmjs.org/@tailwindcss/node/-/node-4.1.12.tgz",[m
[31m-      "integrity": "sha512-3hm9brwvQkZFe++SBt+oLjo4OLDtkvlE8q2WalaD/7QWaeM7KEJbAiY/LJZUaCs7Xa8aUu4xy3uoyX4q54UVdQ==",[m
[32m+[m[32m    "node_modules/@types/babel__core": {[m
[32m+[m[32m      "version": "7.20.5",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@types/babel__core/-/babel__core-7.20.5.tgz",[m
[32m+[m[32m      "integrity": "sha512-qoQprZvz5wQFJwMDqeseRXWv3rqMvhgpbXFfVyWhbx9X47POIA6i/+dXefEmZKoAgOaTdaIgNSMqMIU61yRyzA==",[m
       "dev": true,[m
       "dependencies": {[m
[31m-        "@jridgewell/remapping": "^2.3.4",[m
[31m-        "enhanced-resolve": "^5.18.3",[m
[31m-        "jiti": "^2.5.1",[m
[31m-        "lightningcss": "1.30.1",[m
[31m-        "magic-string": "^0.30.17",[m
[31m-        "source-map-js": "^1.2.1",[m
[31m-        "tailwindcss": "4.1.12"[m
[32m+[m[32m        "@babel/parser": "^7.20.7",[m
[32m+[m[32m        "@babel/types": "^7.20.7",[m
[32m+[m[32m        "@types/babel__generator": "*",[m
[32m+[m[32m        "@types/babel__template": "*",[m
[32m+[m[32m        "@types/babel__traverse": "*"[m
       }[m
     },[m
[31m-    "node_modules/@tailwindcss/oxide": {[m
[31m-      "version": "4.1.12",[m
[31m-      "resolved": "https://registry.npmjs.org/@tailwindcss/oxide/-/oxide-4.1.12.tgz",[m
[31m-      "integrity": "sha512-gM5EoKHW/ukmlEtphNwaGx45fGoEmP10v51t9unv55voWh6WrOL19hfuIdo2FjxIaZzw776/BUQg7Pck++cIVw==",[m
[32m+[m[32m    "node_modules/@types/babel__generator": {[m
[32m+[m[32m      "version": "7.27.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@types/babel__generator/-/babel__generator-7.27.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-ufFd2Xi92OAVPYsy+P4n7/U7e68fex0+Ee8gSG9KX7eo084CWiQ4sdxktvdl0bOPupXtVJPY19zk6EwWqUQ8lg==",[m
       "dev": true,[m
[31m-      "hasInstallScript": true,[m
       "dependencies": {[m
[31m-        "detect-libc": "^2.0.4",[m
[31m-        "tar": "^7.4.3"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">= 10"[m
[31m-      },[m
[31m-      "optionalDependencies": {[m
[31m-        "@tailwindcss/oxide-android-arm64": "4.1.12",[m
[31m-        "@tailwindcss/oxide-darwin-arm64": "4.1.12",[m
[31m-        "@tailwindcss/oxide-darwin-x64": "4.1.12",[m
[31m-        "@tailwindcss/oxide-freebsd-x64": "4.1.12",[m
[31m-        "@tailwindcss/oxide-linux-arm-gnueabihf": "4.1.12",[m
[31m-        "@tailwindcss/oxide-linux-arm64-gnu": "4.1.12",[m
[31m-        "@tailwindcss/oxide-linux-arm64-musl": "4.1.12",[m
[31m-        "@tailwindcss/oxide-linux-x64-gnu": "4.1.12",[m
[31m-        "@tailwindcss/oxide-linux-x64-musl": "4.1.12",[m
[31m-        "@tailwindcss/oxide-wasm32-wasi": "4.1.12",[m
[31m-        "@tailwindcss/oxide-win32-arm64-msvc": "4.1.12",[m
[31m-        "@tailwindcss/oxide-win32-x64-msvc": "4.1.12"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@tailwindcss/oxide-android-arm64": {[m
[31m-      "version": "4.1.12",[m
[31m-      "resolved": "https://registry.npmjs.org/@tailwindcss/oxide-android-arm64/-/oxide-android-arm64-4.1.12.tgz",[m
[31m-      "integrity": "sha512-oNY5pq+1gc4T6QVTsZKwZaGpBb2N1H1fsc1GD4o7yinFySqIuRZ2E4NvGasWc6PhYJwGK2+5YT1f9Tp80zUQZQ==",[m
[31m-      "cpu": [[m
[31m-        "arm64"[m
[31m-      ],[m
[31m-      "dev": true,[m
[31m-      "optional": true,[m
[31m-      "os": [[m
[31m-        "android"[m
[31m-      ],[m
[31m-      "engines": {[m
[31m-        "node": ">= 10"[m
[32m+[m[32m        "@babel/types": "^7.0.0"[m
       }[m
     },[m
[31m-    "node_modules/@tailwindcss/oxide-darwin-arm64": {[m
[31m-      "version": "4.1.12",[m
[31m-      "resolved": "https://registry.npmjs.org/@tailwindcss/oxide-darwin-arm64/-/oxide-darwin-arm64-4.1.12.tgz",[m
[31m-      "integrity": "sha512-cq1qmq2HEtDV9HvZlTtrj671mCdGB93bVY6J29mwCyaMYCP/JaUBXxrQQQm7Qn33AXXASPUb2HFZlWiiHWFytw==",[m
[31m-      "cpu": [[m
[31m-        "arm64"[m
[31m-      ],[m
[32m+[m[32m    "node_modules/@types/babel__template": {[m
[32m+[m[32m      "version": "7.4.4",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@types/babel__template/-/babel__template-7.4.4.tgz",[m
[32m+[m[32m      "integrity": "sha512-h/NUaSyG5EyxBIp8YRxo4RMe2/qQgvyowRwVMzhYhBCONbW8PUsg4lkFMrhgZhUe5z3L3MiLDuvyJ/CaPa2A8A==",[m
       "dev": true,[m
[31m-      "optional": true,[m
[31m-      "os": [[m
[31m-        "darwin"[m
[31m-      ],[m
[31m-      "engines": {[m
[31m-        "node": ">= 10"[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@babel/parser": "^7.1.0",[m
[32m+[m[32m        "@babel/types": "^7.0.0"[m
       }[m
     },[m
[31m-    "node_modules/@tailwindcss/oxide-darwin-x64": {[m
[31m-      "version": "4.1.12",[m
[31m-      "resolved": "https://registry.npmjs.org/@tailwindcss/oxide-darwin-x64/-/oxide-darwin-x64-4.1.12.tgz",[m
[31m-      "integrity": "sha512-6UCsIeFUcBfpangqlXay9Ffty9XhFH1QuUFn0WV83W8lGdX8cD5/+2ONLluALJD5+yJ7k8mVtwy3zMZmzEfbLg==",[m
[31m-      "cpu": [[m
[31m-        "x64"[m
[31m-      ],[m
[32m+[m[32m    "node_modules/@types/babel__traverse": {[m
[32m+[m[32m      "version": "7.28.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@types/babel__traverse/-/babel__traverse-7.28.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-8PvcXf70gTDZBgt9ptxJ8elBeBjcLOAcOtoO/mPJjtji1+CdGbHgm77om1GrsPxsiE+uXIpNSK64UYaIwQXd4Q==",[m
       "dev": true,[m
[31m-      "optional": true,[m
[31m-      "os": [[m
[31m-        "darwin"[m
[31m-      ],[m
[31m-      "engines": {[m
[31m-        "node": ">= 10"[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@babel/types": "^7.28.2"[m
       }[m
     },[m
[31m-    "node_modules/@tailwindcss/oxide-freebsd-x64": {[m
[31m-      "version": "4.1.12",[m
[31m-      "resolved": "https://registry.npmjs.org/@tailwindcss/oxide-freebsd-x64/-/oxide-freebsd-x64-4.1.12.tgz",[m
[31m-      "integrity": "sha512-JOH/f7j6+nYXIrHobRYCtoArJdMJh5zy5lr0FV0Qu47MID/vqJAY3r/OElPzx1C/wdT1uS7cPq+xdYYelny1ww==",[m
[31m-      "cpu": [[m
[31m-        "x64"[m
[31m-      ],[m
[31m-      "dev": true,[m
[31m-      "optional": true,[m
[31m-      "os": [[m
[31m-        "freebsd"[m
[31m-      ],[m
[31m-      "engines": {[m
[31m-        "node": ">= 10"[m
[31m-      }[m
[32m+[m[32m    "node_modules/@types/estree": {[m
[32m+[m[32m      "version": "1.0.8",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@types/estree/-/estree-1.0.8.tgz",[m
[32m+[m[32m      "integrity": "sha512-dWHzHa2WqEXI/O1E9OjrocMTKJl2mSrEolh1Iomrv6U+JuNwaHXsXx9bLu5gG7BUWFIN0skIQJQ/L1rIex4X6w==",[m
[32m+[m[32m      "dev": true[m
     },[m
[31m-    "node_modules/@tailwindcss/oxide-linux-arm-gnueabihf": {[m
[31m-      "version": "4.1.12",[m
[31m-      "resolved": "https://registry.npmjs.org/@tailwindcss/oxide-linux-arm-gnueabihf/-/oxide-linux-arm-gnueabihf-4.1.12.tgz",[m
[31m-      "integrity": "sha512-v4Ghvi9AU1SYgGr3/j38PD8PEe6bRfTnNSUE3YCMIRrrNigCFtHZ2TCm8142X8fcSqHBZBceDx+JlFJEfNg5zQ==",[m
[31m-      "cpu": [[m
[31m-        "arm"[m
[31m-      ],[m
[31m-      "dev": true,[m
[31m-      "optional": true,[m
[31m-      "os": [[m
[31m-        "linux"[m
[31m-      ],[m
[31m-      "engines": {[m
[31m-        "node": ">= 10"[m
[32m+[m[32m    "node_modules/@types/node": {[m
[32m+[m[32m      "version": "24.3.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@types/node/-/node-24.3.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-aPTXCrfwnDLj4VvXrm+UUCQjNEvJgNA8s5F1cvwQU+3KNltTOkBm1j30uNLyqqPNe7gE3KFzImYoZEfLhp4Yow==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "undici-types": "~7.10.0"[m
       }[m
     },[m
[31m-    "node_modules/@tailwindcss/oxide-linux-arm64-gnu": {[m
[31m-      "version": "4.1.12",[m
[31m-      "resolved": "https://registry.npmjs.org/@tailwindcss/oxide-linux-arm64-gnu/-/oxide-linux-arm64-gnu-4.1.12.tgz",[m
[31m-      "integrity": "sha512-YP5s1LmetL9UsvVAKusHSyPlzSRqYyRB0f+Kl/xcYQSPLEw/BvGfxzbH+ihUciePDjiXwHh+p+qbSP3SlJw+6g==",[m
[31m-      "cpu": [[m
[31m-        "arm64"[m
[31m-      ],[m
[31m-      "dev": true,[m
[31m-      "optional": true,[m
[31m-      "os": [[m
[31m-        "linux"[m
[31m-      ],[m
[31m-      "engines": {[m
[31m-        "node": ">= 10"[m
[32m+[m[32m    "node_modules/@types/phoenix": {[m
[32m+[m[32m      "version": "1.6.6",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@types/phoenix/-/phoenix-1.6.6.tgz",[m
[32m+[m[32m      "integrity": "sha512-PIzZZlEppgrpoT2QgbnDU+MMzuR6BbCjllj0bM70lWoejMeNJAxCchxnv7J3XFkI8MpygtRpzXrIlmWUBclP5A=="[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@types/ws": {[m
[32m+[m[32m      "version": "8.18.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@types/ws/-/ws-8.18.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-ThVF6DCVhA8kUGy+aazFQ4kXQ7E1Ty7A3ypFOe0IcJV8O/M511G99AW24irKrW56Wt44yG9+ij8FaqoBGkuBXg==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@types/node": "*"[m
       }[m
     },[m
[31m-    "node_modules/@tailwindcss/oxide-linux-arm64-musl": {[m
[31m-      "version": "4.1.12",[m
[31m-      "resolved": "https://registry.npmjs.org/@tailwindcss/oxide-linux-arm64-musl/-/oxide-linux-arm64-musl-4.1.12.tgz",[m
[31m-      "integrity": "sha512-V8pAM3s8gsrXcCv6kCHSuwyb/gPsd863iT+v1PGXC4fSL/OJqsKhfK//v8P+w9ThKIoqNbEnsZqNy+WDnwQqCA==",[m
[31m-      "cpu": [[m
[31m-        "arm64"[m
[31m-      ],[m
[32m+[m[32m    "node_modules/@vitejs/plugin-react": {[m
[32m+[m[32m      "version": "5.0.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@vitejs/plugin-react/-/plugin-react-5.0.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-tmyFgixPZCx2+e6VO9TNITWcCQl8+Nl/E8YbAyPVv85QCc7/A3JrdfG2A8gIzvVhWuzMOVrFW1aReaNxrI6tbw==",[m
       "dev": true,[m
[31m-      "optional": true,[m
[31m-      "os": [[m
[31m-        "linux"[m
[31m-      ],[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@babel/core": "^7.28.3",[m
[32m+[m[32m        "@babel/plugin-transform-react-jsx-self": "^7.27.1",[m
[32m+[m[32m        "@babel/plugin-transform-react-jsx-source": "^7.27.1",[m
[32m+[m[32m        "@rolldown/pluginutils": "1.0.0-beta.34",[m
[32m+[m[32m        "@types/babel__core": "^7.20.5",[m
[32m+[m[32m        "react-refresh": "^0.17.0"[m
[32m+[m[32m      },[m
       "engines": {[m
[31m-        "node": ">= 10"[m
[32m+[m[32m        "node": "^20.19.0 || >=22.12.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "peerDependencies": {[m
[32m+[m[32m        "vite": "^4.2.0 || ^5.0.0 || ^6.0.0 || ^7.0.0"[m
       }[m
     },[m
[31m-    "node_modules/@tailwindcss/oxide-linux-x64-gnu": {[m
[31m-      "version": "4.1.12",[m
[31m-      "resolved": "https://registry.npmjs.org/@tailwindcss/oxide-linux-x64-gnu/-/oxide-linux-x64-gnu-4.1.12.tgz",[m
[31m-      "integrity": "sha512-xYfqYLjvm2UQ3TZggTGrwxjYaLB62b1Wiysw/YE3Yqbh86sOMoTn0feF98PonP7LtjsWOWcXEbGqDL7zv0uW8Q==",[m
[31m-      "cpu": [[m
[31m-        "x64"[m
[31m-      ],[m
[31m-      "dev": true,[m
[31m-      "optional": true,[m
[31m-      "os": [[m
[31m-        "linux"[m
[31m-      ],[m
[31m-      "engines": {[m
[31m-        "node": ">= 10"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@tailwindcss/oxide-linux-x64-musl": {[m
[31m-      "version": "4.1.12",[m
[31m-      "resolved": "https://registry.npmjs.org/@tailwindcss/oxide-linux-x64-musl/-/oxide-linux-x64-musl-4.1.12.tgz",[m
[31m-      "integrity": "sha512-ha0pHPamN+fWZY7GCzz5rKunlv9L5R8kdh+YNvP5awe3LtuXb5nRi/H27GeL2U+TdhDOptU7T6Is7mdwh5Ar3A==",[m
[31m-      "cpu": [[m
[31m-        "x64"[m
[31m-      ],[m
[31m-      "dev": true,[m
[31m-      "optional": true,[m
[31m-      "os": [[m
[31m-        "linux"[m
[31m-      ],[m
[31m-      "engines": {[m
[31m-        "node": ">= 10"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@tailwindcss/oxide-wasm32-wasi": {[m
[31m-      "version": "4.1.12",[m
[31m-      "resolved": "https://registry.npmjs.org/@tailwindcss/oxide-wasm32-wasi/-/oxide-wasm32-wasi-4.1.12.tgz",[m
[31m-      "integrity": "sha512-4tSyu3dW+ktzdEpuk6g49KdEangu3eCYoqPhWNsZgUhyegEda3M9rG0/j1GV/JjVVsj+lG7jWAyrTlLzd/WEBg==",[m
[31m-      "bundleDependencies": [[m
[31m-        "@napi-rs/wasm-runtime",[m
[31m-        "@emnapi/core",[m
[31m-        "@emnapi/runtime",[m
[31m-        "@tybys/wasm-util",[m
[31m-        "@emnapi/wasi-threads",[m
[31m-        "tslib"[m
[31m-      ],[m
[31m-      "cpu": [[m
[31m-        "wasm32"[m
[31m-      ],[m
[31m-      "dev": true,[m
[31m-      "optional": true,[m
[31m-      "dependencies": {[m
[31m-        "@emnapi/core": "^1.4.5",[m
[31m-        "@emnapi/runtime": "^1.4.5",[m
[31m-        "@emnapi/wasi-threads": "^1.0.4",[m
[31m-        "@napi-rs/wasm-runtime": "^0.2.12",[m
[31m-        "@tybys/wasm-util": "^0.10.0",[m
[31m-        "tslib": "^2.8.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=14.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@tailwindcss/oxide-win32-arm64-msvc": {[m
[31m-      "version": "4.1.12",[m
[31m-      "resolved": "https://registry.npmjs.org/@tailwindcss/oxide-win32-arm64-msvc/-/oxide-win32-arm64-msvc-4.1.12.tgz",[m
[31m-      "integrity": "sha512-iGLyD/cVP724+FGtMWslhcFyg4xyYyM+5F4hGvKA7eifPkXHRAUDFaimu53fpNg9X8dfP75pXx/zFt/jlNF+lg==",[m
[31m-      "cpu": [[m
[31m-        "arm64"[m
[31m-      ],[m
[31m-      "dev": true,[m
[31m-      "optional": true,[m
[31m-      "os": [[m
[31m-        "win32"[m
[31m-      ],[m
[31m-      "engines": {[m
[31m-        "node": ">= 10"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@tailwindcss/oxide-win32-x64-msvc": {[m
[31m-      "version": "4.1.12",[m
[31m-      "resolved": "https://registry.npmjs.org/@tailwindcss/oxide-win32-x64-msvc/-/oxide-win32-x64-msvc-4.1.12.tgz",[m
[31m-      "integrity": "sha512-NKIh5rzw6CpEodv/++r0hGLlfgT/gFN+5WNdZtvh6wpU2BpGNgdjvj6H2oFc8nCM839QM1YOhjpgbAONUb4IxA==",[m
[31m-      "cpu": [[m
[31m-        "x64"[m
[31m-      ],[m
[31m-      "dev": true,[m
[31m-      "optional": true,[m
[31m-      "os": [[m
[31m-        "win32"[m
[31m-      ],[m
[31m-      "engines": {[m
[31m-        "node": ">= 10"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@tailwindcss/postcss": {[m
[31m-      "version": "4.1.12",[m
[31m-      "resolved": "https://registry.npmjs.org/@tailwindcss/postcss/-/postcss-4.1.12.tgz",[m
[31m-      "integrity": "sha512-5PpLYhCAwf9SJEeIsSmCDLgyVfdBhdBpzX1OJ87anT9IVR0Z9pjM0FNixCAUAHGnMBGB8K99SwAheXrT0Kh6QQ==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "@alloc/quick-lru": "^5.2.0",[m
[31m-        "@tailwindcss/node": "4.1.12",[m
[31m-        "@tailwindcss/oxide": "4.1.12",[m
[31m-        "postcss": "^8.4.41",[m
[31m-        "tailwindcss": "4.1.12"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@types/babel__core": {[m
[31m-      "version": "7.20.5",[m
[31m-      "resolved": "https://registry.npmjs.org/@types/babel__core/-/babel__core-7.20.5.tgz",[m
[31m-      "integrity": "sha512-qoQprZvz5wQFJwMDqeseRXWv3rqMvhgpbXFfVyWhbx9X47POIA6i/+dXefEmZKoAgOaTdaIgNSMqMIU61yRyzA==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "@babel/parser": "^7.20.7",[m
[31m-        "@babel/types": "^7.20.7",[m
[31m-        "@types/babel__generator": "*",[m
[31m-        "@types/babel__template": "*",[m
[31m-        "@types/babel__traverse": "*"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@types/babel__generator": {[m
[31m-      "version": "7.27.0",[m
[31m-      "resolved": "https://registry.npmjs.org/@types/babel__generator/-/babel__generator-7.27.0.tgz",[m
[31m-      "integrity": "sha512-ufFd2Xi92OAVPYsy+P4n7/U7e68fex0+Ee8gSG9KX7eo084CWiQ4sdxktvdl0bOPupXtVJPY19zk6EwWqUQ8lg==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "@babel/types": "^7.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@types/babel__template": {[m
[31m-      "version": "7.4.4",[m
[31m-      "resolved": "https://registry.npmjs.org/@types/babel__template/-/babel__template-7.4.4.tgz",[m
[31m-      "integrity": "sha512-h/NUaSyG5EyxBIp8YRxo4RMe2/qQgvyowRwVMzhYhBCONbW8PUsg4lkFMrhgZhUe5z3L3MiLDuvyJ/CaPa2A8A==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "@babel/parser": "^7.1.0",[m
[31m-        "@babel/types": "^7.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@types/babel__traverse": {[m
[31m-      "version": "7.28.0",[m
[31m-      "resolved": "https://registry.npmjs.org/@types/babel__traverse/-/babel__traverse-7.28.0.tgz",[m
[31m-      "integrity": "sha512-8PvcXf70gTDZBgt9ptxJ8elBeBjcLOAcOtoO/mPJjtji1+CdGbHgm77om1GrsPxsiE+uXIpNSK64UYaIwQXd4Q==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "@babel/types": "^7.28.2"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@types/estree": {[m
[31m-      "version": "1.0.8",[m
[31m-      "resolved": "https://registry.npmjs.org/@types/estree/-/estree-1.0.8.tgz",[m
[31m-      "integrity": "sha512-dWHzHa2WqEXI/O1E9OjrocMTKJl2mSrEolh1Iomrv6U+JuNwaHXsXx9bLu5gG7BUWFIN0skIQJQ/L1rIex4X6w==",[m
[31m-      "dev": true[m
[31m-    },[m
[31m-    "node_modules/@types/json-schema": {[m
[31m-      "version": "7.0.15",[m
[31m-      "resolved": "https://registry.npmjs.org/@types/json-schema/-/json-schema-7.0.15.tgz",[m
[31m-      "integrity": "sha512-5+fP8P8MFNC+AyZCDxrB2pkZFPGzqQWUzpSeuuVLvm8VMcorNYavBqoFcxK8bQz4Qsbn4oUEEem4wDLfcysGHA==",[m
[31m-      "dev": true[m
[31m-    },[m
[31m-    "node_modules/@types/node": {[m
[31m-      "version": "24.3.0",[m
[31m-      "resolved": "https://registry.npmjs.org/@types/node/-/node-24.3.0.tgz",[m
[31m-      "integrity": "sha512-aPTXCrfwnDLj4VvXrm+UUCQjNEvJgNA8s5F1cvwQU+3KNltTOkBm1j30uNLyqqPNe7gE3KFzImYoZEfLhp4Yow==",[m
[31m-      "dependencies": {[m
[31m-        "undici-types": "~7.10.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@types/phoenix": {[m
[31m-      "version": "1.6.6",[m
[31m-      "resolved": "https://registry.npmjs.org/@types/phoenix/-/phoenix-1.6.6.tgz",[m
[31m-      "integrity": "sha512-PIzZZlEppgrpoT2QgbnDU+MMzuR6BbCjllj0bM70lWoejMeNJAxCchxnv7J3XFkI8MpygtRpzXrIlmWUBclP5A=="[m
[31m-    },[m
[31m-    "node_modules/@types/react": {[m
[31m-      "version": "19.1.12",[m
[31m-      "resolved": "https://registry.npmjs.org/@types/react/-/react-19.1.12.tgz",[m
[31m-      "integrity": "sha512-cMoR+FoAf/Jyq6+Df2/Z41jISvGZZ2eTlnsaJRptmZ76Caldwy1odD4xTr/gNV9VLj0AWgg/nmkevIyUfIIq5w==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "csstype": "^3.0.2"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@types/react-dom": {[m
[31m-      "version": "19.1.9",[m
[31m-      "resolved": "https://registry.npmjs.org/@types/react-dom/-/react-dom-19.1.9.tgz",[m
[31m-      "integrity": "sha512-qXRuZaOsAdXKFyOhRBg6Lqqc0yay13vN7KrIg4L7N4aaHN68ma9OK3NE1BoDFgFOTfM7zg+3/8+2n8rLUH3OKQ==",[m
[31m-      "dev": true,[m
[31m-      "peerDependencies": {[m
[31m-        "@types/react": "^19.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@types/ws": {[m
[31m-      "version": "8.18.1",[m
[31m-      "resolved": "https://registry.npmjs.org/@types/ws/-/ws-8.18.1.tgz",[m
[31m-      "integrity": "sha512-ThVF6DCVhA8kUGy+aazFQ4kXQ7E1Ty7A3ypFOe0IcJV8O/M511G99AW24irKrW56Wt44yG9+ij8FaqoBGkuBXg==",[m
[31m-      "dependencies": {[m
[31m-        "@types/node": "*"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/@vitejs/plugin-react": {[m
[31m-      "version": "5.0.2",[m
[31m-      "resolved": "https://registry.npmjs.org/@vitejs/plugin-react/-/plugin-react-5.0.2.tgz",[m
[31m-      "integrity": "sha512-tmyFgixPZCx2+e6VO9TNITWcCQl8+Nl/E8YbAyPVv85QCc7/A3JrdfG2A8gIzvVhWuzMOVrFW1aReaNxrI6tbw==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "@babel/core": "^7.28.3",[m
[31m-        "@babel/plugin-transform-react-jsx-self": "^7.27.1",[m
[31m-        "@babel/plugin-transform-react-jsx-source": "^7.27.1",[m
[31m-        "@rolldown/pluginutils": "1.0.0-beta.34",[m
[31m-        "@types/babel__core": "^7.20.5",[m
[31m-        "react-refresh": "^0.17.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": "^20.19.0 || >=22.12.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "vite": "^4.2.0 || ^5.0.0 || ^6.0.0 || ^7.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/acorn": {[m
[31m-      "version": "8.15.0",[m
[31m-      "resolved": "https://registry.npmjs.org/acorn/-/acorn-8.15.0.tgz",[m
[31m-      "integrity": "sha512-NZyJarBfL7nWwIq+FDL6Zp/yHEhePMNnnJ0y3qfieCrmNvYct8uvtiV41UvlSe6apAfk0fY1FbWx+NwfmpvtTg==",[m
[31m-      "dev": true,[m
[31m-      "bin": {[m
[31m-        "acorn": "bin/acorn"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=0.4.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/acorn-jsx": {[m
[31m-      "version": "5.3.2",[m
[31m-      "resolved": "https://registry.npmjs.org/acorn-jsx/-/acorn-jsx-5.3.2.tgz",[m
[31m-      "integrity": "sha512-rq9s+JNhf0IChjtDXxllJ7g41oZk5SlXtp0LHwyA5cejwn7vKmKp4pPri6YEePv2PU65sAsegbXtIinmDFDXgQ==",[m
[31m-      "dev": true,[m
[31m-      "peerDependencies": {[m
[31m-        "acorn": "^6.0.0 || ^7.0.0 || ^8.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/ajv": {[m
[31m-      "version": "6.12.6",[m
[31m-      "resolved": "https://registry.npmjs.org/ajv/-/ajv-6.12.6.tgz",[m
[31m-      "integrity": "sha512-j3fVLgvTo527anyYyJOGTYJbG+vnnQYvE0m5mmkc1TK+nxAppkCLMIL0aZ4dblVCNoGShhm+kzE4ZUykBoMg4g==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "fast-deep-equal": "^3.1.1",[m
[31m-        "fast-json-stable-stringify": "^2.0.0",[m
[31m-        "json-schema-traverse": "^0.4.1",[m
[31m-        "uri-js": "^4.2.2"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "type": "github",[m
[31m-        "url": "https://github.com/sponsors/epoberezkin"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/ansi-styles": {[m
[31m-      "version": "4.3.0",[m
[31m-      "resolved": "https://registry.npmjs.org/ansi-styles/-/ansi-styles-4.3.0.tgz",[m
[31m-      "integrity": "sha512-zbB9rCJAT1rbjiVDb2hqKFHNYLxgtk8NURxZ3IZwD3F6NtxbXZQCnnSi1Lkx+IDohdPlFp222wVALIheZJQSEg==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "color-convert": "^2.0.1"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=8"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://github.com/chalk/ansi-styles?sponsor=1"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/argparse": {[m
[31m-      "version": "2.0.1",[m
[31m-      "resolved": "https://registry.npmjs.org/argparse/-/argparse-2.0.1.tgz",[m
[31m-      "integrity": "sha512-8+9WqebbFzpX9OR+Wa6O29asIogeRMzcGtAINdpMHHyAg10f05aSFVBbcEqGf/PXw1EjAZ+q2/bEBg3DvurK3Q==",[m
[31m-      "dev": true[m
[31m-    },[m
     "node_modules/autoprefixer": {[m
       "version": "10.4.21",[m
       "resolved": "https://registry.npmjs.org/autoprefixer/-/autoprefixer-10.4.21.tgz",[m
[36m@@ -1797,22 +1208,6 @@[m
         "postcss": "^8.1.0"[m
       }[m
     },[m
[31m-    "node_modules/balanced-match": {[m
[31m-      "version": "1.0.2",[m
[31m-      "resolved": "https://registry.npmjs.org/balanced-match/-/balanced-match-1.0.2.tgz",[m
[31m-      "integrity": "sha512-3oSeUO0TMV67hN1AmbXsK4yaqU7tjiHlbxRDZOpH0KW9+CeX4bRAaX0Anxt0tx2MrpRpWwQaPwIlISEJhYU5Pw==",[m
[31m-      "dev": true[m
[31m-    },[m
[31m-    "node_modules/brace-expansion": {[m
[31m-      "version": "1.1.12",[m
[31m-      "resolved": "https://registry.npmjs.org/brace-expansion/-/brace-expansion-1.1.12.tgz",[m
[31m-      "integrity": "sha512-9T9UjW3r0UW5c1Q7GTwllptXwhvYmEzFhzMfZ9H7FQWt+uZePjZPjBP/W1ZEyZ1twGWom5/56TF4lPcqjnDHcg==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "balanced-match": "^1.0.0",[m
[31m-        "concat-map": "0.0.1"[m
[31m-      }[m
[31m-    },[m
     "node_modules/browserslist": {[m
       "version": "4.25.4",[m
       "resolved": "https://registry.npmjs.org/browserslist/-/browserslist-4.25.4.tgz",[m
[36m@@ -1845,15 +1240,6 @@[m
         "node": "^6 || ^7 || ^8 || ^9 || ^10 || ^11 || ^12 || >=13.7"[m
       }[m
     },[m
[31m-    "node_modules/callsites": {[m
[31m-      "version": "3.1.0",[m
[31m-      "resolved": "https://registry.npmjs.org/callsites/-/callsites-3.1.0.tgz",[m
[31m-      "integrity": "sha512-P8BjAsXvZS+VIDUI11hHCQEv74YT67YUi5JJFNWIqL235sBmjX4+qx9Muvls5ivyNENctx46xQLQ3aTuE7ssaQ==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=6"[m
[31m-      }[m
[31m-    },[m
     "node_modules/caniuse-lite": {[m
       "version": "1.0.30001737",[m
       "resolved": "https://registry.npmjs.org/caniuse-lite/-/caniuse-lite-1.0.30001737.tgz",[m
[36m@@ -1874,55 +1260,6 @@[m
         }[m
       ][m
     },[m
[31m-    "node_modules/chalk": {[m
[31m-      "version": "4.1.2",[m
[31m-      "resolved": "https://registry.npmjs.org/chalk/-/chalk-4.1.2.tgz",[m
[31m-      "integrity": "sha512-oKnbhFyRIXpUuez8iBMmyEa4nbj4IOQyuhc/wy9kY7/WVPcwIO9VA668Pu8RkO7+0G76SLROeyw9CpQ061i4mA==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "ansi-styles": "^4.1.0",[m
[31m-        "supports-color": "^7.1.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=10"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://github.com/chalk/chalk?sponsor=1"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/chownr": {[m
[31m-      "version": "3.0.0",[m
[31m-      "resolved": "https://registry.npmjs.org/chownr/-/chownr-3.0.0.tgz",[m
[31m-      "integrity": "sha512-+IxzY9BZOQd/XuYPRmrvEVjF/nqj5kgT4kEq7VofrDoM1MxoRjEWkrCC3EtLi59TVawxTAn+orJwFQcrqEN1+g==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=18"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/color-convert": {[m
[31m-      "version": "2.0.1",[m
[31m-      "resolved": "https://registry.npmjs.org/color-convert/-/color-convert-2.0.1.tgz",[m
[31m-      "integrity": "sha512-RRECPsj7iu/xb5oKYcsFHSppFNnsj/52OVTRKb4zP5onXwVF3zVmmToNcOfGC+CRDpfK/U584fMg38ZHCaElKQ==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "color-name": "~1.1.4"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=7.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/color-name": {[m
[31m-      "version": "1.1.4",[m
[31m-      "resolved": "https://registry.npmjs.org/color-name/-/color-name-1.1.4.tgz",[m
[31m-      "integrity": "sha512-dOy+3AuW3a2wNbZHIuMZpTcgjGuLU/uBL/ubcZF9OXbDo8ff4O8yVp5Bf0efS8uEoYo5q4Fx7dY9OgQGXgAsQA==",[m
[31m-      "dev": true[m
[31m-    },[m
[31m-    "node_modules/concat-map": {[m
[31m-      "version": "0.0.1",[m
[31m-      "resolved": "https://registry.npmjs.org/concat-map/-/concat-map-0.0.1.tgz",[m
[31m-      "integrity": "sha512-/Srv4dswyQNBfohGpz9o6Yb3Gz3SrUDqBH5rTuhGR7ahtlbYKnVxw2bCFMRljaA7EXHaXZ8wsHdodFvbkhKmqg==",[m
[31m-      "dev": true[m
[31m-    },[m
     "node_modules/convert-source-map": {[m
       "version": "2.0.0",[m
       "resolved": "https://registry.npmjs.org/convert-source-map/-/convert-source-map-2.0.0.tgz",[m
[36m@@ -1937,26 +1274,6 @@[m
         "node": ">=18"[m
       }[m
     },[m
[31m-    "node_modules/cross-spawn": {[m
[31m-      "version": "7.0.6",[m
[31m-      "resolved": "https://registry.npmjs.org/cross-spawn/-/cross-spawn-7.0.6.tgz",[m
[31m-      "integrity": "sha512-uV2QOWP2nWzsy2aMp8aRibhi9dlzF5Hgh5SHaB9OiTGEyDTiJJyx0uy51QXdyWbtAHNua4XJzUKca3OzKUd3vA==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "path-key": "^3.1.0",[m
[31m-        "shebang-command": "^2.0.0",[m
[31m-        "which": "^2.0.1"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">= 8"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/csstype": {[m
[31m-      "version": "3.1.3",[m
[31m-      "resolved": "https://registry.npmjs.org/csstype/-/csstype-3.1.3.tgz",[m
[31m-      "integrity": "sha512-M1uQkMl8rQK/szD0LNhtqxIPLpimGm8sOBwU7lLnCpSbTyY3yeU1Vc7l4KT5zT4s/yOxHH5O7tIuuLOCnLADRw==",[m
[31m-      "dev": true[m
[31m-    },[m
     "node_modules/debug": {[m
       "version": "4.4.1",[m
       "resolved": "https://registry.npmjs.org/debug/-/debug-4.4.1.tgz",[m
[36m@@ -1974,17 +1291,13 @@[m
         }[m
       }[m
     },[m
[31m-    "node_modules/deep-is": {[m
[31m-      "version": "0.1.4",[m
[31m-      "resolved": "https://registry.npmjs.org/deep-is/-/deep-is-0.1.4.tgz",[m
[31m-      "integrity": "sha512-oIPzksmTg4/MriiaYGO+okXDT7ztn/w3Eptv/+gSIdMdKsJo0u4CfYNFJPy+4SKMuCqGw2wxnA+URMg3t8a/bQ==",[m
[31m-      "dev": true[m
[31m-    },[m
     "node_modules/detect-libc": {[m
       "version": "2.0.4",[m
       "resolved": "https://registry.npmjs.org/detect-libc/-/detect-libc-2.0.4.tgz",[m
       "integrity": "sha512-3UDv+G9CsCKO1WKMGw9fwq/SWJYbI0c5Y7LU1AXYoDdbhE2AHQ6N6Nb34sG8Fj7T5APy8qXDCKuuIHd1BR0tVA==",[m
       "dev": true,[m
[32m+[m[32m      "optional": true,[m
[32m+[m[32m      "peer": true,[m
       "engines": {[m
         "node": ">=8"[m
       }[m
[36m@@ -1995,19 +1308,6 @@[m
       "integrity": "sha512-IGBvimJkotaLzFnwIVgW9/UD/AOJ2tByUmeOrtqBfACSbAw5b1G0XpvdaieKyc7ULmbwXVx+4e4Be8pOPBrYkw==",[m
       "dev": true[m
     },[m
[31m-    "node_modules/enhanced-resolve": {[m
[31m-      "version": "5.18.3",[m
[31m-      "resolved": "https://registry.npmjs.org/enhanced-resolve/-/enhanced-resolve-5.18.3.tgz",[m
[31m-      "integrity": "sha512-d4lC8xfavMeBjzGr2vECC3fsGXziXZQyJxD868h2M/mBI3PwAuODxAkLkq5HYuvrPYcUtiLzsTo8U3PgX3Ocww==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "graceful-fs": "^4.2.4",[m
[31m-        "tapable": "^2.2.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=10.13.0"[m
[31m-      }[m
[31m-    },[m
     "node_modules/esbuild": {[m
       "version": "0.25.9",[m
       "resolved": "https://registry.npmjs.org/esbuild/-/esbuild-0.25.9.tgz",[m
[36m@@ -2058,204 +1358,6 @@[m
         "node": ">=6"[m
       }[m
     },[m
[31m-    "node_modules/escape-string-regexp": {[m
[31m-      "version": "4.0.0",[m
[31m-      "resolved": "https://registry.npmjs.org/escape-string-regexp/-/escape-string-regexp-4.0.0.tgz",[m
[31m-      "integrity": "sha512-TtpcNJ3XAzx3Gq8sWRzJaVajRs0uVxA2YAkdb1jm2YkPz4G6egUFAyA3n5vtEIZefPk5Wa4UXbKuS5fKkJWdgA==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=10"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://github.com/sponsors/sindresorhus"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/eslint": {[m
[31m-      "version": "9.34.0",[m
[31m-      "resolved": "https://registry.npmjs.org/eslint/-/eslint-9.34.0.tgz",[m
[31m-      "integrity": "sha512-RNCHRX5EwdrESy3Jc9o8ie8Bog+PeYvvSR8sDGoZxNFTvZ4dlxUB3WzQ3bQMztFrSRODGrLLj8g6OFuGY/aiQg==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "@eslint-community/eslint-utils": "^4.2.0",[m
[31m-        "@eslint-community/regexpp": "^4.12.1",[m
[31m-        "@eslint/config-array": "^0.21.0",[m
[31m-        "@eslint/config-helpers": "^0.3.1",[m
[31m-        "@eslint/core": "^0.15.2",[m
[31m-        "@eslint/eslintrc": "^3.3.1",[m
[31m-        "@eslint/js": "9.34.0",[m
[31m-        "@eslint/plugin-kit": "^0.3.5",[m
[31m-        "@humanfs/node": "^0.16.6",[m
[31m-        "@humanwhocodes/module-importer": "^1.0.1",[m
[31m-        "@humanwhocodes/retry": "^0.4.2",[m
[31m-        "@types/estree": "^1.0.6",[m
[31m-        "@types/json-schema": "^7.0.15",[m
[31m-        "ajv": "^6.12.4",[m
[31m-        "chalk": "^4.0.0",[m
[31m-        "cross-spawn": "^7.0.6",[m
[31m-        "debug": "^4.3.2",[m
[31m-        "escape-string-regexp": "^4.0.0",[m
[31m-        "eslint-scope": "^8.4.0",[m
[31m-        "eslint-visitor-keys": "^4.2.1",[m
[31m-        "espree": "^10.4.0",[m
[31m-        "esquery": "^1.5.0",[m
[31m-        "esutils": "^2.0.2",[m
[31m-        "fast-deep-equal": "^3.1.3",[m
[31m-        "file-entry-cache": "^8.0.0",[m
[31m-        "find-up": "^5.0.0",[m
[31m-        "glob-parent": "^6.0.2",[m
[31m-        "ignore": "^5.2.0",[m
[31m-        "imurmurhash": "^0.1.4",[m
[31m-        "is-glob": "^4.0.0",[m
[31m-        "json-stable-stringify-without-jsonify": "^1.0.1",[m
[31m-        "lodash.merge": "^4.6.2",[m
[31m-        "minimatch": "^3.1.2",[m
[31m-        "natural-compare": "^1.4.0",[m
[31m-        "optionator": "^0.9.3"[m
[31m-      },[m
[31m-      "bin": {[m
[31m-        "eslint": "bin/eslint.js"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": "^18.18.0 || ^20.9.0 || >=21.1.0"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://eslint.org/donate"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "jiti": "*"[m
[31m-      },[m
[31m-      "peerDependenciesMeta": {[m
[31m-        "jiti": {[m
[31m-          "optional": true[m
[31m-        }[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/eslint-plugin-react-hooks": {[m
[31m-      "version": "5.2.0",[m
[31m-      "resolved": "https://registry.npmjs.org/eslint-plugin-react-hooks/-/eslint-plugin-react-hooks-5.2.0.tgz",[m
[31m-      "integrity": "sha512-+f15FfK64YQwZdJNELETdn5ibXEUQmW1DZL6KXhNnc2heoy/sg9VJJeT7n8TlMWouzWqSWavFkIhHyIbIAEapg==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=10"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "eslint": "^3.0.0 || ^4.0.0 || ^5.0.0 || ^6.0.0 || ^7.0.0 || ^8.0.0-0 || ^9.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/eslint-plugin-react-refresh": {[m
[31m-      "version": "0.4.20",[m
[31m-      "resolved": "https://registry.npmjs.org/eslint-plugin-react-refresh/-/eslint-plugin-react-refresh-0.4.20.tgz",[m
[31m-      "integrity": "sha512-XpbHQ2q5gUF8BGOX4dHe+71qoirYMhApEPZ7sfhF/dNnOF1UXnCMGZf79SFTBO7Bz5YEIT4TMieSlJBWhP9WBA==",[m
[31m-      "dev": true,[m
[31m-      "peerDependencies": {[m
[31m-        "eslint": ">=8.40"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/eslint-scope": {[m
[31m-      "version": "8.4.0",[m
[31m-      "resolved": "https://registry.npmjs.org/eslint-scope/-/eslint-scope-8.4.0.tgz",[m
[31m-      "integrity": "sha512-sNXOfKCn74rt8RICKMvJS7XKV/Xk9kA7DyJr8mJik3S7Cwgy3qlkkmyS2uQB3jiJg6VNdZd/pDBJu0nvG2NlTg==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "esrecurse": "^4.3.0",[m
[31m-        "estraverse": "^5.2.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": "^18.18.0 || ^20.9.0 || >=21.1.0"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://opencollective.com/eslint"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/eslint-visitor-keys": {[m
[31m-      "version": "4.2.1",[m
[31m-      "resolved": "https://registry.npmjs.org/eslint-visitor-keys/-/eslint-visitor-keys-4.2.1.tgz",[m
[31m-      "integrity": "sha512-Uhdk5sfqcee/9H/rCOJikYz67o0a2Tw2hGRPOG2Y1R2dg7brRe1uG0yaNQDHu+TO/uQPF/5eCapvYSmHUjt7JQ==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": "^18.18.0 || ^20.9.0 || >=21.1.0"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://opencollective.com/eslint"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/espree": {[m
[31m-      "version": "10.4.0",[m
[31m-      "resolved": "https://registry.npmjs.org/espree/-/espree-10.4.0.tgz",[m
[31m-      "integrity": "sha512-j6PAQ2uUr79PZhBjP5C5fhl8e39FmRnOjsD5lGnWrFU8i2G776tBK7+nP8KuQUTTyAZUwfQqXAgrVH5MbH9CYQ==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "acorn": "^8.15.0",[m
[31m-        "acorn-jsx": "^5.3.2",[m
[31m-        "eslint-visitor-keys": "^4.2.1"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": "^18.18.0 || ^20.9.0 || >=21.1.0"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://opencollective.com/eslint"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/esquery": {[m
[31m-      "version": "1.6.0",[m
[31m-      "resolved": "https://registry.npmjs.org/esquery/-/esquery-1.6.0.tgz",[m
[31m-      "integrity": "sha512-ca9pw9fomFcKPvFLXhBKUK90ZvGibiGOvRJNbjljY7s7uq/5YO4BOzcYtJqExdx99rF6aAcnRxHmcUHcz6sQsg==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "estraverse": "^5.1.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=0.10"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/esrecurse": {[m
[31m-      "version": "4.3.0",[m
[31m-      "resolved": "https://registry.npmjs.org/esrecurse/-/esrecurse-4.3.0.tgz",[m
[31m-      "integrity": "sha512-KmfKL3b6G+RXvP8N1vr3Tq1kL/oCFgn2NYXEtqP8/L3pKapUA4G8cFVaoF3SU323CD4XypR/ffioHmkti6/Tag==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "estraverse": "^5.2.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=4.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/estraverse": {[m
[31m-      "version": "5.3.0",[m
[31m-      "resolved": "https://registry.npmjs.org/estraverse/-/estraverse-5.3.0.tgz",[m
[31m-      "integrity": "sha512-MMdARuVEQziNTeJD8DgMqmhwR11BRQ/cBP+pLtYdSTnf3MIO8fFeiINEbX36ZdNlfU/7A9f3gUw49B3oQsvwBA==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=4.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/esutils": {[m
[31m-      "version": "2.0.3",[m
[31m-      "resolved": "https://registry.npmjs.org/esutils/-/esutils-2.0.3.tgz",[m
[31m-      "integrity": "sha512-kVscqXk4OCp68SZ0dkgEKVi6/8ij300KBWTJq32P/dYeWTSwK41WyTxalN1eRmA5Z9UU/LX9D7FWSmV9SAYx6g==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=0.10.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/fast-deep-equal": {[m
[31m-      "version": "3.1.3",[m
[31m-      "resolved": "https://registry.npmjs.org/fast-deep-equal/-/fast-deep-equal-3.1.3.tgz",[m
[31m-      "integrity": "sha512-f3qQ9oQy9j2AhBe/H9VC91wLmKBCCU/gDOnKNAYG5hswO7BLKj09Hc5HYNz9cGI++xlpDCIgDaitVs03ATR84Q==",[m
[31m-      "dev": true[m
[31m-    },[m
[31m-    "node_modules/fast-json-stable-stringify": {[m
[31m-      "version": "2.1.0",[m
[31m-      "resolved": "https://registry.npmjs.org/fast-json-stable-stringify/-/fast-json-stable-stringify-2.1.0.tgz",[m
[31m-      "integrity": "sha512-lhd/wF+Lk98HZoTCtlVraHtfh5XYijIjalXck7saUtuanSDyLMxnHhSXEDJqHxD7msR8D0uCmqlkwjCV8xvwHw==",[m
[31m-      "dev": true[m
[31m-    },[m
[31m-    "node_modules/fast-levenshtein": {[m
[31m-      "version": "2.0.6",[m
[31m-      "resolved": "https://registry.npmjs.org/fast-levenshtein/-/fast-levenshtein-2.0.6.tgz",[m
[31m-      "integrity": "sha512-DCXu6Ifhqcks7TZKY3Hxp3y6qphY5SJZmrWMDrKcERSOXWQdMhU9Ig/PYrzyw/ul9jOIyh0N4M0tbC5hodg8dw==",[m
[31m-      "dev": true[m
[31m-    },[m
     "node_modules/fdir": {[m
       "version": "6.5.0",[m
       "resolved": "https://registry.npmjs.org/fdir/-/fdir-6.5.0.tgz",[m
[36m@@ -2273,53 +1375,6 @@[m
         }[m
       }[m
     },[m
[31m-    "node_modules/file-entry-cache": {[m
[31m-      "version": "8.0.0",[m
[31m-      "resolved": "https://registry.npmjs.org/file-entry-cache/-/file-entry-cache-8.0.0.tgz",[m
[31m-      "integrity": "sha512-XXTUwCvisa5oacNGRP9SfNtYBNAMi+RPwBFmblZEF7N7swHYQS6/Zfk7SRwx4D5j3CH211YNRco1DEMNVfZCnQ==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "flat-cache": "^4.0.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=16.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/find-up": {[m
[31m-      "version": "5.0.0",[m
[31m-      "resolved": "https://registry.npmjs.org/find-up/-/find-up-5.0.0.tgz",[m
[31m-      "integrity": "sha512-78/PXT1wlLLDgTzDs7sjq9hzz0vXD+zn+7wypEe4fXQxCmdmqfGsEPQxmiCSQI3ajFV91bVSsvNtrJRiW6nGng==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "locate-path": "^6.0.0",[m
[31m-        "path-exists": "^4.0.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=10"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://github.com/sponsors/sindresorhus"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/flat-cache": {[m
[31m-      "version": "4.0.1",[m
[31m-      "resolved": "https://registry.npmjs.org/flat-cache/-/flat-cache-4.0.1.tgz",[m
[31m-      "integrity": "sha512-f7ccFPK3SXFHpx15UIGyRJ/FJQctuKZ0zVuN3frBo4HnK3cay9VEW0R6yPYFHC0AgqhukPzKjq22t5DmAyqGyw==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "flatted": "^3.2.9",[m
[31m-        "keyv": "^4.5.4"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=16"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/flatted": {[m
[31m-      "version": "3.3.3",[m
[31m-      "resolved": "https://registry.npmjs.org/flatted/-/flatted-3.3.3.tgz",[m
[31m-      "integrity": "sha512-GX+ysw4PBCz0PzosHDepZGANEuFCMLrnRTiEy9McGjmkCQYwRq4A/X786G/fjM/+OjsWSU1ZrY5qyARZmO/uwg==",[m
[31m-      "dev": true[m
[31m-    },[m
     "node_modules/fraction.js": {[m
       "version": "4.3.7",[m
       "resolved": "https://registry.npmjs.org/fraction.js/-/fraction.js-4.3.7.tgz",[m
[36m@@ -2334,159 +1389,61 @@[m
       }[m
     },[m
     "node_modules/framer-motion": {[m
[31m-      "version": "12.23.12",[m
[31m-      "resolved": "https://registry.npmjs.org/framer-motion/-/framer-motion-12.23.12.tgz",[m
[31m-      "integrity": "sha512-6e78rdVtnBvlEVgu6eFEAgG9v3wLnYEboM8I5O5EXvfKC8gxGQB8wXJdhkMy10iVcn05jl6CNw7/HTsTCfwcWg==",[m
[31m-      "dependencies": {[m
[31m-        "motion-dom": "^12.23.12",[m
[31m-        "motion-utils": "^12.23.6",[m
[31m-        "tslib": "^2.4.0"[m
[31m-      },[m
[31m-      "peerDependencies": {[m
[31m-        "@emotion/is-prop-valid": "*",[m
[31m-        "react": "^18.0.0 || ^19.0.0",[m
[31m-        "react-dom": "^18.0.0 || ^19.0.0"[m
[31m-      },[m
[31m-      "peerDependenciesMeta": {[m
[31m-        "@emotion/is-prop-valid": {[m
[31m-          "optional": true[m
[31m-        },[m
[31m-        "react": {[m
[31m-          "optional": true[m
[31m-        },[m
[31m-        "react-dom": {[m
[31m-          "optional": true[m
[31m-        }[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/fsevents": {[m
[31m-      "version": "2.3.3",[m
[31m-      "resolved": "https://registry.npmjs.org/fsevents/-/fsevents-2.3.3.tgz",[m
[31m-      "integrity": "sha512-5xoDfX+fL7faATnagmWPpbFtwh/R77WmMMqqHGS65C3vvB0YHrgF+B1YmZ3441tMj5n63k0212XNoJwzlhffQw==",[m
[31m-      "dev": true,[m
[31m-      "hasInstallScript": true,[m
[31m-      "optional": true,[m
[31m-      "os": [[m
[31m-        "darwin"[m
[31m-      ],[m
[31m-      "engines": {[m
[31m-        "node": "^8.16.0 || ^10.6.0 || >=11.0.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/gensync": {[m
[31m-      "version": "1.0.0-beta.2",[m
[31m-      "resolved": "https://registry.npmjs.org/gensync/-/gensync-1.0.0-beta.2.tgz",[m
[31m-      "integrity": "sha512-3hN7NaskYvMDLQY55gnW3NQ+mesEAepTqlg+VEbj7zzqEMBVNhzcGYYeqFo/TlYz6eQiFcp1HcsCZO+nGgS8zg==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=6.9.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/glob-parent": {[m
[31m-      "version": "6.0.2",[m
[31m-      "resolved": "https://registry.npmjs.org/glob-parent/-/glob-parent-6.0.2.tgz",[m
[31m-      "integrity": "sha512-XxwI8EOhVQgWp6iDL+3b0r86f4d6AX6zSU55HfB4ydCEuXLXc5FcYeOu+nnGftS4TEju/11rt4KJPTMgbfmv4A==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "is-glob": "^4.0.3"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=10.13.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/globals": {[m
[31m-      "version": "16.3.0",[m
[31m-      "resolved": "https://registry.npmjs.org/globals/-/globals-16.3.0.tgz",[m
[31m-      "integrity": "sha512-bqWEnJ1Nt3neqx2q5SFfGS8r/ahumIakg3HcwtNlrVlwXIeNumWn/c7Pn/wKzGhf6SaW6H6uWXLqC30STCMchQ==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=18"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://github.com/sponsors/sindresorhus"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/graceful-fs": {[m
[31m-      "version": "4.2.11",[m
[31m-      "resolved": "https://registry.npmjs.org/graceful-fs/-/graceful-fs-4.2.11.tgz",[m
[31m-      "integrity": "sha512-RbJ5/jmFcNNCcDV5o9eTnBLJ/HszWV0P73bc+Ff4nS/rJj+YaS6IGyiOL0VoBYX+l1Wrl3k63h/KrH+nhJ0XvQ==",[m
[31m-      "dev": true[m
[31m-    },[m
[31m-    "node_modules/has-flag": {[m
[31m-      "version": "4.0.0",[m
[31m-      "resolved": "https://registry.npmjs.org/has-flag/-/has-flag-4.0.0.tgz",[m
[31m-      "integrity": "sha512-EykJT/Q1KjTWctppgIAgfSO0tKVuZUjhgMr17kqTumMl6Afv3EISleU7qZUzoXDFTAHTDC4NOoG/ZxU3EvlMPQ==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=8"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/ignore": {[m
[31m-      "version": "5.3.2",[m
[31m-      "resolved": "https://registry.npmjs.org/ignore/-/ignore-5.3.2.tgz",[m
[31m-      "integrity": "sha512-hsBTNUqQTDwkWtcdYI2i06Y/nUBEsNEDJKjWdigLvegy8kDuJAS8uRlpkkcQpyEXL0Z/pjDy5HBmMjRCJ2gq+g==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">= 4"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/import-fresh": {[m
[31m-      "version": "3.3.1",[m
[31m-      "resolved": "https://registry.npmjs.org/import-fresh/-/import-fresh-3.3.1.tgz",[m
[31m-      "integrity": "sha512-TR3KfrTZTYLPB6jUjfx6MF9WcWrHL9su5TObK4ZkYgBdWKPOFoSoQIdEuTuR82pmtxH2spWG9h6etwfr1pLBqQ==",[m
[31m-      "dev": true,[m
[32m+[m[32m      "version": "12.23.12",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/framer-motion/-/framer-motion-12.23.12.tgz",[m
[32m+[m[32m      "integrity": "sha512-6e78rdVtnBvlEVgu6eFEAgG9v3wLnYEboM8I5O5EXvfKC8gxGQB8wXJdhkMy10iVcn05jl6CNw7/HTsTCfwcWg==",[m
       "dependencies": {[m
[31m-        "parent-module": "^1.0.0",[m
[31m-        "resolve-from": "^4.0.0"[m
[32m+[m[32m        "motion-dom": "^12.23.12",[m
[32m+[m[32m        "motion-utils": "^12.23.6",[m
[32m+[m[32m        "tslib": "^2.4.0"[m
       },[m
[31m-      "engines": {[m
[31m-        "node": ">=6"[m
[32m+[m[32m      "peerDependencies": {[m
[32m+[m[32m        "@emotion/is-prop-valid": "*",[m
[32m+[m[32m        "react": "^18.0.0 || ^19.0.0",[m
[32m+[m[32m        "react-dom": "^18.0.0 || ^19.0.0"[m
       },[m
[31m-      "funding": {[m
[31m-        "url": "https://github.com/sponsors/sindresorhus"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/imurmurhash": {[m
[31m-      "version": "0.1.4",[m
[31m-      "resolved": "https://registry.npmjs.org/imurmurhash/-/imurmurhash-0.1.4.tgz",[m
[31m-      "integrity": "sha512-JmXMZ6wuvDmLiHEml9ykzqO6lwFbof0GG4IkcGaENdCRDDmMVnny7s5HsIgHCbaq0w2MyPhDqkhTUgS2LU2PHA==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=0.8.19"[m
[32m+[m[32m      "peerDependenciesMeta": {[m
[32m+[m[32m        "@emotion/is-prop-valid": {[m
[32m+[m[32m          "optional": true[m
[32m+[m[32m        },[m
[32m+[m[32m        "react": {[m
[32m+[m[32m          "optional": true[m
[32m+[m[32m        },[m
[32m+[m[32m        "react-dom": {[m
[32m+[m[32m          "optional": true[m
[32m+[m[32m        }[m
       }[m
     },[m
[31m-    "node_modules/is-extglob": {[m
[31m-      "version": "2.1.1",[m
[31m-      "resolved": "https://registry.npmjs.org/is-extglob/-/is-extglob-2.1.1.tgz",[m
[31m-      "integrity": "sha512-SbKbANkN603Vi4jEZv49LeVJMn4yGwsbzZworEoyEiutsN3nJYdbO36zfhGJ6QEDpOZIFkDtnq5JRxmvl3jsoQ==",[m
[32m+[m[32m    "node_modules/fsevents": {[m
[32m+[m[32m      "version": "2.3.3",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/fsevents/-/fsevents-2.3.3.tgz",[m
[32m+[m[32m      "integrity": "sha512-5xoDfX+fL7faATnagmWPpbFtwh/R77WmMMqqHGS65C3vvB0YHrgF+B1YmZ3441tMj5n63k0212XNoJwzlhffQw==",[m
       "dev": true,[m
[32m+[m[32m      "hasInstallScript": true,[m
[32m+[m[32m      "optional": true,[m
[32m+[m[32m      "os": [[m
[32m+[m[32m        "darwin"[m
[32m+[m[32m      ],[m
       "engines": {[m
[31m-        "node": ">=0.10.0"[m
[32m+[m[32m        "node": "^8.16.0 || ^10.6.0 || >=11.0.0"[m
       }[m
     },[m
[31m-    "node_modules/is-glob": {[m
[31m-      "version": "4.0.3",[m
[31m-      "resolved": "https://registry.npmjs.org/is-glob/-/is-glob-4.0.3.tgz",[m
[31m-      "integrity": "sha512-xelSayHH36ZgE7ZWhli7pW34hNbNl8Ojv5KVmkJD4hBdD3th8Tfk9vYasLM+mXWOZhFkgZfxhLSnrwRr4elSSg==",[m
[32m+[m[32m    "node_modules/gensync": {[m
[32m+[m[32m      "version": "1.0.0-beta.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/gensync/-/gensync-1.0.0-beta.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-3hN7NaskYvMDLQY55gnW3NQ+mesEAepTqlg+VEbj7zzqEMBVNhzcGYYeqFo/TlYz6eQiFcp1HcsCZO+nGgS8zg==",[m
       "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "is-extglob": "^2.1.1"[m
[31m-      },[m
       "engines": {[m
[31m-        "node": ">=0.10.0"[m
[32m+[m[32m        "node": ">=6.9.0"[m
       }[m
     },[m
[31m-    "node_modules/isexe": {[m
[31m-      "version": "2.0.0",[m
[31m-      "resolved": "https://registry.npmjs.org/isexe/-/isexe-2.0.0.tgz",[m
[31m-      "integrity": "sha512-RHxMLp9lnKHGHRng9QFhRCMbYAcVpn69smSGcq3f36xjgVVWThj4qqLbTLlq7Ssj8B+fIQ1EuCEGI2lKsyQeIw==",[m
[31m-      "dev": true[m
[31m-    },[m
     "node_modules/jiti": {[m
       "version": "2.5.1",[m
       "resolved": "https://registry.npmjs.org/jiti/-/jiti-2.5.1.tgz",[m
       "integrity": "sha512-twQoecYPiVA5K/h6SxtORw/Bs3ar+mLUtoPSc7iMXzQzK8d7eJ/R09wmTwAjiamETn1cXYPGfNnu7DMoHgu12w==",[m
       "dev": true,[m
[32m+[m[32m      "optional": true,[m
[32m+[m[32m      "peer": true,[m
       "bin": {[m
         "jiti": "lib/jiti-cli.mjs"[m
       }[m
[36m@@ -2497,18 +1454,6 @@[m
       "integrity": "sha512-RdJUflcE3cUzKiMqQgsCu06FPu9UdIJO0beYbPhHN4k6apgJtifcoCtT9bcxOpYBtpD2kCM6Sbzg4CausW/PKQ==",[m
       "dev": true[m
     },[m
[31m-    "node_modules/js-yaml": {[m
[31m-      "version": "4.1.0",[m
[31m-      "resolved": "https://registry.npmjs.org/js-yaml/-/js-yaml-4.1.0.tgz",[m
[31m-      "integrity": "sha512-wpxZs9NoxZaJESJGIZTyDEaYpl0FKSA+FB9aJiyemKhMwkxQg63h4T1KJgUGHpTqPDNRcmmYLugrRjJlBtWvRA==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "argparse": "^2.0.1"[m
[31m-      },[m
[31m-      "bin": {[m
[31m-        "js-yaml": "bin/js-yaml.js"[m
[31m-      }[m
[31m-    },[m
     "node_modules/jsesc": {[m
       "version": "3.1.0",[m
       "resolved": "https://registry.npmjs.org/jsesc/-/jsesc-3.1.0.tgz",[m
[36m@@ -2521,24 +1466,6 @@[m
         "node": ">=6"[m
       }[m
     },[m
[31m-    "node_modules/json-buffer": {[m
[31m-      "version": "3.0.1",[m
[31m-      "resolved": "https://registry.npmjs.org/json-buffer/-/json-buffer-3.0.1.tgz",[m
[31m-      "integrity": "sha512-4bV5BfR2mqfQTJm+V5tPPdf+ZpuhiIvTuAB5g8kcrXOZpTT/QwwVRWBywX1ozr6lEuPdbHxwaJlm9G6mI2sfSQ==",[m
[31m-      "dev": true[m
[31m-    },[m
[31m-    "node_modules/json-schema-traverse": {[m
[31m-      "version": "0.4.1",[m
[31m-      "resolved": "https://registry.npmjs.org/json-schema-traverse/-/json-schema-traverse-0.4.1.tgz",[m
[31m-      "integrity": "sha512-xbbCH5dCYU5T8LcEhhuh7HJ88HXuW3qsI3Y0zOZFKfZEHcpWiHU/Jxzk629Brsab/mMiHQti9wMP+845RPe3Vg==",[m
[31m-      "dev": true[m
[31m-    },[m
[31m-    "node_modules/json-stable-stringify-without-jsonify": {[m
[31m-      "version": "1.0.1",[m
[31m-      "resolved": "https://registry.npmjs.org/json-stable-stringify-without-jsonify/-/json-stable-stringify-without-jsonify-1.0.1.tgz",[m
[31m-      "integrity": "sha512-Bdboy+l7tA3OGW6FjyFHWkP5LuByj1Tk33Ljyq0axyzdk9//JSi2u3fP1QSmd1KNwq6VOKYGlAu87CisVir6Pw==",[m
[31m-      "dev": true[m
[31m-    },[m
     "node_modules/json5": {[m
       "version": "2.2.3",[m
       "resolved": "https://registry.npmjs.org/json5/-/json5-2.2.3.tgz",[m
[36m@@ -2551,33 +1478,13 @@[m
         "node": ">=6"[m
       }[m
     },[m
[31m-    "node_modules/keyv": {[m
[31m-      "version": "4.5.4",[m
[31m-      "resolved": "https://registry.npmjs.org/keyv/-/keyv-4.5.4.tgz",[m
[31m-      "integrity": "sha512-oxVHkHR/EJf2CNXnWxRLW6mg7JyCCUcG0DtEGmL2ctUo1PNTin1PUil+r/+4r5MpVgC/fn1kjsx7mjSujKqIpw==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "json-buffer": "3.0.1"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/levn": {[m
[31m-      "version": "0.4.1",[m
[31m-      "resolved": "https://registry.npmjs.org/levn/-/levn-0.4.1.tgz",[m
[31m-      "integrity": "sha512-+bT2uH4E5LGE7h/n3evcS/sQlJXCpIp6ym8OWJ5eV6+67Dsql/LaaT7qJBAt2rzfoa/5QBGBhxDix1dMt2kQKQ==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "prelude-ls": "^1.2.1",[m
[31m-        "type-check": "~0.4.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">= 0.8.0"[m
[31m-      }[m
[31m-    },[m
     "node_modules/lightningcss": {[m
       "version": "1.30.1",[m
       "resolved": "https://registry.npmjs.org/lightningcss/-/lightningcss-1.30.1.tgz",[m
       "integrity": "sha512-xi6IyHML+c9+Q3W0S4fCQJOym42pyurFiJUHEcEyHS0CeKzia4yZDEsLlqOFykxOdHpNy0NmvVO31vcSqAxJCg==",[m
       "dev": true,[m
[32m+[m[32m      "optional": true,[m
[32m+[m[32m      "peer": true,[m
       "dependencies": {[m
         "detect-libc": "^2.0.3"[m
       },[m
[36m@@ -2613,6 +1520,7 @@[m
       "os": [[m
         "darwin"[m
       ],[m
[32m+[m[32m      "peer": true,[m
       "engines": {[m
         "node": ">= 12.0.0"[m
       },[m
[36m@@ -2633,6 +1541,7 @@[m
       "os": [[m
         "darwin"[m
       ],[m
[32m+[m[32m      "peer": true,[m
       "engines": {[m
         "node": ">= 12.0.0"[m
       },[m
[36m@@ -2653,6 +1562,7 @@[m
       "os": [[m
         "freebsd"[m
       ],[m
[32m+[m[32m      "peer": true,[m
       "engines": {[m
         "node": ">= 12.0.0"[m
       },[m
[36m@@ -2673,6 +1583,7 @@[m
       "os": [[m
         "linux"[m
       ],[m
[32m+[m[32m      "peer": true,[m
       "engines": {[m
         "node": ">= 12.0.0"[m
       },[m
[36m@@ -2693,6 +1604,7 @@[m
       "os": [[m
         "linux"[m
       ],[m
[32m+[m[32m      "peer": true,[m
       "engines": {[m
         "node": ">= 12.0.0"[m
       },[m
[36m@@ -2713,6 +1625,7 @@[m
       "os": [[m
         "linux"[m
       ],[m
[32m+[m[32m      "peer": true,[m
       "engines": {[m
         "node": ">= 12.0.0"[m
       },[m
[36m@@ -2733,6 +1646,7 @@[m
       "os": [[m
         "linux"[m
       ],[m
[32m+[m[32m      "peer": true,[m
       "engines": {[m
         "node": ">= 12.0.0"[m
       },[m
[36m@@ -2753,6 +1667,7 @@[m
       "os": [[m
         "linux"[m
       ],[m
[32m+[m[32m      "peer": true,[m
       "engines": {[m
         "node": ">= 12.0.0"[m
       },[m
[36m@@ -2773,6 +1688,7 @@[m
       "os": [[m
         "win32"[m
       ],[m
[32m+[m[32m      "peer": true,[m
       "engines": {[m
         "node": ">= 12.0.0"[m
       },[m
[36m@@ -2793,6 +1709,7 @@[m
       "os": [[m
         "win32"[m
       ],[m
[32m+[m[32m      "peer": true,[m
       "engines": {[m
         "node": ">= 12.0.0"[m
       },[m
[36m@@ -2801,27 +1718,6 @@[m
         "url": "https://opencollective.com/parcel"[m
       }[m
     },[m
[31m-    "node_modules/locate-path": {[m
[31m-      "version": "6.0.0",[m
[31m-      "resolved": "https://registry.npmjs.org/locate-path/-/locate-path-6.0.0.tgz",[m
[31m-      "integrity": "sha512-iPZK6eYjbxRu3uB4/WZ3EsEIMJFMqAoopl3R+zuq0UjcAm/MO6KCweDgPfP3elTztoKP3KtnVHxTn2NHBSDVUw==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "p-locate": "^5.0.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=10"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://github.com/sponsors/sindresorhus"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/lodash.merge": {[m
[31m-      "version": "4.6.2",[m
[31m-      "resolved": "https://registry.npmjs.org/lodash.merge/-/lodash.merge-4.6.2.tgz",[m
[31m-      "integrity": "sha512-0KpjqXRVvrYyCsX1swR/XTK0va6VQkQM6MNo7PqW77ByjAhoARA8EfrP1N4+KlKj8YS0ZUCtRT/YUuhyYDujIQ==",[m
[31m-      "dev": true[m
[31m-    },[m
     "node_modules/lru-cache": {[m
       "version": "5.1.1",[m
       "resolved": "https://registry.npmjs.org/lru-cache/-/lru-cache-5.1.1.tgz",[m
[36m@@ -2839,63 +1735,6 @@[m
         "react": "^16.5.1 || ^17.0.0 || ^18.0.0 || ^19.0.0"[m
       }[m
     },[m
[31m-    "node_modules/magic-string": {[m
[31m-      "version": "0.30.18",[m
[31m-      "resolved": "https://registry.npmjs.org/magic-string/-/magic-string-0.30.18.tgz",[m
[31m-      "integrity": "sha512-yi8swmWbO17qHhwIBNeeZxTceJMeBvWJaId6dyvTSOwTipqeHhMhOrz6513r1sOKnpvQ7zkhlG8tPrpilwTxHQ==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "@jridgewell/sourcemap-codec": "^1.5.5"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/minimatch": {[m
[31m-      "version": "3.1.2",[m
[31m-      "resolved": "https://registry.npmjs.org/minimatch/-/minimatch-3.1.2.tgz",[m
[31m-      "integrity": "sha512-J7p63hRiAjw1NDEww1W7i37+ByIrOWO5XQQAzZ3VOcL0PNybwpfmV/N05zFAzwQ9USyEcX6t3UO+K5aqBQOIHw==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "brace-expansion": "^1.1.7"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": "*"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/minipass": {[m
[31m-      "version": "7.1.2",[m
[31m-      "resolved": "https://registry.npmjs.org/minipass/-/minipass-7.1.2.tgz",[m
[31m-      "integrity": "sha512-qOOzS1cBTWYF4BH8fVePDBOO9iptMnGUEZwNc/cMWnTV2nVLZ7VoNWEPHkYczZA0pdoA7dl6e7FL659nX9S2aw==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=16 || 14 >=14.17"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/minizlib": {[m
[31m-      "version": "3.0.2",[m
[31m-      "resolved": "https://registry.npmjs.org/minizlib/-/minizlib-3.0.2.tgz",[m
[31m-      "integrity": "sha512-oG62iEk+CYt5Xj2YqI5Xi9xWUeZhDI8jjQmC5oThVH5JGCTgIjr7ciJDzC7MBzYd//WvR1OTmP5Q38Q8ShQtVA==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "minipass": "^7.1.2"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">= 18"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/mkdirp": {[m
[31m-      "version": "3.0.1",[m
[31m-      "resolved": "https://registry.npmjs.org/mkdirp/-/mkdirp-3.0.1.tgz",[m
[31m-      "integrity": "sha512-+NsyUUAZDmo6YVHzL/stxSu3t9YS1iljliy3BSDrXJ/dkn1KYdmtZODGGjLcc9XLgVVpH4KshHB8XmZgMhaBXg==",[m
[31m-      "dev": true,[m
[31m-      "bin": {[m
[31m-        "mkdirp": "dist/cjs/src/bin.js"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=10"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://github.com/sponsors/isaacs"[m
[31m-      }[m
[31m-    },[m
     "node_modules/motion-dom": {[m
       "version": "12.23.12",[m
       "resolved": "https://registry.npmjs.org/motion-dom/-/motion-dom-12.23.12.tgz",[m
[36m@@ -2933,12 +1772,6 @@[m
         "node": "^10 || ^12 || ^13.7 || ^14 || >=15.0.1"[m
       }[m
     },[m
[31m-    "node_modules/natural-compare": {[m
[31m-      "version": "1.4.0",[m
[31m-      "resolved": "https://registry.npmjs.org/natural-compare/-/natural-compare-1.4.0.tgz",[m
[31m-      "integrity": "sha512-OWND8ei3VtNC9h7V60qff3SVobHr996CTwgxubgyQYEpg290h9J0buyECNNJexkFm5sOajh5G116RYA1c8ZMSw==",[m
[31m-      "dev": true[m
[31m-    },[m
     "node_modules/node-releases": {[m
       "version": "2.0.19",[m
       "resolved": "https://registry.npmjs.org/node-releases/-/node-releases-2.0.19.tgz",[m
[36m@@ -2954,83 +1787,6 @@[m
         "node": ">=0.10.0"[m
       }[m
     },[m
[31m-    "node_modules/optionator": {[m
[31m-      "version": "0.9.4",[m
[31m-      "resolved": "https://registry.npmjs.org/optionator/-/optionator-0.9.4.tgz",[m
[31m-      "integrity": "sha512-6IpQ7mKUxRcZNLIObR0hz7lxsapSSIYNZJwXPGeF0mTVqGKFIXj1DQcMoT22S3ROcLyY/rz0PWaWZ9ayWmad9g==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "deep-is": "^0.1.3",[m
[31m-        "fast-levenshtein": "^2.0.6",[m
[31m-        "levn": "^0.4.1",[m
[31m-        "prelude-ls": "^1.2.1",[m
[31m-        "type-check": "^0.4.0",[m
[31m-        "word-wrap": "^1.2.5"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">= 0.8.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/p-limit": {[m
[31m-      "version": "3.1.0",[m
[31m-      "resolved": "https://registry.npmjs.org/p-limit/-/p-limit-3.1.0.tgz",[m
[31m-      "integrity": "sha512-TYOanM3wGwNGsZN2cVTYPArw454xnXj5qmWF1bEoAc4+cU/ol7GVh7odevjp1FNHduHc3KZMcFduxU5Xc6uJRQ==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "yocto-queue": "^0.1.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=10"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://github.com/sponsors/sindresorhus"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/p-locate": {[m
[31m-      "version": "5.0.0",[m
[31m-      "resolved": "https://registry.npmjs.org/p-locate/-/p-locate-5.0.0.tgz",[m
[31m-      "integrity": "sha512-LaNjtRWUBY++zB5nE/NwcaoMylSPk+S+ZHNB1TzdbMJMny6dynpAGt7X/tl/QYq3TIeE6nxHppbo2LGymrG5Pw==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "p-limit": "^3.0.2"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=10"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://github.com/sponsors/sindresorhus"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/parent-module": {[m
[31m-      "version": "1.0.1",[m
[31m-      "resolved": "https://registry.npmjs.org/parent-module/-/parent-module-1.0.1.tgz",[m
[31m-      "integrity": "sha512-GQ2EWRpQV8/o+Aw8YqtfZZPfNRWZYkbidE9k5rpl/hC3vtHHBfGm2Ifi6qWV+coDGkrUKZAxE3Lot5kcsRlh+g==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "callsites": "^3.0.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=6"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/path-exists": {[m
[31m-      "version": "4.0.0",[m
[31m-      "resolved": "https://registry.npmjs.org/path-exists/-/path-exists-4.0.0.tgz",[m
[31m-      "integrity": "sha512-ak9Qy5Q7jYb2Wwcey5Fpvg2KoAc/ZIhLSLOSBmRmygPsGwkVVt0fZa0qrtMz+m6tJTAHfZQ8FnmB4MG4LWy7/w==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=8"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/path-key": {[m
[31m-      "version": "3.1.1",[m
[31m-      "resolved": "https://registry.npmjs.org/path-key/-/path-key-3.1.1.tgz",[m
[31m-      "integrity": "sha512-ojmeN0qd+y0jszEtoY48r0Peq5dwMEkIlCOu6Q5f41lfkswXuKtYrhgoTpLnyIcHm24Uhqx+5Tqm2InSwLhE6Q==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=8"[m
[31m-      }[m
[31m-    },[m
     "node_modules/picocolors": {[m
       "version": "1.1.1",[m
       "resolved": "https://registry.npmjs.org/picocolors/-/picocolors-1.1.1.tgz",[m
[36m@@ -3083,24 +1839,6 @@[m
       "integrity": "sha512-1NNCs6uurfkVbeXG4S8JFT9t19m45ICnif8zWLd5oPSZ50QnwMfK+H3jv408d4jw/7Bttv5axS5IiHoLaVNHeQ==",[m
       "dev": true[m
     },[m
[31m-    "node_modules/prelude-ls": {[m
[31m-      "version": "1.2.1",[m
[31m-      "resolved": "https://registry.npmjs.org/prelude-ls/-/prelude-ls-1.2.1.tgz",[m
[31m-      "integrity": "sha512-vkcDPrRZo1QZLbn5RLGPpg/WmIQ65qoWWhcGKf/b5eplkkarX0m9z8ppCat4mlOqUsWpyNuYgO3VRyrYHSzX5g==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">= 0.8.0"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/punycode": {[m
[31m-      "version": "2.3.1",[m
[31m-      "resolved": "https://registry.npmjs.org/punycode/-/punycode-2.3.1.tgz",[m
[31m-      "integrity": "sha512-vYt7UD1U9Wg6138shLtLOvdAu+8DsC/ilFtEVHcH+wydcSpNE20AfSOduf6MkRFahL5FY7X1oU7nKVZFtfq8Fg==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=6"[m
[31m-      }[m
[31m-    },[m
     "node_modules/react": {[m
       "version": "19.1.1",[m
       "resolved": "https://registry.npmjs.org/react/-/react-19.1.1.tgz",[m
[36m@@ -3165,15 +1903,6 @@[m
         "react-dom": ">=18"[m
       }[m
     },[m
[31m-    "node_modules/resolve-from": {[m
[31m-      "version": "4.0.0",[m
[31m-      "resolved": "https://registry.npmjs.org/resolve-from/-/resolve-from-4.0.0.tgz",[m
[31m-      "integrity": "sha512-pb/MYmXstAkysRFx8piNI1tGFNQIFA3vkE3Gq4EuA1dF6gHp/+vgZqsCGJapvy8N3Q+4o7FwvquPJcnZ7RYy4g==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=4"[m
[31m-      }[m
[31m-    },[m
     "node_modules/rollup": {[m
       "version": "4.49.0",[m
       "resolved": "https://registry.npmjs.org/rollup/-/rollup-4.49.0.tgz",[m
[36m@@ -3232,27 +1961,6 @@[m
       "resolved": "https://registry.npmjs.org/set-cookie-parser/-/set-cookie-parser-2.7.1.tgz",[m
       "integrity": "sha512-IOc8uWeOZgnb3ptbCURJWNjWUPcO3ZnTTdzsurqERrP6nPyv+paC55vJM0LpOlT2ne+Ix+9+CRG1MNLlyZ4GjQ=="[m
     },[m
[31m-    "node_modules/shebang-command": {[m
[31m-      "version": "2.0.0",[m
[31m-      "resolved": "https://registry.npmjs.org/shebang-command/-/shebang-command-2.0.0.tgz",[m
[31m-      "integrity": "sha512-kHxr2zZpYtdmrN1qDjrrX/Z1rR1kG8Dx+gkpK1G4eXmvXswmcE1hTWBWYUzlraYw1/yZp6YuDY77YtvbN0dmDA==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "shebang-regex": "^3.0.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=8"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/shebang-regex": {[m
[31m-      "version": "3.0.0",[m
[31m-      "resolved": "https://registry.npmjs.org/shebang-regex/-/shebang-regex-3.0.0.tgz",[m
[31m-      "integrity": "sha512-7++dFhtcx3353uBaq8DDR4NuxBetBzC7ZQOhmTQInHEd6bSrXdiEyzCvG07Z44UYdLShWUyXt5M/yhz8ekcb1A==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=8"[m
[31m-      }[m
[31m-    },[m
     "node_modules/source-map-js": {[m
       "version": "1.2.1",[m
       "resolved": "https://registry.npmjs.org/source-map-js/-/source-map-js-1.2.1.tgz",[m
[36m@@ -3262,75 +1970,12 @@[m
         "node": ">=0.10.0"[m
       }[m
     },[m
[31m-    "node_modules/strip-json-comments": {[m
[31m-      "version": "3.1.1",[m
[31m-      "resolved": "https://registry.npmjs.org/strip-json-comments/-/strip-json-comments-3.1.1.tgz",[m
[31m-      "integrity": "sha512-6fPc+R4ihwqP6N/aIv2f1gMH8lOVtWQHoqC4yK6oSDVVocumAsfCqjkXnqiYMhmMwS/mEHLp7Vehlt3ql6lEig==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=8"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://github.com/sponsors/sindresorhus"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/supports-color": {[m
[31m-      "version": "7.2.0",[m
[31m-      "resolved": "https://registry.npmjs.org/supports-color/-/supports-color-7.2.0.tgz",[m
[31m-      "integrity": "sha512-qpCAvRl9stuOHveKsn7HncJRvv501qIacKzQlO/+Lwxc9+0q2wLyv4Dfvt80/DPn2pqOBsJdDiogXGR9+OvwRw==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "has-flag": "^4.0.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=8"[m
[31m-      }[m
[31m-    },[m
     "node_modules/tailwindcss": {[m
       "version": "4.1.12",[m
       "resolved": "https://registry.npmjs.org/tailwindcss/-/tailwindcss-4.1.12.tgz",[m
       "integrity": "sha512-DzFtxOi+7NsFf7DBtI3BJsynR+0Yp6etH+nRPTbpWnS2pZBaSksv/JGctNwSWzbFjp0vxSqknaUylseZqMDGrA==",[m
       "dev": true[m
     },[m
[31m-    "node_modules/tapable": {[m
[31m-      "version": "2.2.3",[m
[31m-      "resolved": "https://registry.npmjs.org/tapable/-/tapable-2.2.3.tgz",[m
[31m-      "integrity": "sha512-ZL6DDuAlRlLGghwcfmSn9sK3Hr6ArtyudlSAiCqQ6IfE+b+HHbydbYDIG15IfS5do+7XQQBdBiubF/cV2dnDzg==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=6"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "type": "opencollective",[m
[31m-        "url": "https://opencollective.com/webpack"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/tar": {[m
[31m-      "version": "7.4.3",[m
[31m-      "resolved": "https://registry.npmjs.org/tar/-/tar-7.4.3.tgz",[m
[31m-      "integrity": "sha512-5S7Va8hKfV7W5U6g3aYxXmlPoZVAwUMy9AOKyF2fVuZa2UD3qZjg578OrLRt8PcNN1PleVaL/5/yYATNL0ICUw==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "@isaacs/fs-minipass": "^4.0.0",[m
[31m-        "chownr": "^3.0.0",[m
[31m-        "minipass": "^7.1.2",[m
[31m-        "minizlib": "^3.0.1",[m
[31m-        "mkdirp": "^3.0.1",[m
[31m-        "yallist": "^5.0.0"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">=18"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/tar/node_modules/yallist": {[m
[31m-      "version": "5.0.0",[m
[31m-      "resolved": "https://registry.npmjs.org/yallist/-/yallist-5.0.0.tgz",[m
[31m-      "integrity": "sha512-YgvUTfwqyc7UXVMrB+SImsVYSmTS8X/tSrtdNZMImM+n7+QTriRXyXim0mBrTXNeqzVF0KWGgHPeiyViFFrNDw==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=18"[m
[31m-      }[m
[31m-    },[m
     "node_modules/tinyglobby": {[m
       "version": "0.2.14",[m
       "resolved": "https://registry.npmjs.org/tinyglobby/-/tinyglobby-0.2.14.tgz",[m
[36m@@ -3357,18 +2002,6 @@[m
       "resolved": "https://registry.npmjs.org/tslib/-/tslib-2.8.1.tgz",[m
       "integrity": "sha512-oJFu94HQb+KVduSUQL7wnpmqnfmLsOA/nAh6b6EH0wCEoK0/mPeXU6c3wKDV83MkOuHPRHtSXKKU99IBazS/2w=="[m
     },[m
[31m-    "node_modules/type-check": {[m
[31m-      "version": "0.4.0",[m
[31m-      "resolved": "https://registry.npmjs.org/type-check/-/type-check-0.4.0.tgz",[m
[31m-      "integrity": "sha512-XleUoc9uwGXqjWwXaUTZAmzMcFZ5858QA2vvx1Ur5xIcixXIP+8LnFDgRplU30us6teqdlskFfu+ae4K79Ooew==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "prelude-ls": "^1.2.1"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">= 0.8.0"[m
[31m-      }[m
[31m-    },[m
     "node_modules/undici-types": {[m
       "version": "7.10.0",[m
       "resolved": "https://registry.npmjs.org/undici-types/-/undici-types-7.10.0.tgz",[m
[36m@@ -3404,15 +2037,6 @@[m
         "browserslist": ">= 4.21.0"[m
       }[m
     },[m
[31m-    "node_modules/uri-js": {[m
[31m-      "version": "4.4.1",[m
[31m-      "resolved": "https://registry.npmjs.org/uri-js/-/uri-js-4.4.1.tgz",[m
[31m-      "integrity": "sha512-7rKUyy33Q1yc98pQ1DAmLtwX109F7TIfWlW1Ydo8Wl1ii1SeHieeh0HHfPeL2fMXK6z0s8ecKs9frCuLJvndBg==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "punycode": "^2.1.0"[m
[31m-      }[m
[31m-    },[m
     "node_modules/vite": {[m
       "version": "7.1.3",[m
       "resolved": "https://registry.npmjs.org/vite/-/vite-7.1.3.tgz",[m
[36m@@ -3501,30 +2125,6 @@[m
         "webidl-conversions": "^3.0.0"[m
       }[m
     },[m
[31m-    "node_modules/which": {[m
[31m-      "version": "2.0.2",[m
[31m-      "resolved": "https://registry.npmjs.org/which/-/which-2.0.2.tgz",[m
[31m-      "integrity": "sha512-BLI3Tl1TW3Pvl70l3yq3Y64i+awpwXqsGBYWkkqMtnbXgrMD+yj7rhW0kuEDxzJaYXGjEW5ogapKNMEKNMjibA==",[m
[31m-      "dev": true,[m
[31m-      "dependencies": {[m
[31m-        "isexe": "^2.0.0"[m
[31m-      },[m
[31m-      "bin": {[m
[31m-        "node-which": "bin/node-which"[m
[31m-      },[m
[31m-      "engines": {[m
[31m-        "node": ">= 8"[m
[31m-      }[m
[31m-    },[m
[31m-    "node_modules/word-wrap": {[m
[31m-      "version": "1.2.5",[m
[31m-      "resolved": "https://registry.npmjs.org/word-wrap/-/word-wrap-1.2.5.tgz",[m
[31m-      "integrity": "sha512-BN22B5eaMMI9UMtjrGd5g5eCYPpCPDUy0FJXbYsaT5zYxjFOckS53SQDE3pWkVoWpHXVb3BrYcEN4Twa55B5cA==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=0.10.0"[m
[31m-      }[m
[31m-    },[m
     "node_modules/ws": {[m
       "version": "8.18.3",[m
       "resolved": "https://registry.npmjs.org/ws/-/ws-8.18.3.tgz",[m
[36m@@ -3550,18 +2150,6 @@[m
       "resolved": "https://registry.npmjs.org/yallist/-/yallist-3.1.1.tgz",[m
       "integrity": "sha512-a4UGQaWPH59mOXUYnAG2ewncQS4i4F43Tv3JoAM+s2VDAmS9NsK8GpDMLrCHPksFT7h3K6TOoUNn2pb7RoXx4g==",[m
       "dev": true[m
[31m-    },[m
[31m-    "node_modules/yocto-queue": {[m
[31m-      "version": "0.1.0",[m
[31m-      "resolved": "https://registry.npmjs.org/yocto-queue/-/yocto-queue-0.1.0.tgz",[m
[31m-      "integrity": "sha512-rVksvsnNCdJ/ohGc6xgPwyN8eheCxsiLM8mxuE/t/mOVqJewPuO1miLpTHQiRgTKCLexL4MeAFVagts7HmNZ2Q==",[m
[31m-      "dev": true,[m
[31m-      "engines": {[m
[31m-        "node": ">=10"[m
[31m-      },[m
[31m-      "funding": {[m
[31m-        "url": "https://github.com/sponsors/sindresorhus"[m
[31m-      }[m
     }[m
   }[m
 }[m
[1mdiff --git a/web/package.json b/web/package.json[m
[1mindex be4192a..9c99f63 100644[m
[1m--- a/web/package.json[m
[1m+++ b/web/package.json[m
[36m@@ -6,8 +6,7 @@[m
   "scripts": {[m
     "dev": "vite",[m
     "build": "vite build",[m
[31m-    "lint": "eslint .",[m
[31m-    "preview": "vite preview"[m
[32m+[m[32m    "preview": "vite preview --strictPort --port 5173"[m
   },[m
   "dependencies": {[m
     "@supabase/supabase-js": "^2.56.1",[m
[36m@@ -18,16 +17,8 @@[m
     "react-router-dom": "^7.8.2"[m
   },[m
   "devDependencies": {[m
[31m-    "@eslint/js": "^9.33.0",[m
[31m-    "@tailwindcss/postcss": "^4.1.12",[m
[31m-    "@types/react": "^19.1.10",[m
[31m-    "@types/react-dom": "^19.1.7",[m
     "@vitejs/plugin-react": "^5.0.2",[m
     "autoprefixer": "^10.4.21",[m
[31m-    "eslint": "^9.33.0",[m
[31m-    "eslint-plugin-react-hooks": "^5.2.0",[m
[31m-    "eslint-plugin-react-refresh": "^0.4.20",[m
[31m-    "globals": "^16.3.0",[m
     "postcss": "^8.5.6",[m
     "tailwindcss": "^4.1.12",[m
     "vite": "^7.1.2"[m
[1mdiff --git a/web/src/App.jsx b/web/src/App.jsx[m
[1mindex 8ae7cc4..13dc307 100644[m
[1m--- a/web/src/App.jsx[m
[1m+++ b/web/src/App.jsx[m
[36m@@ -1,242 +1,14 @@[m
[31m-import { useEffect } from "react";[m
[31m-import {[m
[31m-  Rocket,[m
[31m-  Wrench,[m
[31m-  ClipboardCheck,[m
[31m-  BarChart3,[m
[31m-  Phone,[m
[31m-  Mail,[m
[31m-} from "lucide-react";[m
[31m-[m
[31m-/** smooth scroll helper */[m
[31m-function scrollToId(id) {[m
[31m-  const el = document.getElementById(id);[m
[31m-  if (el) el.scrollIntoView({ behavior: "smooth", block: "start" });[m
[31m-}[m
[31m-[m
[31m-export default function RootedVisionsSite() {[m
[31m-  useEffect(() => {[m
[31m-    document.title =[m
[31m-      "Rooted Visions — Rooted in Community. Built for the Future.";[m
[31m-  }, []);[m
[31m-[m
[32m+[m[32mexport default function App() {[m
   return ([m
[31m-    <div className="min-h-screen bg-gray-50 text-gray-900">[m
[31m-      {/* Header */}[m
[31m-      <header className="sticky top-0 z-40 bg-white/70 backdrop-blur border-b border-gray-100">[m
[31m-        <div className="mx-auto max-w-7xl px-4 h-16 flex items-center justify-between">[m
[31m-          {/* Brand */}[m
[31m-          <a[m
[31m-            href={import.meta.env.BASE_URL}[m
[31m-            className="inline-flex items-center gap-2 font-semibold"[m
[31m-          >[m
[31m-            <span className="inline-block size-2 rounded-full bg-emerald-500" />[m
[31m-            Rooted Visions[m
[31m-          </a>[m
[31m-[m
[31m-          {/* Desktop nav */}[m
[31m-          <nav className="hidden md:flex items-center gap-6 text-sm">[m
[31m-            <button onClick={() => scrollToId("services")} className="hover:text-emerald-700">[m
[31m-              Services[m
[31m-            </button>[m
[31m-            <button onClick={() => scrollToId("work")} className="hover:text-emerald-700">[m
[31m-              Work[m
[31m-            </button>[m
[31m-            <button onClick={() => scrollToId("about")} className="hover:text-emerald-700">[m
[31m-              About[m
[31m-            </button>[m
[31m-            <button onClick={() => scrollToId("contact")} className="hover:text-emerald-700">[m
[31m-              Contact[m
[31m-            </button>[m
[31m-[m
[31m-            {/* 👇 Client portal link */}[m
[31m-            <a[m
[31m-              href={`${import.meta.env.BASE_URL}portal`}[m
[31m-              className="inline-flex items-center gap-2 rounded-2xl px-4 py-2 text-sm font-medium shadow-sm ring-1 ring-gray-200 hover:ring-emerald-500 transition"[m
[31m-            >[m
[31m-              Client portal[m
[31m-            </a>[m
[31m-[m
[31m-            <a[m
[31m-              href="#contact"[m
[31m-              onClick={(e) => {[m
[31m-                e.preventDefault();[m
[31m-                scrollToId("contact");[m
[31m-              }}[m
[31m-              className="inline-flex items-center gap-2 rounded-2xl bg-emerald-600 text-white px-4 py-2 text-sm font-medium shadow-sm hover:bg-emerald-700 transition"[m
[31m-            >[m
[31m-              Free consult[m
[31m-            </a>[m
[31m-          </nav>[m
[31m-        </div>[m
[32m+[m[32m    <main className="mx-auto max-w-4xl p-6">[m
[32m+[m[32m      <header className="flex items-center justify-between py-3">[m
[32m+[m[32m        <div className="font-semibold">Rooted Visions</div>[m
[32m+[m[32m        <a href={`${import.meta.env.BASE_URL}portal`} className="rounded bg-emerald-600 text-white px-3 py-1">Client portal</a>[m
       </header>[m
[31m-[m
[31m-      {/* Hero */}[m
[31m-      <section id="hero" className="relative overflow-hidden">[m
[31m-        <div className="absolute inset-0 bg-gradient-to-b from-emerald-50/60 to-transparent pointer-events-none" />[m
[31m-        <div className="mx-auto max-w-7xl px-4 py-16 grid gap-10 lg:grid-cols-2">[m
[31m-          <div>[m
[31m-            <span className="inline-flex items-center gap-2 rounded-full ring-1 ring-gray-200 px-3 py-1 text-xs font-medium mb-4 bg-white">[m
[31m-              Free, fast, and lightweight[m
[31m-            </span>[m
[31m-            <h1 className="text-4xl/tight sm:text-5xl font-bold">[m
[31m-              Systems that give your team{" "}[m
[31m-              <span className="text-emerald-600">time back</span>[m
[31m-            </h1>[m
[31m-            <p className="mt-4 text-gray-600 max-w-xl">[m
[31m-              Rooted Visions — Rooted in Community. Built for the Future.[m
[31m-              We help schools, nonprofits, and small teams streamline[m
[31m-              operations with automation, clear SOPs, and real-time KPIs —[m
[31m-              without breaking the budget.[m
[31m-            </p>[m
[31m-            <div className="mt-6 flex flex-wrap gap-3">[m
[31m-              <button[m
[31m-                onClick={() => scrollToId("contact")}[m
[31m-                className="inline-flex items-center gap-2 rounded-2xl bg-emerald-600 text-white px-4 py-2 text-sm font-medium shadow-sm hover:bg-emerald-700 transition"[m
[31m-              >[m
[31m-                Get a free consult[m
[31m-              </button>[m
[31m-              <button[m
[31m-                onClick={() => scrollToId("services")}[m
[31m-                className="inline-flex items-center gap-2 rounded-2xl px-4 py-2 text-sm font-medium shadow-sm ring-1 ring-gray-200 hover:ring-emerald-500 transition"[m
[31m-              >[m
[31m-                Explore services[m
[31m-              </button>[m
[31m-            </div>[m
[31m-          </div>[m
[31m-[m
[31m-          {/* Quick list card */}[m
[31m-          <div className="lg:pl-8">[m
[31m-            <div className="rounded-2xl border border-gray-200 bg-white shadow-sm p-4 divide-y">[m
[31m-              {[[m
[31m-                ["Grant intake ➜ CRM"],[m
[31m-                ["Field trip SOPs"],[m
[31m-                ["Attendance dashboard"],[m
[31m-              ].map(([title], i) => ([m
[31m-                <div key={i} className="py-4">[m
[31m-                  <div className="text-sm font-medium">{title}</div>[m
[31m-                </div>[m
[31m-              ))}[m
[31m-            </div>[m
[31m-          </div>[m
[31m-        </div>[m
[31m-      </section>[m
[31m-[m
[31m-      {/* Services */}[m
[31m-      <section id="services" className="mx-auto max-w-7xl px-4 py-14">[m
[31m-        <h2 className="text-2xl font-bold">What we do</h2>[m
[31m-        <p className="mt-2 text-gray-600">[m
[31m-          Start simple, scale smart. Pick a starter package and we tailor it to your context.[m
[31m-        </p>[m
[31m-[m
[31m-        <div className="mt-8 grid gap-6 sm:grid-cols-2 lg:grid-cols-4">[m
[31m-          <Card[m
[31m-            icon={<Wrench className="size-5" />}[m
[31m-            title="Workflow Automation"[m
[31m-            desc="Zapier/Make, AI assistants, and low-code tools to remove busywork."[m
[31m-          />[m
[31m-          <Card[m
[31m-            icon={<ClipboardCheck className="size-5" />}[m
[31m-            title="Ops Consulting"[m
[31m-            desc="SOPs, playbooks, and systems design for schools, nonprofits, and small orgs."[m
[31m-          />[m
[31m-          <Card[m
[31m-            icon={<BarChart3 className="size-5" />}[m
[31m-            title="Dashboards & Data"[m
[31m-            desc="Clean pipelines, KPI dashboards, and lightweight analytics you can trust."[m
[31m-          />[m
[31m-          <Card[m
[31m-            icon={<Rocket className="size-5" />}[m
[31m-            title="Training & Enablement"[m
[31m-            desc="Onboarding, change-management, and workshops that stick."[m
[31m-          />[m
[31m-        </div>[m
[31m-[m
[31m-        <div className="mt-8 rounded-2xl bg-emerald-600 text-white p-6 flex items-center justify-between">[m
[31m-          <div>[m
[31m-            <div className="font-semibold">Launch Week: $0 starter</div>[m
[31m-            <p className="text-emerald-50 text-sm mt-1 max-w-2xl">[m
[31m-              We’ll scope one process, sketch your SOP, and prototype a quick automation — free.[m
[31m-              If you love it, we’ll expand.[m
[31m-            </p>[m
[31m-          </div>[m
[31m-          <Rocket className="size-6" />[m
[31m-        </div>[m
[31m-      </section>[m
[31m-[m
[31m-      {/* Work */}[m
[31m-      <section id="work" className="mx-auto max-w-7xl px-4 py-14">[m
[31m-        <h2 className="text-2xl font-bold">Recent work</h2>[m
[31m-        <p className="mt-2 text-gray-600">[m
[31m-          A few examples we’ve helped teams ship quickly and safely.[m
[31m-        </p>[m
[31m-        <ul className="mt-6 list-disc pl-6 space-y-1 text-gray-700">[m
[31m-          <li>Grant intake → CRM sync with approvals</li>[m
[31m-          <li>Field trip checklist & automated reminders</li>[m
[31m-          <li>Attendance dashboard with weekly snapshots</li>[m
[31m-        </ul>[m
[31m-      </section>[m
[31m-[m
[31m-      {/* About */}[m
[31m-      <section id="about" className="mx-auto max-w-7xl px-4 py-14">[m
[31m-        <h2 className="text-2xl font-bold">About</h2>[m
[31m-        <p className="mt-2 text-gray-600 max-w-2xl">[m
[31m-          Rooted in community, focused on affordable systems that save time and reduce errors.[m
[31m-          Pragmatic, transparent, and friendly.[m
[31m-        </p>[m
[32m+[m[32m      <section className="mt-10 space-y-4">[m
[32m+[m[32m        <h1 className="text-3xl font-bold">Systems that give your team <span className="text-emerald-600">time back</span></h1>[m
[32m+[m[32m        <p className="opacity-80">Streamlined operations with automation, SOPs, and real-time KPIs.</p>[m
       </section>[m
[31m-[m
[31m-      {/* Contact */}[m
[31m-      <section id="contact" className="mx-auto max-w-7xl px-4 py-14">[m
[31m-        <div className="rounded-2xl border border-gray-200 bg-white p-6 shadow-sm">[m
[31m-          <h2 className="text-2xl font-bold">Let’s chat</h2>[m
[31m-          <p className="mt-2 text-gray-600">[m
[31m-            Book a 20-minute call. Tell us your bottleneck; we’ll show a quick path to value.[m
[31m-          </p>[m
[31m-          <div className="mt-6 flex flex-wrap gap-3">[m
[31m-            <a[m
[31m-              href="mailto:hello@example.com"[m
[31m-              className="inline-flex items-center gap-2 rounded-2xl px-4 py-2 text-sm font-medium shadow-sm ring-1 ring-gray-200 hover:ring-emerald-500 transition"[m
[31m-            >[m
[31m-              <Mail className="size-4" />[m
[31m-              hello@example.com[m
[31m-            </a>[m
[31m-            <a[m
[31m-              href="tel:+15551234567"[m
[31m-              className="inline-flex items-center gap-2 rounded-2xl px-4 py-2 text-sm font-medium shadow-sm ring-1 ring-gray-200 hover:ring-emerald-500 transition"[m
[31m-            >[m
[31m-              <Phone className="size-4" />[m
[31m-              +1 (555) 123-4567[m
[31m-            </a>[m
[31m-          </div>[m
[31m-        </div>[m
[31m-      </section>[m
[31m-[m
[31m-      {/* Footer */}[m
[31m-      <footer className="border-t border-gray-100">[m
[31m-        <div className="mx-auto max-w-7xl px-4 py-6 text-sm text-gray-500 flex items-center justify-between">[m
[31m-          <span>© {new Date().getFullYear()} Rooted Visions. All rights reserved.</span>[m
[31m-          <a[m
[31m-            href={`${import.meta.env.BASE_URL}portal`}[m
[31m-            className="inline-flex items-center gap-2 rounded-xl px-3 py-1.5 ring-1 ring-gray-200 hover:ring-emerald-500 transition"[m
[31m-          >[m
[31m-            Client portal[m
[31m-          </a>[m
[31m-        </div>[m
[31m-      </footer>[m
[31m-    </div>[m
[31m-  );[m
[31m-}[m
[31m-[m
[31m-/** simple card component */[m
[31m-function Card({ icon, title, desc }) {[m
[31m-  return ([m
[31m-    <div className="rounded-2xl border border-gray-200 bg-white p-5 shadow-sm">[m
[31m-      <div className="inline-flex items-center justify-center size-9 rounded-xl bg-emerald-50 text-emerald-700">[m
[31m-        {icon}[m
[31m-      </div>[m
[31m-      <h3 className="mt-3 font-semibold">{title}</h3>[m
[31m-      <p className="mt-1 text-sm text-gray-600">{desc}</p>[m
[31m-    </div>[m
[31m-  );[m
[32m+[m[32m    </main>[m
[32m+[m[32m  )[m
 }[m
[1mdiff --git a/web/src/index.css b/web/src/index.css[m
[1mindex f1d8c73..d0eecbf 100644[m
[1m--- a/web/src/index.css[m
[1m+++ b/web/src/index.css[m
[36m@@ -1 +1,3 @@[m
[31m-@import "tailwindcss";[m
[32m+[m[32m:root { color-scheme: light; }[m
[32m+[m[32mhtml, body, #root { height: 100%; }[m
[32m+[m[32mbody { margin: 0; font-family: ui-sans-serif, system-ui, -apple-system, Segoe UI, Roboto, "Helvetica Neue", Arial, "Noto Sans", "Apple Color Emoji", "Segoe UI Emoji"; }[m
[1mdiff --git a/web/src/lib/supabase.js b/web/src/lib/supabase.js[m
[1mindex b69316e..b105047 100644[m
[1m--- a/web/src/lib/supabase.js[m
[1m+++ b/web/src/lib/supabase.js[m
[36m@@ -1,6 +1,19 @@[m
[31m-import { createClient } from '@supabase/supabase-js';[m
[32m+[m[32mimport { createClient } from '@supabase/supabase-js'[m
 [m
[31m-export const supabase = createClient([m
[31m-  import.meta.env.VITE_SUPABASE_URL,[m
[31m-  import.meta.env.VITE_SUPABASE_ANON_KEY[m
[31m-);[m
[32m+[m[32mconst url  = import.meta.env.VITE_SUPABASE_URL[m
[32m+[m[32mconst anon = import.meta.env.VITE_SUPABASE_ANON_KEY[m
[32m+[m
[32m+[m[32mconsole.log('[supabase] url set:', Boolean(url))[m
[32m+[m[32mconsole.log('[supabase] anon key set:', Boolean(anon))[m
[32m+[m
[32m+[m[32mexport const supabase = (url && anon) ? createClient(url, anon) : null[m
[32m+[m
[32m+[m[32mif (!url || !anon) {[m
[32m+[m[32m  console.warn('[Portal] Missing VITE_SUPABASE_URL / VITE_SUPABASE_ANON_KEY in web/.env.local')[m
[32m+[m[32m} else {[m
[32m+[m[32m  try {[m
[32m+[m[32m    console.log('[Portal] Supabase host:', new URL(url).host)[m
[32m+[m[32m  } catch {[m
[32m+[m[32m    console.error('[Portal] Invalid VITE_SUPABASE_URL:', url)[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/web/src/main.jsx b/web/src/main.jsx[m
[1mindex 7024941..aa8ec4f 100644[m
[1m--- a/web/src/main.jsx[m
[1m+++ b/web/src/main.jsx[m
[36m@@ -1,18 +1,26 @@[m
[31m-import { StrictMode } from "react";[m
[31m-import { createRoot } from "react-dom/client";[m
[31m-import { BrowserRouter, Routes, Route } from "react-router-dom";[m
[31m-import App from "./App.jsx";[m
[31m-import Portal from "./pages/Portal.jsx";[m
[31m-import "./index.css";[m
[32m+[m[32mimport React from 'react'[m
[32m+[m[32mimport { createRoot } from 'react-dom/client'[m
[32m+[m[32mimport { BrowserRouter, Routes, Route, Navigate } from 'react-router-dom'[m
[32m+[m[32mimport App from './App.jsx'[m
[32m+[m[32mimport Portal from './pages/Portal.jsx'[m
[32m+[m[32mimport './index.css'[m
 [m
[31m-createRoot(document.getElementById("root")).render([m
[31m-  <StrictMode>[m
[31m-    {/* Keep base so routes work under /rooted-visions-site/ */}[m
[31m-    <BrowserRouter basename={import.meta.env.BASE_URL}>[m
[31m-      <Routes>[m
[31m-        <Route path="/" element={<App />} />[m
[31m-        <Route path="/portal" element={<Portal />} />[m
[31m-      </Routes>[m
[31m-    </BrowserRouter>[m
[31m-  </StrictMode>[m
[31m-);[m
\ No newline at end of file[m
[32m+[m[32mconst BASE_URL = import.meta.env.BASE_URL ?? '/'[m
[32m+[m[32mconsole.log('[main] BASE_URL =', BASE_URL)[m
[32m+[m
[32m+[m[32mconst rootEl = document.getElementById('root')[m
[32m+[m[32mif (!rootEl) {[m
[32m+[m[32m  console.error('[main] No #root. Is index.html correct?')[m
[32m+[m[32m} else {[m
[32m+[m[32m  createRoot(rootEl).render([m
[32m+[m[32m    <React.StrictMode>[m
[32m+[m[32m      <BrowserRouter basename={BASE_URL}>[m
[32m+[m[32m        <Routes>[m
[32m+[m[32m          <Route path="/" element={<App />} />[m
[32m+[m[32m          <Route path="portal" element={<Portal />} />[m
[32m+[m[32m          <Route path="*" element={<Navigate to="/" replace />} />[m
[32m+[m[32m        </Routes>[m
[32m+[m[32m      </BrowserRouter>[m
[32m+[m[32m    </React.StrictMode>[m
[32m+[m[32m  )[m
[32m+[m[32m}[m
[1mdiff --git a/web/src/pages/Portal.jsx b/web/src/pages/Portal.jsx[m
[1mindex 402cacb..02baec6 100644[m
[1m--- a/web/src/pages/Portal.jsx[m
[1m+++ b/web/src/pages/Portal.jsx[m
[36m@@ -1,21 +1,60 @@[m
[32m+[m[32mimport { useState } from 'react'[m
[32m+[m[32mimport { supabase } from '../lib/supabase.js'[m
[32m+[m
 export default function Portal() {[m
[32m+[m[32m  if (!supabase) {[m
[32m+[m[32m    return ([m
[32m+[m[32m      <div className="mx-auto max-w-xl p-6">[m
[32m+[m[32m        <h1 className="text-2xl font-semibold mb-2">Portal unavailable</h1>[m
[32m+[m[32m        <p className="text-sm opacity-80">[m
[32m+[m[32m          Supabase is not configured. Add <code>VITE_SUPABASE_URL</code> and <code>VITE_SUPABASE_ANON_KEY</code> to <code>web/.env.local</code> and restart the dev server.[m
[32m+[m[32m        </p>[m
[32m+[m[32m      </div>[m
[32m+[m[32m    )[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  const [email, setEmail] = useState('')[m
[32m+[m[32m  const [status, setStatus] = useState('')[m
[32m+[m
[32m+[m[32m  const redirectTo = `${location.origin}${import.meta.env.BASE_URL}portal`[m
[32m+[m
[32m+[m[32m  async function signIn(e) {[m
[32m+[m[32m    e.preventDefault()[m
[32m+[m[32m    setStatus('')[m
[32m+[m[32m    try {[m
[32m+[m[32m      const { error } = await supabase.auth.signInWithOtp({[m
[32m+[m[32m        email,[m
[32m+[m[32m        options: { emailRedirectTo: redirectTo, shouldCreateUser: true }[m
[32m+[m[32m      })[m
[32m+[m[32m      if (error) throw error[m
[32m+[m[32m      setStatus('Check your email for the magic link.')[m
[32m+[m[32m    } catch (err) {[m
[32m+[m[32m      console.error(err)[m
[32m+[m[32m      setStatus(err?.message || 'Failed to send magic link.')[m
[32m+[m[32m    }[m
[32m+[m[32m  }[m
[32m+[m
   return ([m
[31m-    <div className="min-h-screen bg-gray-50">[m
[31m-      <header className="sticky top-0 z-40 bg-white/70 backdrop-blur border-b border-gray-100">[m
[31m-        <div className="mx-auto max-w-5xl px-4 h-14 flex items-center justify-between">[m
[31m-          <a href={import.meta.env.BASE_URL} className="font-semibold">Rooted Visions</a>[m
[31m-          <div className="text-sm text-gray-500">Client Portal</div>[m
[31m-        </div>[m
[32m+[m[32m    <div className="mx-auto max-w-xl p-6">[m
[32m+[m[32m      <header className="flex items-center justify-between mb-6">[m
[32m+[m[32m        <a href={import.meta.env.BASE_URL} className="text-sm opacity-70 hover:opacity-100">← Back</a>[m
[32m+[m[32m        <div className="text-sm opacity-70">Client Portal</div>[m
       </header>[m
[31m-[m
[31m-      <main className="mx-auto max-w-5xl px-4 py-10">[m
[31m-        <div className="rounded-2xl border border-gray-200 bg-white p-6 shadow-sm">[m
[31m-          <h1 className="text-2xl font-bold">Welcome</h1>[m
[31m-          <p className="mt-2 text-gray-600">[m
[31m-            This is your portal. Next we’ll add sign-in and secure uploads.[m
[31m-          </p>[m
[31m-        </div>[m
[31m-      </main>[m
[32m+[m[32m      <h1 className="text-2xl font-semibold mb-4">Sign in</h1>[m
[32m+[m[32m      <form onSubmit={signIn} className="space-y-3">[m
[32m+[m[32m        <input[m
[32m+[m[32m          type="email"[m
[32m+[m[32m          required[m
[32m+[m[32m          value={email}[m
[32m+[m[32m          onChange={(e) => setEmail(e.target.value)}[m
[32m+[m[32m          placeholder="you@work.org"[m
[32m+[m[32m          className="w-full rounded border px-3 py-2"[m
[32m+[m[32m        />[m
[32m+[m[32m        <button type="submit" className="rounded bg-emerald-600 px-4 py-2 text-white hover:bg-emerald-700">[m
[32m+[m[32m          Send magic link[m
[32m+[m[32m        </button>[m
[32m+[m[32m      </form>[m
[32m+[m[32m      {status && <p className="mt-3 text-sm">{status}</p>}[m
     </div>[m
[31m-  );[m
[32m+[m[32m  )[m
 }[m
[1mdiff --git a/web/vite.config.js b/web/vite.config.js[m
[1mindex afa16b1..ff62205 100644[m
[1m--- a/web/vite.config.js[m
[1m+++ b/web/vite.config.js[m
[36m@@ -1,7 +1,10 @@[m
 import { defineConfig } from 'vite'[m
 import react from '@vitejs/plugin-react'[m
 [m
[32m+[m[32m// IMPORTANT:[m
[32m+[m[32m// - When deployed to GitHub Pages, your site is served under /rooted-visions-site/[m
[32m+[m[32m// - In dev, Vite ignores base for script tags, but we still use BASE_URL in the app.[m
 export default defineConfig({[m
[31m-  plugins: [react()],[m
[31m-  base: '/rooted-visions-site/', // MUST match your repo name[m
[32m+[m[32m  base: '/rooted-visions-site/',[m
[32m+[m[32m  plugins: [react()][m
 })[m
