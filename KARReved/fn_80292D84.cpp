//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80292D84(PPC::Runtime::GCContext* context)
{
/*80292D84 0028FB84*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80292D88 0028FB88*/ PPC::Runtime::ASM::mflr(context->r0);
/*80292D8C 0028FB8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80292D90 0028FB90*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80292D94 0028FB94*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80292D98 0028FB98*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 80292D9C 0028FB9C  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80292DA0 0028FBA0*/ PPC::Runtime::ASM::beq(.L_80292DD0);
/*80292DA4 0028FBA4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD848 @ Get_MemoryOffset_HighBit);
/*80292DA8 0028FBA8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD848 @ Get_MemoryOffset_LowBit);
/*80292DAC 0028FBAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80292DB0 0028FBB0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80292DB4 0028FBB4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80292DB8 0028FBB8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80292DBC 0028FBBC*/ PPC::Runtime::ASM::bctrl();
/*80292DC0 0028FBC0*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*80292DC4 0028FBC4*/ PPC::Runtime::ASM::ble(.L_80292DD0);
/*80292DC8 0028FBC8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80292DCC 0028FBCC*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80292DD0, 0x80292DD0) //this is a jump label
/*80292DD0 0028FBD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80292DD4 0028FBD4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80292DD8 0028FBD8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80292DDC 0028FBDC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80292DE0 0028FBE0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80292DE4 0028FBE4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80292DE8 0028FBE8*/ PPC::Runtime::ASM::blr();
}