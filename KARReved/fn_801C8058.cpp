//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801E1D64.hpp"



void fn_801C8058(PPC::Runtime::GCContext* context)
{
/*801C8058 001C4E58*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C805C 001C4E5C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C8060 001C4E60*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801C8064 001C4E64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C8068 001C4E68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801C806C 001C4E6C*/ PPC::Runtime::ASM::bl(fn_801E1D64);
/*801C8070 001C4E70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C8074 001C4E74*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C8078 001C4E78*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C807C 001C4E7C*/ PPC::Runtime::ASM::blr();
}