//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80133520.hpp"
#include "fn_8001ACC4.hpp"



void fn_8001AE58(PPC::Runtime::GCContext* context)
{
/*8001AE58 00017C58*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8001AE5C 00017C5C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8001AE60 00017C60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8001AE64 00017C64*/ PPC::Runtime::ASM::bl(fn_80133520);
/*8001AE68 00017C68*/ PPC::Runtime::ASM::bl(fn_8001ACC4);
/*8001AE6C 00017C6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8001AE70 00017C70*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8001AE74 00017C74*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8001AE78 00017C78*/ PPC::Runtime::ASM::blr();
}