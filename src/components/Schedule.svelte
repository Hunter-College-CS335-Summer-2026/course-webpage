<script>
	import { asset } from '$app/paths';
	import { tooltip } from 'svooltip';
	import 'svooltip/styles.css';
</script>

<div class="container mx-auto pt-10 pb-30">
	<div class="-mx-4 overflow-x-auto px-4">
		<table
			class="w-full border-collapse overflow-x-scroll border-2 border-[#3F0157] text-center md:border-separate"
		>
			<caption
				class="text-md border-2 border-b-0 bg-[#FCB827] p-2 text-center font-extrabold tracking-widest text-[#3F0157] uppercase md:border-b-0 lg:text-lg xl:text-xl"
			>
				schedule
			</caption>
			<thead
				class="md:text-md text-sm font-semibold text-[#3F0157] md:bg-[#3F0157] md:text-white lg:text-lg"
			>
				<tr>
					<th class="border border-[#3F0157] p-3">Date</th>
					<th class="border border-[#3F0157] p-3">Topics</th>
					<th class="border border-[#3F0157] p-3">Material</th>
					<th class="border border-[#3F0157] p-3">Extras</th>
					<th class="border border-[#3F0157] p-3">Assignments</th>
				</tr>
			</thead>
			<tbody>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">05/28</td>
					<td class="border border-[#3F0157] p-3">
						<p>Logistics</p>
						<p>Review of CS235</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a href={asset('/Syllabus.pdf')} rel="noopener noreferrer" target="_blank">Syllabus</a
							>
						</p>
						<p class="text-blue-700 hover:opacity-75">
							<a
								href="https://hunter-college-cs235-summer-2024.github.io/Hunter_CS235_Summer24/"
								target="_blank">CS235 Course Webpage</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3"></td>
					<td class="border border-[#3F0157] p-3"></td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">06/01</td>
					<td class="border border-[#3F0157] p-3">
						<p>Mathematics Review</p>
						<p>Sorting Review</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href={asset('/slides/01_Mathematical_Background.pdf')}
								rel="noopener noreferrer"
								target="_blank">Mathematical Background</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3"></td>
					<td class="border border-[#3F0157] p-3"></td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">06/02</td>
					<td class="border border-[#3F0157] p-3">
						<p>Algorithm Analysis</p>
						<p>Sorting Continued</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href={asset('/slides/02_Algorithm_Analysis.pdf')}
								rel="noopener noreferrer"
								target="_blank">Algorithm Analysis</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3"></td>
					<td class="border border-[#3F0157] p-3"></td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">06/03</td>
					<td class="border border-[#3F0157] p-3">
						<!-- <p>Algorithm Analysis</p> -->
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<!-- <p class="text-blue-700 hover:opacity-75">
							<a
								href={asset('/slides/02_Algorithm_Analysis.pdf')}
								rel="noopener noreferrer"
								target="_blank">Algorithm Analysis</a
							>
						</p> -->
					</td>
					<td class="border border-[#3F0157] p-3"></td>
					<td class="border border-[#3F0157] p-3"></td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">06/04</td>
					<td class="border border-[#3F0157] p-3">
						<!-- <p>Algorithm Analysis</p> -->
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<!-- <p class="text-blue-700 hover:opacity-75">
							<a
								href={asset('/slides/02_Algorithm_Analysis.pdf')}
								rel="noopener noreferrer"
								target="_blank">Algorithm Analysis</a
							>
						</p> -->
					</td>
					<td class="border border-[#3F0157] p-3"></td>
					<td class="border border-[#3F0157] p-3 font-bold">
						<button
							use:tooltip={{
								content: `<div class='text-center text-[#FCB827] p-2'>
									<div>Mathematics Background</div>
									<div>Algorithm Analysis</div>
									<div>Big-O Notation</div>
								</div>`,
								html: true,
								placement: 'top',
								offset: 15
							}}
							class="cursor-pointer hover:font-bold"
						>
							Quiz 1
						</button>
					</td>
				</tr>
			</tbody>
		</table>
	</div>
</div>
