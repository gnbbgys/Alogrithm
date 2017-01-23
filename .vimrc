
" This configuration file was tested with
" /usr/local/bin/vim (7.0) and
" /usr/local/bin/gvim (7.0)
"this line prevents copydotfiles from recopying: dot-vimrc_included


syntax on
set term=dtterm
set autoindent
set et
set number
set ai
set cin
set ru
set bs=indent,eol,start
"set autoread
set sw=4 "this is the level of autoindent, adjust to taste
set ignorecase
set dictionary+=/usr/share/dict/words
set incsearch
set hlsearch
set mouse=a
set wildmenu
silent !stty -ixon > /dev/null 2> /dev/null
"set guifont=-adobe-courier-medium-r-normal-*-13-*-*-*-*-*-iso8859-1
"set guifont=-adobe-courier-medium-r-normal--18-180-75-75-m-110-iso8859-1
"set guifont=-adobe-courier-bold-r-normal-*-14-*-*-*-*-*-iso8859-1
"set guifont=-b&h-lucidatypewriter-medium-r-normal-sans-12-120-75-75-m-70-iso8859-1
"set guifont=-b&h-lucida\ sans\ typewriter-medium-r-normal-sans-14-140-72-72-m-80-iso8859-1
"set guifont=-dt-interface\ user-medium-r-normal-s\ sans-12-120-72-72-m-70-iso8859-1

"set guifont=-b&h-lucidatypewriter-bold-r-normal-sans-12-120-75-75-m-70-iso8859-1
"set guifont=-b&h-lucidatypewriter-bold-r-normal-sans-14-140-75-75-m-90-iso8859-1


set noerrorbells visualbell t_vb=
if has('autocmd')
  autocmd GUIEnter * set visualbell t_vb=
endif

if has("gui_running")
  if exists("+lines")
  set lines=80
  endif
  if exists("+columns")
  set columns=180
  endif
endif

" mapping keys
nnoremap <Tab> <Esc>
vnoremap <Tab> <Esc>gV
onoremap <Tab> <Esc>
inoremap <Tab> <Esc>`^

nnoremap t ^
nnoremap f $
nnoremap \ G
nnoremap - <C-r>

nnoremap tp :tabp<CR>
nnoremap tl :tabl<CR>
nnoremap tf :tabfir<CR>
nnoremap tn :tabn<CR>
nnoremap tw :tabnew<CR>
nnoremap ts :tabclose<CR>
nnoremap ta :qall<CR>
nnoremap ee :Ex<CR>
nnoremap vs :vsplit<CR>
nnoremap hs :split<CR>
nnoremap s :w<CR>

inoremap ;; <C-p>

map <C-h> <C-w>h
map <C-l> <C-w>l
map <C-W>i <C-W><
map <C-W>o <C-W>>

" Enable Ctrl-V and Ctrl-C for the clipboard
map <C-V> "+gp
cmap <C-V> <C-R>+
vnoremap <C-C> "+y

" split window
:map <A-j> <C-W>w

nnoremap <A-left> :vertical resize -5<CR>
nnoremap <A-right> :vertical resize +5<CR>
" command line abbreviation

" end of mapping keys

" abbreviation
ab cl std::cout << " " << std::endl;

" end of abbreviation
cabbr <expr> %% expand('%:p:h')



colors desert 
colorscheme desert
