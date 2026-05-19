<script>
	import { resolve } from '$app/paths';

	let { title = 'Temp' } = $props();
</script>

<nav class="w-full bg-[#3F0157] px-2 py-5">
	<a href={resolve('/')} class="font-sans text-4xl font-bold text-[#FCB827]">
		{title}
	</a>
</nav>
