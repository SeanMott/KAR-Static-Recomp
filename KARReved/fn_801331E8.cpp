//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8017A0B4.hpp"



void fn_801331E8(PPC::Runtime::GCContext* context)
{
/*801331E8 0012FFE8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801331EC 0012FFEC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801331F0 0012FFF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801331F4 0012FFF4*/ PPC::Runtime::ASM::bl(fn_8017A0B4);
/*801331F8 0012FFF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801331FC 0012FFFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80133200 00130000*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80133204 00130004*/ PPC::Runtime::ASM::blr();
}