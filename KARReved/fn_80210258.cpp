//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80205A60.hpp"



void fn_80210258(PPC::Runtime::GCContext* context)
{
/*80210258 0020D058*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8021025C 0020D05C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80210260 0020D060*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80210264 0020D064*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80210268 0020D068*/ PPC::Runtime::ASM::bl(fn_80205A60);
/*8021026C 0020D06C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80210270 0020D070*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80210274 0020D074*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80210278 0020D078*/ PPC::Runtime::ASM::blr();
}