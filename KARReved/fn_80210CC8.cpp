//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FE1E0.hpp"



void fn_80210CC8(PPC::Runtime::GCContext* context)
{
/*80210CC8 0020DAC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80210CCC 0020DACC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80210CD0 0020DAD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80210CD4 0020DAD4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r3));
/*80210CD8 0020DAD8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80210CDC 0020DADC*/ PPC::Runtime::ASM::bl(fn_801FE1E0);
/*80210CE0 0020DAE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80210CE4 0020DAE4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80210CE8 0020DAE8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80210CEC 0020DAEC*/ PPC::Runtime::ASM::blr();
}