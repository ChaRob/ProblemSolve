# [Bronze I] Copier - 27685 

[문제 링크](https://www.acmicpc.net/problem/27685) 

### 성능 요약

메모리: 2588 KB, 시간: 36 ms

### 분류

구현, 그리디 알고리즘, 애드 혹, 집합과 맵

### 제출 일자

2026년 3월 2일 15:48:50

### 문제 설명

<p>We have a strange box with a big red button. There is a sequence of integers in the box. Whenever we push the big red button, the sequence in the box changes. We call the box a “copier”, because the new sequence is created from the old one by copying some contiguous section.</p>

<p>More precisely, each time the red button is pushed the copier does the following: Suppose that the current sequence in the box is <span class="math"><em>a</em><sub>0</sub>, <em>a</em><sub>1</sub>, <em>a</em><sub>2</sub>, …, <em>a</em><sub><em>m</em> − 1</sub></span>. The copier chooses some <span class="math"><em>i</em></span>, <span class="math"><em>j</em></span>, <span class="math"><em>k</em></span> such that <span class="math">0 ≤ <em>i</em> < <em>j</em> ≤ <em>k</em> ≤ <em>m</em></span>. Then the copier inserts a copy of <span class="math"><em>a</em><sub><em>i</em></sub>, …, <em>a</em><sub><em>j</em> − 1</sub></span> immediately after <span class="math"><em>a</em><sub><em>k</em> − 1</sub></span>. Note that <span class="math"><em>j</em> ≤ <em>k</em></span>: the copy is always inserted to the right of the original. Here is how the sequence looks like after the insertion:</p>

<p><span class="math">$$ a_0, \dots, a_{i-1}, \underbrace{a_i, \dots, a_{j-1}}_{\rm original}, a_j, \dots, a_{k-1}, \underbrace{a_i, \dots, a_{j-1}}_{\rm copy}, a_k, \dots, a_{m-1} $$</span></p>

<p>In the morning we had some <strong>permutation</strong> of <span class="math">1…ℓ</span> in the box. Then we pushed the button zero or more times. Each time we pushed the button, a new (not necessarily different) triple <span class="math">(<em>i</em>, <em>j</em>, <em>k</em>)</span> was chosen and the sequence was modified as described above. You are given the sequence <span class="math"><em>S</em></span> that was in the copier at the end of the day. Reconstruct the original permutation.</p>

### 입력 

 <p>The first line of the input file contains an integer <em>t</em> ≤ 60 specifying the number of test cases. Each test case is preceded by a blank line.</p>

<p>Each test case consists of two lines. The first line contains an integer <em>n</em> (3 ≤ <em>n</em> ≤ 100 000) – the length of the final sequence <em>S</em>. The second line contains <em>n</em> integers – the sequence <em>S</em>. For each test case, there is a positive integer ℓ such that <em>S</em> can be produced from some permutation of {1, 2, …, ℓ} using a finite sequence of copier operations.</p>

### 출력 

 <p>For each test case, output a single line with a space-separated list of integers: the original permutation. If there are multiple valid solutions, output any of them.</p>

