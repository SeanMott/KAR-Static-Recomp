//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8028DFC8(PPC::Runtime::GCContext* context)
{
/*8028DFC8 0028ADC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8028DFCC 0028ADCC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028DFD0 0028ADD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028DFD4 0028ADD4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028DFD8 0028ADD8*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8028DFDC 0028ADDC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 8028DFE0 0028ADE0  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8028DFE4 0028ADE4*/ PPC::Runtime::ASM::beq(.L_8028E03C);
/*8028DFE8 0028ADE8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDDD8 @ Get_MemoryOffset_HighBit);
/*8028DFEC 0028ADEC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDDD8 @ Get_MemoryOffset_LowBit);
/*8028DFF0 0028ADF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028DFF4 0028ADF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8028DFF8 0028ADF8*/ PPC::Runtime::ASM::bl(fn_HSD_JObjUnref);
/*8028DFFC 0028ADFC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028E000 0028AE00*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8028E004 0028AE04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8028E008 0028AE08*/ PPC::Runtime::ASM::beq(.L_8028E02C);
/*8028E00C 0028AE0C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDD98 @ Get_MemoryOffset_HighBit);
/*8028E010 0028AE10*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028E014 0028AE14*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDD98 @ Get_MemoryOffset_LowBit);
/*8028E018 0028AE18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028E01C 0028AE1C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028E020 0028AE20*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8028E024 0028AE24*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8028E028 0028AE28*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8028E02C, 0x8028E02C) //this is a jump label
/*8028E02C 0028AE2C*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*8028E030 0028AE30*/ PPC::Runtime::ASM::ble(.L_8028E03C);
/*8028E034 0028AE34*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028E038 0028AE38*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028E03C, 0x8028E03C) //this is a jump label
/*8028E03C 0028AE3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028E040 0028AE40*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028E044 0028AE44*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028E048 0028AE48*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8028E04C 0028AE4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028E050 0028AE50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8028E054 0028AE54*/ PPC::Runtime::ASM::blr();
}