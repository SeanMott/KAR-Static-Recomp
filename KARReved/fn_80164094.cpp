//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80164094(PPC::Runtime::GCContext* context)
{
/*80164094 00160E94*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80164098 00160E98*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016409C 00160E9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801640A0 00160EA0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801640A4 00160EA4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801640A8 00160EA8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801640AC 00160EAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a0, context->r3));
/*801640B0 00160EB0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801640B4 00160EB4*/ PPC::Runtime::ASM::beq(.L_801640C4);
/*801640B8 00160EB8*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*801640BC 00160EBC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801640C0 00160EC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801640C4, 0x801640C4) //this is a jump label
/*801640C4 00160EC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801640C8 00160EC8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801640CC 00160ECC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801640D0 00160ED0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801640D4 00160ED4*/ PPC::Runtime::ASM::blr();
}