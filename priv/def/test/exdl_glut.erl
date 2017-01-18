%%
%%  Copyright (c) 2012 David Koch
%%
%%  See the file "license.terms" for information on usage and redistribution
%%  of this file, and for a DISCLAIMER OF ALL WARRANTIES.
%%
%%     $Id: exdl_glut.erl,v 1.5 2005/06/29 14:45:38 dgud Exp $
%%

-module(exdl_glut).

-include("exdl.hrl").

-ifdef(COMPILE_GLU).

%% 1- EXPORT

%-compile(export_all).


         ]
       ).

%% 2- INCLUDE

-include("exdl_glut.hrl").

%% 3- IMPORT

-import( exdl_driver
       , [ call/2
         , cast/2
         ]
       ).

%% 4- FUNCTIONS


-endif. % COMPILE_GLU