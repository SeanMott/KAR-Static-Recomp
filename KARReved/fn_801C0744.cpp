//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C090C.hpp"



void fn_801C0744(PPC::Runtime::GCContext* context)
{
/*801C0744 001BD544*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C0748 001BD548*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C074C 001BD54C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C0750 001BD550*/ PPC::Runtime::ASM::bl(fn_801C090C);
/*801C0754 001BD554*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C0758 001BD558*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C075C 001BD55C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C0760 001BD560*/ PPC::Runtime::ASM::blr();
}