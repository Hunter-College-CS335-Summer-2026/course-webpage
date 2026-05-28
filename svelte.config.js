import adapter from '@sveltejs/adapter-static';
import { vitePreprocess } from '@sveltejs/vite-plugin-svelte';

const dev = process.env.NODE_ENV === 'development';

/** @type {import('@sveltejs/kit').Config} */
const config = {
	preprocess: vitePreprocess(),
	compilerOptions: {
		runes: true
	},
	kit: {
		adapter: adapter({
			pages: 'build',
			assets: 'build',
			fallback: '404.html',
			strict: false
		}),
		paths: {
			base: dev ? '' : '/course-webpage',
			relative: false
		},
		prerender: {
			handleHttpError: ({ path, message }) => {
				if (path === '/') {
					return;
				}
				throw new Error(message);
			},
			handleUnseenRoutes: 'ignore'
		}
	}
};

export default config;
