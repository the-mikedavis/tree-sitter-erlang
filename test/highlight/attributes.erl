-module(main).
% <- punctuation.delimiter
% ^ keyword
%      ^ punctuation.bracket
%        ^ module
%           ^ punctuation.bracket
%            ^ punctuation.delimiter

-export([a_func/1,another_func/2]).
% ^ keyword
%       ^ punctuation.bracket
%         ^ function
%              ^ operator
%               ^ number
%                    ^ function

-import(lists, [sort/1,map/2]).
% ^ keyword
%        ^ module
%                ^ function
%                   ^ operator
%                    ^ number

-type t() :: integer()
% ^ keyword
%     ^ function
%          ^ operator
%             ^ function
           | 0
%          ^ operator
%            ^ number
           | 0..1
%          ^ operator
%            ^ number
%               ^ number
           | $a..$b
%          ^ operator
%             ^ constant
%                ^ constant
           | [non_neg_integer(), ...]
%          ^ operator
%            ^ punctuation.bracket
%              ^ function
%                                 ^ comment.discard
           | #{mfa() => atom()}.
%          ^ operator
%            ^ operator
%             ^ punctuation.bracket

-spec ok_this(Term) -> {ok, Term} when Term :: any().
% ^ keyword
%      ^ function
%             ^ variable
%                    ^ operator
%                      ^ punctuation.bracket
%                       ^ string.special.symbol
%                         ^ punctuation.delimiter
%                            ^ variable
%                                  ^ keyword
%                                       ^ variable
%                                            ^ operator
%                                               ^ function

-spec erlang:ok() -> ok.
%      ^ module
%            ^ function
%                     ^ string.special.symbol

-ifdef(debug).
% ^ keyword
%       ^ string.special.symbol
-define(LOG(X), io:format("~80~n", [X])).
% ^ keyword
%        ^ keyword.directive
%           ^ variable
%                ^ module
%                   ^ function
%                           ^ string
%                                   ^ variable
-else.
% ^ keyword
-define(LOG(X), ok).
% ^ keyword
%        ^ keyword.directive
%           ^ variable
%                ^ string.special.symbol
-endif.
% ^ keyword

-record(person, {name,
% ^ keyword
%         ^ type
%                 ^ property
                 email_address="",
%                 ^ property
%                               ^ string
                 ssn :: string(),
%                 ^ property
                 phone=1 :: integer()}).
%                 ^ property

-compile({no_auto_import,[min/2]}).
% ^ keyword
%          % ^ string.special.symbol
%                          ^ function
