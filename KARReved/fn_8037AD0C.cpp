//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8037DC54.hpp"



void fn_8037AD0C(PPC::Runtime::GCContext* context)
{
/*8037AD0C 00377B0C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8037AD10 00377B10*/ PPC::Runtime::ASM::mflr(context->r0);
/*8037AD14 00377B14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037AD18 00377B18*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8037AD1C 00377B1C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8037AD20 00377B20*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8037AD24 00377B24*/ PPC::Runtime::ASM::bl(fn_GXInvalidateVtxCache);
/*8037AD28 00377B28*/ PPC::Runtime::ASM::bl(fn_GXInvalidateTexAll);
/*8037AD2C 00377B2C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8037AD30 00377B30*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetCurrent?);
/*8037AD34 00377B34*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8037AD38 00377B38*/ PPC::Runtime::ASM::beq(.L_8037ADD4);
/*8037AD3C 00377B3C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDA58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8037AD40 00377B40*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8037AD44 00377B44*/ PPC::Runtime::ASM::li(context->r5, lbl_805DBC18 @ Get_MemoryOffset_SDA21);
/*8037AD48 00377B48*/ PPC::Runtime::ASM::li(context->r6, lbl_805DBC10 @ Get_MemoryOffset_SDA21);
/*8037AD4C 00377B4C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8037AD50 00377B50*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8037AD54 00377B54*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8037AD58 00377B58*/ PPC::Runtime::ASM::b(.L_8037AD88);
RUNTIME_PPC_JUMP_LABEL(.L_8037AD5C, 0x8037AD5C) //this is a jump label
/*8037AD5C 00377B5C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8037AD60 00377B60*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8037AD64 00377B64*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r12));
/*8037AD68 00377B68*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8037AD6C 00377B6C*/ PPC::Runtime::ASM::bctrl();
/*8037AD70 00377B70*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8037AD74 00377B74*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8037AD78 00377B78*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*8037AD7C 00377B7C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8037AD80 00377B80*/ PPC::Runtime::ASM::bctrl();
/*8037AD84 00377B84*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8037AD88, 0x8037AD88) //this is a jump label
/*8037AD88 00377B88*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8037AD8C 00377B8C*/ PPC::Runtime::ASM::bne(.L_8037AD5C);
/*8037AD90 00377B90*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*8037AD94 00377B94*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8037AD98 00377B98*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*8037AD9C 00377B9C*/ PPC::Runtime::ASM::bl(fn_80433F00);
/*8037ADA0 00377BA0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8037ADA4 00377BA4*/ PPC::Runtime::ASM::bl(fn_HSD_StateSetColorUpdate);
/*8037ADA8 00377BA8*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*8037ADAC 00377BAC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8037ADB0 00377BB0*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*8037ADB4 00377BB4*/ PPC::Runtime::ASM::bl(fn_80433F00);
/*8037ADB8 00377BB8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8037ADBC 00377BBC*/ PPC::Runtime::ASM::bl(fn_HSD_StateSetColorUpdate);
/*8037ADC0 00377BC0*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*8037ADC4 00377BC4*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8037ADC8 00377BC8*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*8037ADCC 00377BCC*/ PPC::Runtime::ASM::bl(fn_80433F00);
/*8037ADD0 00377BD0*/ PPC::Runtime::ASM::bl(fn_HSD_CObjEndCurrent);
RUNTIME_PPC_JUMP_LABEL(.L_8037ADD4, 0x8037ADD4) //this is a jump label
/*8037ADD4 00377BD4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r30));
/*8037ADD8 00377BD8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8037ADDC 00377BDC*/ PPC::Runtime::ASM::bl(fn_8037DC54);
/*8037ADE0 00377BE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8037ADE4 00377BE4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8037ADE8 00377BE8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8037ADEC 00377BEC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8037ADF0 00377BF0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8037ADF4 00377BF4*/ PPC::Runtime::ASM::blr();
}