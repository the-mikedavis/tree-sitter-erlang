%% https://www.erlang.org/eeps/eep-0049#specification
maybe
    %% <- keyword
    X = [H|T] ?= exp()
    %%^ operator
    %%    ^ operator
    %%        ^ operator
    %%         ^ operator
end
%% <- keyword

begin
    %% <- keyword
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
