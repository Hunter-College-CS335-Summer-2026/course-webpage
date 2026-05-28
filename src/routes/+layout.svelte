<script lang="ts">
	import './layout.css';
	import { asset } from '$app/paths';

	let { children } = $props();
</script>

<svelte:head>
	<title>Software Design and Analysis III</title>
	<link rel="icon" href={asset('/favicon.ico')} />
</svelte:head>
{@render children()}
