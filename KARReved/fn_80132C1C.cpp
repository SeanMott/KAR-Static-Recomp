//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801483F8.hpp"
#include "fn_8014B7E0.hpp"
#include "fn_8014BCCC.hpp"
#include "fn_80147044.hpp"



void fn_80132C1C(PPC::Runtime::GCContext* context)
{
/*80132C1C 0012FA1C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80132C20 0012FA20*/ PPC::Runtime::ASM::mflr(context->r0);
/*80132C24 0012FA24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80132C28 0012FA28*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80132C2C 0012FA2C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80132C30 0012FA30*/ PPC::Runtime::ASM::bl(fn_801483F8);
/*80132C34 0012FA34*/ PPC::Runtime::ASM::bl(fn_8014B7E0);
/*80132C38 0012FA38*/ PPC::Runtime::ASM::bl(fn_8014BCCC);
/*80132C3C 0012FA3C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80132C40 0012FA40*/ PPC::Runtime::ASM::bl(fn_80147044);
/*80132C44 0012FA44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80132C48 0012FA48*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80132C4C 0012FA4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80132C50 0012FA50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80132C54 0012FA54*/ PPC::Runtime::ASM::blr();
}