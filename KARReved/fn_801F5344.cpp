//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801DC574.hpp"



void fn_801F5344(PPC::Runtime::GCContext* context)
{
/*801F5344 001F2144*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F5348 001F2148*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F534C 001F214C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F5350 001F2150*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F5354 001F2154*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801F5358 001F2158*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15d0, context->r3));
/* 801F535C 001F215C  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*801F5360 001F2160*/ PPC::Runtime::ASM::beq(.L_801F537C);
/*801F5364 001F2164*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801F5368 001F2168*/ PPC::Runtime::ASM::bl(fn_801DC574);
/*801F536C 001F216C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15d0, context->r31));
/*801F5370 001F2170*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801F5374 001F2174*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*801F5378 001F2178*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x15d0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801F537C, 0x801F537C) //this is a jump label
/*801F537C 001F217C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F5380 001F2180*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F5384 001F2184*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F5388 001F2188*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F538C 001F218C*/ PPC::Runtime::ASM::blr();
}