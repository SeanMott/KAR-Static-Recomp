//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8003D0B4(PPC::Runtime::GCContext* context)
{
/*8003D0B4 00039EB4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8003D0B8 00039EB8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8003D0BC 00039EBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003D0C0 00039EC0*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8003D0C4 00039EC4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8003D0C8 00039EC8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r3));
/*8003D0CC 00039ECC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003D0D0 00039ED0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8003D0D4 00039ED4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8003D0D8 00039ED8*/ PPC::Runtime::ASM::blr();
}