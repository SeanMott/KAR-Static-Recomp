//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019DE04.hpp"



void fn_8019DDB8(PPC::Runtime::GCContext* context)
{
/*8019DDB8 0019ABB8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8019DDBC 0019ABBC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019DDC0 0019ABC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019DDC4 0019ABC4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019DDC8 0019ABC8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8019DDCC 0019ABCC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8019DDD0 0019ABD0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8019DDD4, 0x8019DDD4) //this is a jump label
/*8019DDD4 0019ABD4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8019DDD8 0019ABD8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8019DDDC 0019ABDC*/ PPC::Runtime::ASM::bl(fn_8019DE04);
/*8019DDE0 0019ABE0*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8019DDE4 0019ABE4*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x3);
/*8019DDE8 0019ABE8*/ PPC::Runtime::ASM::blt(.L_8019DDD4);
/*8019DDEC 0019ABEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019DDF0 0019ABF0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019DDF4 0019ABF4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8019DDF8 0019ABF8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019DDFC 0019ABFC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019DE00 0019AC00*/ PPC::Runtime::ASM::blr();
}