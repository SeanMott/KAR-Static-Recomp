//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138B10.hpp"



void fn_80176898(PPC::Runtime::GCContext* context)
{
/*80176898 00173698*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8017689C 0017369C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801768A0 001736A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801768A4 001736A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801768A8 001736A8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801768AC 001736AC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801768B0 001736B0*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*801768B4 001736B4*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0xcdc);
/*801768B8 001736B8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801768BC 001736BC*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*801768C0 001736C0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801768C4 001736C4*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*801768C8 001736C8*/ PPC::Runtime::ASM::beq(.L_801768F8);
/*801768CC 001736CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r5));
/*801768D0 001736D0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801768D4 001736D4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r3));
/*801768D8 001736D8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801768DC 001736DC*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*801768E0 001736E0*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*801768E4 001736E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r5));
/*801768E8 001736E8*/ PPC::Runtime::ASM::slwi(context->r6, context->r0, 1);
/*801768EC 001736EC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801768F0 001736F0*/ PPC::Runtime::ASM::addi(context->r4, context->r6, 0x1);
/*801768F4 001736F4*/ PPC::Runtime::ASM::bl(fn_80138B10);
RUNTIME_PPC_JUMP_LABEL(.L_801768F8, 0x801768F8) //this is a jump label
/*801768F8 001736F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801768FC 001736FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80176900 00173700*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80176904 00173704*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80176908 00173708*/ PPC::Runtime::ASM::blr();
}