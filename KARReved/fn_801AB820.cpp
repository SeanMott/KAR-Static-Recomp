//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A0300.hpp"
#include "fn_801ABC2C.hpp"



void fn_801AB820(PPC::Runtime::GCContext* context)
{
/*801AB820 001A8620*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AB824 001A8624*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AB828 001A8628*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AB82C 001A862C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AB830 001A8630*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801AB834 001A8634*/ PPC::Runtime::ASM::bl(fn_801A0300);
/*801AB838 001A8638*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801AB83C 001A863C*/ PPC::Runtime::ASM::bl(fn_801ABC2C);
/*801AB840 001A8640*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801AB844 001A8644*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AB848 001A8648*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801AB84C 001A864C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AB850 001A8650*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AB854 001A8654*/ PPC::Runtime::ASM::blr();
}