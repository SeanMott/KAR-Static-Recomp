//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C80EC.hpp"



void fn_80193C20(PPC::Runtime::GCContext* context)
{
/*80193C20 00190A20*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80193C24 00190A24*/ PPC::Runtime::ASM::mflr(context->r0);
/*80193C28 00190A28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80193C2C 00190A2C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r3));
/*80193C30 00190A30*/ PPC::Runtime::ASM::bl(fn_801C80EC);
/*80193C34 00190A34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80193C38 00190A38*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80193C3C 00190A3C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80193C40 00190A40*/ PPC::Runtime::ASM::blr();
}