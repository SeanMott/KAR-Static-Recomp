//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AC8.hpp"



void fn_80151C50(PPC::Runtime::GCContext* context)
{
/*80151C50 0014EA50*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80151C54 0014EA54*/ PPC::Runtime::ASM::mflr(context->r0);
/*80151C58 0014EA58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80151C5C 0014EA5C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80151C60 0014EA60*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80151C64 0014EA64*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80151C68 0014EA68*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80151C6C 0014EA6C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80151C70 0014EA70*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80151C74 0014EA74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x574, context->r3));
/*80151C78 0014EA78*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80151C7C 0014EA7C*/ PPC::Runtime::ASM::beq(.L_80151C84);
/*80151C80 0014EA80*/ PPC::Runtime::ASM::bl(fn_80138AC8);
RUNTIME_PPC_JUMP_LABEL(.L_80151C84, 0x80151C84) //this is a jump label
/*80151C84 0014EA84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80151C88 0014EA88*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80151C8C 0014EA8C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80151C90 0014EA90*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80151C94 0014EA94*/ PPC::Runtime::ASM::blr();
}