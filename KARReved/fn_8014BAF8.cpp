//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AC8.hpp"



void fn_8014BAF8(PPC::Runtime::GCContext* context)
{
/*8014BAF8 001488F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8014BAFC 001488FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014BB00 00148900*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014BB04 00148904*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014BB08 00148908*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3dc, context->r3));
/*8014BB0C 0014890C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8014BB10 00148910*/ PPC::Runtime::ASM::beq(.L_8014BB18);
/*8014BB14 00148914*/ PPC::Runtime::ASM::bl(fn_80138AC8);
RUNTIME_PPC_JUMP_LABEL(.L_8014BB18, 0x8014BB18) //this is a jump label
/*8014BB18 00148918*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014BB1C 0014891C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014BB20 00148920*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8014BB24 00148924*/ PPC::Runtime::ASM::blr();
}