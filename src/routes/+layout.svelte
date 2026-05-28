<script lang="ts">
	import './layout.css';
	import Navbar from '../components/Navbar.svelte';
	import favicon from '$lib/assets/favicon.ico';
	import Schedule from '../components/Schedule.svelte';
	import Overview from '../components/Overview.svelte';
	import Footer from '../components/Footer.svelte';

	let { children } = $props();
</script>

<svelte:head><link rel="icon" href={favicon} /></svelte:head>
<Navbar title="Software Design and Analysis III" />
<div class="h-full w-full bg-linear-to-b from-[#FFFFFF] to-[#3f015730] p-2 pt-35 md:h-screen">
	<Overview />
	<Schedule />
</div>
<Footer />
{@render children()}
