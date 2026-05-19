<script lang="ts">
	import './layout.css';
	import Navbar from '../components/Navbar.svelte';
	import favicon from '$lib/assets/favicon.ico';

	let { children } = $props();
</script>

<svelte:head><link rel="icon" href={favicon} /></svelte:head>
<Navbar title="Software Design and Analysis III" />
{@render children()}
