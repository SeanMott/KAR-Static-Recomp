//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C80C8.hpp"



void fn_80193BFC(PPC::Runtime::GCContext* context)
{
/*80193BFC 001909FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80193C00 00190A00*/ PPC::Runtime::ASM::mflr(context->r0);
/*80193C04 00190A04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80193C08 00190A08*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r3));
/*80193C0C 00190A0C*/ PPC::Runtime::ASM::bl(fn_801C80C8);
/*80193C10 00190A10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80193C14 00190A14*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80193C18 00190A18*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80193C1C 00190A1C*/ PPC::Runtime::ASM::blr();
}