//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80222F00.hpp"



void fn_80220FA4(PPC::Runtime::GCContext* context)
{
/*80220FA4 0021DDA4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80220FA8 0021DDA8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80220FAC 0021DDAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80220FB0 0021DDB0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80220FB4 0021DDB4*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80220FB8 0021DDB8*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x4);
/*80220FBC 0021DDBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80220FC0 0021DDC0*/ PPC::Runtime::ASM::extrwi(context->r5, context->r5, 8, 22);
/*80220FC4 0021DDC4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80220FC8 0021DDC8*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80220FCC 0021DDCC*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x4);
/*80220FD0 0021DDD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80220FD4 0021DDD4*/ PPC::Runtime::ASM::mr(context->r4, context->r7);
/*80220FD8 0021DDD8*/ PPC::Runtime::ASM::bl(fn_80222F00);
/*80220FDC 0021DDDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80220FE0 0021DDE0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80220FE4 0021DDE4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80220FE8 0021DDE8*/ PPC::Runtime::ASM::blr();
}