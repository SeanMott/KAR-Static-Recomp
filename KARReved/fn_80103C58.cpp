//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F446C.hpp"
#include "fn_80103C90.hpp"



void fn_80103C58(PPC::Runtime::GCContext* context)
{
/*80103C58 00100A58*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80103C5C 00100A5C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80103C60 00100A60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80103C64 00100A64*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80103C68 00100A68*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80103C6C 00100A6C*/ PPC::Runtime::ASM::li(context->r3, 0x18);
/*80103C70 00100A70*/ PPC::Runtime::ASM::bl(fn_800F446C);
/*80103C74 00100A74*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80103C78 00100A78*/ PPC::Runtime::ASM::bl(fn_80103C90);
/*80103C7C 00100A7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80103C80 00100A80*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80103C84 00100A84*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80103C88 00100A88*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80103C8C 00100A8C*/ PPC::Runtime::ASM::blr();
}