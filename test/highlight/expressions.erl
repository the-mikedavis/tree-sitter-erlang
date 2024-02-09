%% https://www.erlang.org/eeps/eep-0049#specification
maybe
%%^ keyword
    X = [H|T] ?= exp()
    %%^ operator
    %%    ^ operator
    %%        ^ operator
    %%         ^ operator
end
%% <- keyword

begin
%%^ keyword
    try
    %% <- keyword
        raising_call(a)
    after
    %% <- keyword
        ok
    end
    %% <- keyword
end.
%% <- keyword

?assertMatch({ok, _}, start())
%% <- keyword.directive
%% ^ keyword.directive

?_assertEqual(a, a)
%% <- keyword.directive
%% ^ keyword.directive

State#state.config#config.pid
%% ^ variable
%%   ^ punctuation.bracket
%%      ^ type
%%         ^ punctuation.delimiter
%%            ^ property
%%                ^ operator
%%                   ^ type
%%                         ^ property

case Foo of
%% <- keyword
%%    ^ variable
%%       ^ keyword
end
%% <- keyword

-doc """
     Foos the bar
     """.
%%   ^ string
%%    ^ string
%%     ^ string
