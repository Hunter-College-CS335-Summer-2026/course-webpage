<script lang="ts">
	import './layout.css';

	let { children } = $props();
</script>

<svelte:head>
	<title>Software Design and Analysis III</title>
	<link rel="icon" href="/favicon.ico" />
</svelte:head>
{@render children()}
