//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018CBC8.hpp"
#include "fn_801D5CA0.hpp"



void fn_801D6C90(PPC::Runtime::GCContext* context)
{
/*801D6C90 001D3A90*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801D6C94 001D3A94*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D6C98 001D3A98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D6C9C 001D3A9C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D6CA0 001D3AA0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801D6CA4 001D3AA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x660, context->r3));
/*801D6CA8 001D3AA8*/ PPC::Runtime::ASM::bl(fn_8018CBC8);
/*801D6CAC 001D3AAC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801D6CB0 001D3AB0*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*801D6CB4 001D3AB4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801D6CB8 001D3AB8*/ PPC::Runtime::ASM::bl(fn_801D5CA0);
/*801D6CBC 001D3ABC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D6CC0 001D3AC0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D6CC4 001D3AC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D6CC8 001D3AC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801D6CCC 001D3ACC*/ PPC::Runtime::ASM::blr();
}