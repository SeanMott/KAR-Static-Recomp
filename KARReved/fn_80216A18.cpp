//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FE1E0.hpp"



void fn_80216A18(PPC::Runtime::GCContext* context)
{
/*80216A18 00213818*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80216A1C 0021381C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80216A20 00213820*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80216A24 00213824*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r3));
/*80216A28 00213828*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80216A2C 0021382C*/ PPC::Runtime::ASM::bl(fn_801FE1E0);
/*80216A30 00213830*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80216A34 00213834*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80216A38 00213838*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80216A3C 0021383C*/ PPC::Runtime::ASM::blr();
}