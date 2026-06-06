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
						<p>Selection Sort</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href={asset('/slides/01_Mathematical_Background.pdf')}
								rel="noopener noreferrer"
								target="_blank">Mathematical Background</a
							>
						</p>
						<p class="text-blue-700 hover:opacity-75">
							<a href={asset('/slides/00_Sorting.pdf')} rel="noopener noreferrer" target="_blank"
								>Sorting Review</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href="https://ece.uwaterloo.ca/~dwharder/aads/Lecture_materials/1.02.Mathematical_background.pdf"
								rel="noopener noreferrer"
								target="_blank">Reading(Optional)</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3"></td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">06/02</td>
					<td class="border border-[#3F0157] p-3">
						<p>Algorithm Analysis</p>
						<p>Insertion Sort</p>
						<p>Bubble Sort</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href={asset('/slides/02_Algorithm_Analysis.pdf')}
								rel="noopener noreferrer"
								target="_blank">Algorithm Analysis</a
							>
						</p>
						<p class="text-blue-700 hover:opacity-75">
							<a href={asset('/slides/00_Sorting.pdf')} rel="noopener noreferrer" target="_blank"
								>Sorting Review</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href="https://ece.uwaterloo.ca/~dwharder/aads/Lecture_materials/1.04.Proof_by_induction.pdfinary_trees.Questions.pdf"
								rel="noopener noreferrer"
								target="_blank">Induction(Practice)</a
							>
						</p>
						<p class="text-blue-700 hover:opacity-75">
							<a
								href="https://ece.uwaterloo.ca/~dwharder/aads/Lecture_materials/2.03.Asymptotic_analysis.pdf"
								rel="noopener noreferrer"
								target="_blank">Reading(Optional)</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3"></td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">06/03</td>
					<td class="border border-[#3F0157] p-3">
						<p>Function Analysis</p>
						<p>Recursion</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href={asset('/slides/03_Function_Analysis.pdf')}
								rel="noopener noreferrer"
								target="_blank">Function Analysis</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href="https://colab.research.google.com/drive/1Ao9AIOC_unVk2s4C7hwyu020mUSrgTct?usp=sharing"
								target="_blank">Sorting Demo</a
							>
						</p>
						<p class="font-mono text-blue-700 hover:opacity-75">
							<a href={asset('/code/recursion.cpp')} download>Code(recursion)</a>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3"></td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">06/04</td>
					<td class="border border-[#3F0157] p-3">
						<p>Class Templates</p>
						<p>List Review</p>
						<p>Merge Sort</p>
						<p>Quick Sort</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a href={asset('/slides/00_Templates.pdf')} rel="noopener noreferrer" target="_blank"
								>Templates</a
							>
						</p>
						<p class="text-blue-700 hover:opacity-75">
							<a href={asset('/slides/00_Lists.pdf')} rel="noopener noreferrer" target="_blank"
								>Linked List</a
							>
						</p>
						<p class="text-blue-700 hover:opacity-75">
							<a href={asset('/slides/00_Sorting.pdf')} rel="noopener noreferrer" target="_blank"
								>Sorting Review</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href="https://www.cs.usfca.edu/~galles/visualization/Algorithms.html"
								rel="noopener noreferrer"
								target="_blank">Data Visualization</a
							>
						</p>
						<p class="font-mono text-blue-700 hover:opacity-75">
							<a href={asset('/code/LinkedList.zip')} download>Code(LinkedList)</a>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-bold">
						<button
							use:tooltip={{
								content: `<div class='text-center text-[#FCB827] p-2'>
									<div>Mathematics Background</div>
									<div>Big-O Notation</div>
									<div>Algorithm Analysis</div>
									<div>Function Analysis</div>
								</div>`,
								html: true,
								placement: 'top',
								offset: 15
							}}
							class="cursor-pointer text-[#3F0157] hover:opacity-75"
						>
							Quiz 1
						</button>
					</td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">06/08</td>
					<td class="border border-[#3F0157] p-3">
						<p>Stack and Queue</p>
						<p>Linear ADT</p>
						<p>C++ STL Containers</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href={asset('/slides/00_Stack&Queue.pdf')}
								rel="noopener noreferrer"
								target="_blank">Stack and Queue</a
							>
						</p>
						<p class="text-blue-700 hover:opacity-75">
							<a
								href={asset('/slides/04_Sequence_Containers.pdf')}
								rel="noopener noreferrer"
								target="_blank">Sequence Containers</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href="https://cplusplus.com/reference/stl/"
								rel="noopener noreferrer"
								target="_blank">STL Containers</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-bold"></td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">06/09</td>
					<td class="border border-[#3F0157] p-3">
						<p>TBA</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<!-- <p class="text-blue-700 hover:opacity-75">
							<a
								href={asset('/slides/TBA')}
								rel="noopener noreferrer"
								target="_blank">TBA</a
							>
						</p> -->
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold"></td>
					<td class="border border-[#3F0157] p-3 font-bold">
						<button
							use:tooltip={{
								content: `<div class='text-center text-[#FCB827] p-2'>
									<div>Class Templates</div>
									<div>Linked List</div>
									<div>Stack and Queue</div>
									<div>Sequence Containers</div>
								</div>`,
								html: true,
								placement: 'top',
								offset: 15
							}}
							class="cursor-pointer text-[#3F0157] hover:opacity-75"
						>
							Quiz 2
						</button>
					</td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">06/10</td>
					<td class="border border-[#3F0157] p-3">
						<p>TBA</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<!-- <p class="text-blue-700 hover:opacity-75">
							<a
								href={asset('/slides/TBA')}
								rel="noopener noreferrer"
								target="_blank">TBA</a
							>
						</p> -->
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold"></td>
					<td class="border border-[#3F0157] p-3 font-bold"></td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">06/11</td>
					<td class="border border-[#3F0157] p-3">
						<p>TBA</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<!-- <p class="text-blue-700 hover:opacity-75">
							<a
								href={asset('/slides/TBA')}
								rel="noopener noreferrer"
								target="_blank">TBA</a
							>
						</p> -->
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold"></td>
					<td class="border border-[#3F0157] p-3 font-bold">
						<button
							use:tooltip={{
								content: `<div class='text-center text-[#FCB827] p-2'>
									<div>TBA</div>
								</div>`,
								html: true,
								placement: 'top',
								offset: 15
							}}
							class="cursor-pointer text-[#3F0157] hover:opacity-75"
						>
							Quiz 3
						</button>
					</td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">06/22</td>
					<td class="border border-[#3F0157] p-3 font-bold text-red-700">
						<p>MIDTERM</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-bold text-red-700">
						<p>MIDTERM</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-bold text-red-700">
						<p>MIDTERM</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-bold text-red-700">
						<p>MIDTERM</p>
					</td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">07/08</td>
					<td class="border border-[#3F0157] p-3 font-bold text-red-700">
						<p>FINAL</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-bold text-red-700">
						<p>FINAL</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-bold text-red-700">
						<p>FINAL</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-bold text-red-700">
						<p>FINAL</p>
					</td>
				</tr>
			</tbody>
		</table>
	</div>
</div>
