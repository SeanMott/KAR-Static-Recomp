//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8013DF18.hpp"



void fn_80163130(PPC::Runtime::GCContext* context)
{
/*80163130 0015FF30*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80163134 0015FF34*/ PPC::Runtime::ASM::mflr(context->r0);
/*80163138 0015FF38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016313C 0015FF3C*/ PPC::Runtime::ASM::bl(fn_8013DF18);
/*80163140 0015FF40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80163144 0015FF44*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80163148 0015FF48*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8016314C 0015FF4C*/ PPC::Runtime::ASM::blr();
}