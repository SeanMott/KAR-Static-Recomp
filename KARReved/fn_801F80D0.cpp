//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801DA530.hpp"
#include "fn_801F61E4.hpp"



void fn_801F80D0(PPC::Runtime::GCContext* context)
{
/*801F80D0 001F4ED0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F80D4 001F4ED4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F80D8 001F4ED8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F80DC 001F4EDC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F80E0 001F4EE0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801F80E4 001F4EE4*/ PPC::Runtime::ASM::bl(fn_801DA530);
/*801F80E8 001F4EE8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801F80EC 001F4EEC*/ PPC::Runtime::ASM::beq(.L_801F8128);
/*801F80F0 001F4EF0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x650, context->r31));
/*801F80F4 001F4EF4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F80F8 001F4EF8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E20C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F80FC 001F4EFC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*801F8100 001F4F00*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E20B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801F8104 001F4F04*/ PPC::Runtime::ASM::fmuls(context->f2, context->f1, context->f0);
/*801F8108 001F4F08*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b50, context->r31));
/*801F810C 001F4F0C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc44, context->r31));
/*801F8110 001F4F10*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7bc, context->r31));
/*801F8114 001F4F14*/ PPC::Runtime::ASM::fmul(context->f2, context->f3, context->f2);
/*801F8118 001F4F18*/ PPC::Runtime::ASM::frsp(context->f2, context->f2);
/*801F811C 001F4F1C*/ PPC::Runtime::ASM::fdivs(context->f2, context->f4, context->f2);
/*801F8120 001F4F20*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f0);
/*801F8124 001F4F24*/ PPC::Runtime::ASM::bl(fn_801F61E4);
RUNTIME_PPC_JUMP_LABEL(.L_801F8128, 0x801F8128) //this is a jump label
/*801F8128 001F4F28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F812C 001F4F2C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F8130 001F4F30*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F8134 001F4F34*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F8138 001F4F38*/ PPC::Runtime::ASM::blr();
}