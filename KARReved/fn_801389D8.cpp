//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80138B10.hpp"



void fn_801389D8(PPC::Runtime::GCContext* context)
{
/*801389D8 001357D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801389DC 001357DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801389E0 001357E0*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
/*801389E4 001357E4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801389E8 001357E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801389EC 001357EC*/ PPC::Runtime::ASM::bl(fn_80138B10);
/*801389F0 001357F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801389F4 001357F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801389F8 001357F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801389FC 001357FC*/ PPC::Runtime::ASM::blr();
}