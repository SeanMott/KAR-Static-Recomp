//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8000C0B4(PPC::Runtime::GCContext* context)
{
/*8000C0B4 00008EB4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000C0B8 00008EB8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000C0BC 00008EBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000C0C0 00008EC0*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000C0C4 00008EC4*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8000C0C8 00008EC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xce0, context->r3));
/*8000C0CC 00008ECC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xce4, context->r4));
/*8000C0D0 00008ED0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000C0D4 00008ED4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000C0D8 00008ED8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000C0DC 00008EDC*/ PPC::Runtime::ASM::blr();
}