//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_801469FC(PPC::Runtime::GCContext* context)
{
/*801469FC 001437FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80146A00 00143800*/ PPC::Runtime::ASM::mflr(context->r0);
/*80146A04 00143804*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80146A08 00143808*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80146A0C 0014380C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80146A10 00143810*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80146A14 00143814*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r3));
/*80146A18 00143818*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80146A1C 0014381C*/ PPC::Runtime::ASM::beq(.L_80146A2C);
/*80146A20 00143820*/ PPC::Runtime::ASM::bl(fn_8044F350);
/*80146A24 00143824*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80146A28 00143828*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80146A2C, 0x80146A2C) //this is a jump label
/*80146A2C 0014382C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80146A30 00143830*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80146A34 00143834*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80146A38 00143838*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80146A3C 0014383C*/ PPC::Runtime::ASM::blr();
}