<script lang="ts">
	import './layout.css';
	import favicon from '$lib/assets/favicon.ico';

	let { children } = $props();
</script>

<svelte:head>
	<title>Software Design and Analysis III</title>
	<link rel="icon" href={favicon} />
</svelte:head>
{@render children()}
