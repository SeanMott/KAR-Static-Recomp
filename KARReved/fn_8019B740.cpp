//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_ChangeFace.hpp"
#include "fn_ChangeFace.hpp"



void fn_8019B740(PPC::Runtime::GCContext* context)
{
/*8019B740 00198540*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8019B744 00198544*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019B748 00198548*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019B74C 0019854C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019B750 00198550*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8019B754 00198554*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8019B758 00198558*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8019B75C 0019855C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8019B760 00198560*/ PPC::Runtime::ASM::lha(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8019B764 00198564*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r5));
/* 8019B768 00198568  54 84 B8 0E */ extlwi context->r4 , context->r4 , 8 , 23
/*8019B76C 0019856C*/ PPC::Runtime::ASM::srawi(context->r4, context->r4, 25);
/* 8019B770 00198570  54 00 A8 16 */ extlwi context->r0 , context->r0 , 12 , 21
/*8019B774 00198574*/ PPC::Runtime::ASM::srawi(context->r5, context->r0, 21);
/*8019B778 00198578*/ PPC::Runtime::ASM::bl(fn_ChangeFace);
/*8019B77C 0019857C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8019B780 00198580*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/* 8019B784 00198584  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*8019B788 00198588*/ PPC::Runtime::ASM::beq(.L_8019B7AC);
/*8019B78C 0019858C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8019B790 00198590*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8019B794 00198594*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r5));
/* 8019B798 00198598  54 84 70 0E */ extlwi context->r4 , context->r4 , 8 , 14
/*8019B79C 0019859C*/ PPC::Runtime::ASM::srawi(context->r4, context->r4, 25);
/* 8019B7A0 001985A0  54 00 A8 16 */ extlwi context->r0 , context->r0 , 12 , 21
/*8019B7A4 001985A4*/ PPC::Runtime::ASM::srawi(context->r5, context->r0, 21);
/*8019B7A8 001985A8*/ PPC::Runtime::ASM::bl(fn_ChangeFace);
RUNTIME_PPC_JUMP_LABEL(.L_8019B7AC, 0x8019B7AC) //this is a jump label
/*8019B7AC 001985AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8019B7B0 001985B0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*8019B7B4 001985B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8019B7B8 001985B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019B7BC 001985BC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8019B7C0 001985C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019B7C4 001985C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019B7C8 001985C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019B7CC 001985CC*/ PPC::Runtime::ASM::blr();
}