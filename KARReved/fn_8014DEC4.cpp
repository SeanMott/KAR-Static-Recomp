//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8014DEC4(PPC::Runtime::GCContext* context)
{
/*8014DEC4 0014ACC4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8014DEC8 0014ACC8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014DECC 0014ACCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014DED0 0014ACD0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014DED4 0014ACD4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014DED8 0014ACD8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8014DEDC 0014ACDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x468, context->r3));
/*8014DEE0 0014ACE0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8014DEE4 0014ACE4*/ PPC::Runtime::ASM::beq(.L_8014DEF4);
/*8014DEE8 0014ACE8*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*8014DEEC 0014ACEC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8014DEF0 0014ACF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x468, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8014DEF4, 0x8014DEF4) //this is a jump label
/*8014DEF4 0014ACF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014DEF8 0014ACF8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014DEFC 0014ACFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014DF00 0014AD00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8014DF04 0014AD04*/ PPC::Runtime::ASM::blr();
}