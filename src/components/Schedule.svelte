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
						<p>Trees Review</p>
						<p>Heap</p>
						<p>Priority Queue</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a href={asset('/slides/00_Trees.pdf')} rel="noopener noreferrer" target="_blank"
								>Trees Introduction</a
							>
						</p>
						<p class="text-blue-700 hover:opacity-75">
							<a href={asset('/slides/00_Heap.pdf')} rel="noopener noreferrer" target="_blank"
								>Heap</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href="https://cplusplus.com/reference/algorithm/make_heap/?kw=make_heap"
								rel="noopener noreferrer"
								target="_blank"
							>
								std::make_heap
							</a>
						</p>
						<p class="text-blue-700 hover:opacity-75">
							<a
								href="https://cplusplus.com/reference/queue/priority_queue/"
								rel="noopener noreferrer"
								target="_blank"
							>
								std::priority_queue
							</a>
						</p>
						<p class="text-blue-700 hover:opacity-75">
							<a
								href="https://www.cs.hunter.cuny.edu/~sweiss/course_materials/csci335/lecture_notes/chapter06.pdf"
								rel="noopener noreferrer"
								target="_blank">Reading(Optional)</a
							>
						</p>
						<p class="font-mono text-blue-700 hover:opacity-75">
							<a href={asset('/code/heapsort.cpp')} download>Code(Heapsort)</a>
						</p>
					</td>
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
						<p>C++11 Improvements</p>
						<p>Rule of Five</p>
						<p>Copy and Move</p>
						<p>Smart Pointers</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a href={asset('/slides/05_C++11.pdf')} rel="noopener noreferrer" target="_blank"
								>C++11</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="font-mono text-blue-700 hover:opacity-75">
							<a href={asset('/code/BigFive.zip')} download>Code(BigFive)</a>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-bold"></td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">06/11</td>
					<td class="border border-[#3F0157] p-3">
						<p>Binary Search Trees</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a href={asset('/slides/00_BST.pdf')} rel="noopener noreferrer" target="_blank"
								>Binary Search Trees</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="font-mono text-blue-700 hover:opacity-75">
							<a href={asset('/code/BST.zip')} download>Code(BST)</a>
						</p>
						<p class="text-blue-700 hover:opacity-75">
							<a
								href="https://www.cs.usfca.edu/~galles/visualization/BST.html"
								rel="noopener noreferrer"
								target="_blank">BST Visualization</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-bold">
						<button
							use:tooltip={{
								content: `<div class='text-center text-[#FCB827] p-2'>
									<div>Trees</div>
									<div>Heaps</div>
									<div>C++11</div>
									<div>Big Five</div>
									<div>Smart Pointers</div>
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
					<td class="border border-[#3F0157] p-3 font-semibold">06/15</td>
					<td class="border border-[#3F0157] p-3">
						<p>AVL Trees</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a href={asset('/slides/06_AVL_Trees.pdf')} rel="noopener noreferrer" target="_blank"
								>AVL Trees</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href="https://www.cs.usfca.edu/~galles/visualization/AVLtree.html"
								rel="noopener noreferrer"
								target="_blank">AVL Visualization</a
							>
						</p>
						<p class="text-blue-700 hover:opacity-75">
							<a
								href="https://www.cs.hunter.cuny.edu/~sweiss/course_materials/csci335/lecture_notes/chapter04.2.pdf"
								rel="noopener noreferrer"
								target="_blank">Reading(Optional)</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-bold"></td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">06/16</td>
					<td class="border border-[#3F0157] p-3">
						<p>AVL Trees (cont.)</p>
						<p>Iterators</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a href={asset('/slides/06_AVL_Trees.pdf')} rel="noopener noreferrer" target="_blank"
								>AVL Trees</a
							>
						</p>
						<p class="text-blue-700 hover:opacity-75">
							<a
								href="https://www.cs.hunter.cuny.edu/~sweiss/resources/iterators.pdf"
								rel="noopener noreferrer"
								target="_blank">Iterators</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href="https://www.geeksforgeeks.org/cpp/introduction-iterators-c/"
								rel="noopener noreferrer"
								target="_blank">Iterators(STL)</a
							>
						</p>
						<p class="font-mono text-blue-700 hover:opacity-75">
							<a href={asset('/code/iterator.cpp')} download>Code(Iterator)</a>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-bold">
						<button
							use:tooltip={{
								content: `<div class='text-center text-[#FCB827] p-2'>
									<div>Binary Search Trees</div>
									<div>AVL Trees Insert</div>
								</div>`,
								html: true,
								placement: 'top',
								offset: 15
							}}
							class="cursor-pointer text-[#3F0157] hover:opacity-75"
						>
							Quiz 4
						</button>
					</td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">06/17</td>
					<td class="border border-[#3F0157] p-3">
						<p>Sorting</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a href={asset('/slides/CS335_Sorting.pdf')} rel="noopener noreferrer" target="_blank"
								>Sorting</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href="https://www.cs.usfca.edu/~galles/visualization/ComparisonSort.html"
								rel="noopener noreferrer"
								target="_blank">Sorting Visualization</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-bold"></td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">06/18</td>
					<td class="border border-[#3F0157] p-3">
						<p>Sorting (cont.)</p>
						<p>Midterm Review</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a href={asset('/slides/CS335_Sorting.pdf')} rel="noopener noreferrer" target="_blank"
								>Sorting</a
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
					</td>
					<td class="border border-[#3F0157] p-3 font-bold">
						<button
							use:tooltip={{
								content: `<div class='text-center text-[#FCB827] p-2'>
									<div>Iterators</div>
									<div>Sorting (upto slide 40)</div>
								</div>`,
								html: true,
								placement: 'top',
								offset: 15
							}}
							class="cursor-pointer text-[#3F0157] hover:opacity-75"
						>
							Quiz 5
						</button>
					</td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">06/20</td>
					<td class="border border-[#3F0157] p-3">
						<p>N/A</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold"></td>
					<td class="border border-[#3F0157] p-3 font-semibold"></td>
					<td class="border border-[#3F0157] p-3 font-bold">
						<a
							href={asset('/projects/Project_01.pdf')}
							rel="noopener noreferrer"
							target="_blank"
							class="cursor-pointer text-[#3F0157] hover:opacity-75"
						>
							Project 1
						</a>
					</td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">06/22</td>
					<td class="border border-[#3F0157] p-3">
						<p>Midterm Review</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href={asset('/Extras/Midterm_Format.pdf')}
								rel="noopener noreferrer"
								target="_blank">Midterm Format</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold"></td>
					<td class="border border-[#3F0157] p-3 font-bold"></td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">06/23</td>
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
					<td class="border border-[#3F0157] p-3 font-semibold">06/24</td>
					<td class="border border-[#3F0157] p-3">
						<p>Splay Trees</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href={asset('/slides/07_Splay_Trees.pdf')}
								rel="noopener noreferrer"
								target="_blank">Splay Trees</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href="https://www.cs.usfca.edu/~galles/visualization/SplayTree.html"
								rel="noopener noreferrer"
								target="_blank">Splay Visualization</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-bold"></td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">06/25</td>
					<td class="border border-[#3F0157] p-3">
						<p>Dynamic Programming</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href={asset('/slides/00_DynamicProgramming.pdf')}
								rel="noopener noreferrer"
								target="_blank">Dynamic Programming</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href={asset('/Extras/Dynamic_Programming_Practice.pdf')}
								rel="noopener noreferrer"
								target="_blank">Practice Problems</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-bold">
						<button
							use:tooltip={{
								content: `<div class='text-center text-[#FCB827] p-2'>									
									<div>Sorting (after slide 40)</div>
									<div>Sorting Theory</div>
									<div>Splay Trees</div>
								</div>`,
								html: true,
								placement: 'top',
								offset: 15
							}}
							class="cursor-pointer text-[#3F0157] hover:opacity-75"
						>
							Quiz 6
						</button>
					</td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">06/29</td>
					<td class="border border-[#3F0157] p-3">
						<p>B+ Trees</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a href={asset('/slides/08_B+_Trees.pdf')} rel="noopener noreferrer" target="_blank"
								>B+ Trees</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href="https://www.cs.usfca.edu/~galles/visualization/BPlusTree.html"
								rel="noopener noreferrer"
								target="_blank">B+ Visualization</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-bold"></td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">06/30</td>
					<td class="border border-[#3F0157] p-3">
						<p>Associative Containers</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href={asset('/slides/09_Associative_Containers.pdf')}
								rel="noopener noreferrer"
								target="_blank">Associative Containers</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold"></td>
					<td class="border border-[#3F0157] p-3 font-bold">
						<button
							use:tooltip={{
								content: `<div class='text-center text-[#FCB827] p-2'>
									<div>Dynamic Programming</div>
									<div>B+ Trees</div>
								</div>`,
								html: true,
								placement: 'top',
								offset: 15
							}}
							class="cursor-pointer text-[#3F0157] hover:opacity-75"
						>
							Quiz 7
						</button>
					</td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">07/01</td>
					<td class="border border-[#3F0157] p-3">
						<p>Hashing Introduction</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href={asset('/slides/10_Hashing_Introduction.pdf')}
								rel="noopener noreferrer"
								target="_blank">Hashing Introduction</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold">
						<p class="text-blue-700 hover:opacity-75">
							<a
								href="https://www.cs.hunter.cuny.edu/~sweiss/course_materials/csci335/lecture_notes/chapter05.pdf"
								rel="noopener noreferrer"
								target="_blank">Reading(Optional)</a
							>
						</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-bold"></td>
				</tr>
				<tr class="md:text-md text-sm lg:text-lg">
					<td class="border border-[#3F0157] p-3 font-semibold">07/05</td>
					<td class="border border-[#3F0157] p-3">
						<p>N/A</p>
					</td>
					<td class="border border-[#3F0157] p-3 font-semibold"></td>
					<td class="border border-[#3F0157] p-3 font-semibold"></td>
					<td class="border border-[#3F0157] p-3 font-bold">
						<a
							href={asset('/projects/Project_02.pdf')}
							rel="noopener noreferrer"
							target="_blank"
							class="cursor-pointer text-[#3F0157] hover:opacity-75"
						>
							Project 2
						</a>
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
