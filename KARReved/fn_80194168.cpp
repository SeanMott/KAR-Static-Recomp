//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C853C.hpp"



void fn_80194168(PPC::Runtime::GCContext* context)
{
/*80194168 00190F68*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8019416C 00190F6C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80194170 00190F70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80194174 00190F74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r3));
/*80194178 00190F78*/ PPC::Runtime::ASM::bl(fn_801C853C);
/*8019417C 00190F7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80194180 00190F80*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80194184 00190F84*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80194188 00190F88*/ PPC::Runtime::ASM::blr();
}