//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8024ADB8(PPC::Runtime::GCContext* context)
{
/*8024ADB8 00247BB8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8024ADBC 00247BBC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8024ADC0 00247BC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8024ADC4 00247BC4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8024ADC8 00247BC8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8024ADCC 00247BCC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8024ADD0 00247BD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r3));
/*8024ADD4 00247BD4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8024ADD8 00247BD8*/ PPC::Runtime::ASM::beq(.L_8024ADF4);
/*8024ADDC 00247BDC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B5A18 @ Get_MemoryOffset_HighBit);
/*8024ADE0 00247BE0*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B5A24 @ Get_MemoryOffset_HighBit);
/*8024ADE4 00247BE4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B5A18 @ Get_MemoryOffset_LowBit);
/*8024ADE8 00247BE8*/ PPC::Runtime::ASM::li(context->r4, 0xf9);
/*8024ADEC 00247BEC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B5A24 @ Get_MemoryOffset_LowBit);
/*8024ADF0 00247BF0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8024ADF4, 0x8024ADF4) //this is a jump label
/*8024ADF4 00247BF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r30));
/*8024ADF8 00247BF8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x340, context->r30));
/*8024ADFC 00247BFC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8024AE00 00247C00*/ PPC::Runtime::ASM::beq(.L_8024AE1C);
/*8024AE04 00247C04*/ PPC::Runtime::ASM::lis(context->r3, lbl_804B5A18 @ Get_MemoryOffset_HighBit);
/*8024AE08 00247C08*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B5A24 @ Get_MemoryOffset_HighBit);
/*8024AE0C 00247C0C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804B5A18 @ Get_MemoryOffset_LowBit);
/*8024AE10 00247C10*/ PPC::Runtime::ASM::li(context->r4, 0xf9);
/*8024AE14 00247C14*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B5A24 @ Get_MemoryOffset_LowBit);
/*8024AE18 00247C18*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8024AE1C, 0x8024AE1C) //this is a jump label
/*8024AE1C 00247C1C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x340, context->r30));
/*8024AE20 00247C20*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8024AE24 00247C24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r3));
/*8024AE28 00247C28*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8024AE2C 00247C2C*/ PPC::Runtime::ASM::beq(.L_8024AE40);
/*8024AE30 00247C30*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34c, context->r30));
/* 8024AE34 00247C34  54 00 EF FF */ extrwi. context->r0 , context->r0 , 1 , 28
/*8024AE38 00247C38*/ PPC::Runtime::ASM::beq(.L_8024AE40);
/*8024AE3C 00247C3C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8024AE40, 0x8024AE40) //this is a jump label
/*8024AE40 00247C40*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*8024AE44 00247C44*/ PPC::Runtime::ASM::beq(.L_8024AE78);
/*8024AE48 00247C48*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8024AE4C 00247C4C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8024AE50 00247C50*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*8024AE54 00247C54*/ PPC::Runtime::ASM::b(.L_8024AE68);
RUNTIME_PPC_JUMP_LABEL(.L_8024AE58, 0x8024AE58) //this is a jump label
/*8024AE58 00247C58*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1c);
/*8024AE5C 00247C5C*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*8024AE60 00247C60*/ PPC::Runtime::ASM::stwx(context->r3, context->r5, context->r0);
/*8024AE64 00247C64*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x48);
RUNTIME_PPC_JUMP_LABEL(.L_8024AE68, 0x8024AE68) //this is a jump label
/*8024AE68 00247C68*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r31));
/*8024AE6C 00247C6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x168, context->r5));
/*8024AE70 00247C70*/ PPC::Runtime::ASM::cmpw(context->r6, context->r0);
/*8024AE74 00247C74*/ PPC::Runtime::ASM::blt(.L_8024AE58);
RUNTIME_PPC_JUMP_LABEL(.L_8024AE78, 0x8024AE78) //this is a jump label
/*8024AE78 00247C78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8024AE7C 00247C7C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8024AE80 00247C80*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8024AE84 00247C84*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8024AE88 00247C88*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8024AE8C 00247C8C*/ PPC::Runtime::ASM::blr();
}