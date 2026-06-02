<script>
	import Footer from '../components/Footer.svelte';
	import Navbar from '../components/Navbar.svelte';
	import Overview from '../components/Overview.svelte';
	import Schedule from '../components/Schedule.svelte';
</script>

<div class="flex min-h-screen w-full flex-col">
	<Navbar title="Software Design and Analysis III" />
	<div class="grow bg-linear-to-b from-[#FFFFFF] to-[#3f015730] p-2 pt-35">
		<Overview />
		<Schedule />
	</div>
	<Footer />
</div>
