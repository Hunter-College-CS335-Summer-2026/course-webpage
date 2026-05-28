<script>
	import Footer from '../components/Footer.svelte';
	import Navbar from '../components/Navbar.svelte';
	import Overview from '../components/Overview.svelte';
	import Schedule from '../components/Schedule.svelte';
</script>

<Navbar title="Software Design and Analysis III" />
<div class="h-full w-full bg-linear-to-b from-[#FFFFFF] to-[#3f015730] p-2 pt-35 md:h-screen">
	<Overview />
	<Schedule />
</div>
<Footer />
