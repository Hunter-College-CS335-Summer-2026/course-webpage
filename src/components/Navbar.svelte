<script>
	import { resolve } from '$app/paths';
	import Icon from '@iconify/svelte';

	let { title = null } = $props();
	// responsive hamburger menu
	let menu = $state(false);
	function toggleMenu() {
		menu = !menu;
	}
</script>

<nav class="fixed top-0 z-50 w-full bg-[#3F0157] shadow-lg">
	<div class="container mx-auto p-5">
		<div class="flex h-16 items-center justify-between">
			<a
				href={resolve('/')}
				class="font-sans text-xl font-bold text-[#FCB827] lg:text-2xl xl:text-4xl"
			>
				{title}
			</a>
			<!-- Hamburger Menu Button -->
			<button
				title="menu-btn"
				onclick={toggleMenu}
				class="cursor-pointer focus:outline-none md:hidden"
			>
				<Icon
					icon="mdi:hamburger-menu-back"
					class="{menu ? 'hidden' : 'flex'} h-6 w-6 text-white"
				/>
				<Icon icon="mdi:menu-close" class="{menu ? 'flex' : 'hidden'} h-6 w-6 text-white" />
			</button>
			<!-- Regular Menu Items -->
			<div
				class="lg:text-md ml-2 hidden space-x-6 text-sm font-semibold text-white md:flex xl:text-lg"
			>
				<!-- <a href="#" class="hover:font-bold hover:text-[#FCB827]">Projects</a> -->
				<a href="#" class="hover:font-bold hover:text-[#FCB827]">Syllabus</a>
				<a href="#" class="hover:font-bold hover:text-[#FCB827]">Gradescope</a>
			</div>
		</div>
		<!-- Mobile Menu Items -->
		<div
			class="{menu
				? 'flex'
				: 'hidden'} lg:text-md flex-col text-center text-sm font-bold text-white md:hidden xl:text-lg"
		>
			<!-- <a href="#" class="block rounded px-2 py-2 hover:bg-[#FCB827] hover:text-[#3F0157]"
				>Projects</a
			> -->
			<a href="#" class="block rounded px-2 py-2 hover:bg-[#FCB827] hover:text-[#3F0157]"
				>Syllabus</a
			>
			<a href="#" class="block rounded px-2 py-2 hover:bg-[#FCB827] hover:text-[#3F0157]"
				>Gradescope</a
			>
		</div>
	</div>
</nav>
