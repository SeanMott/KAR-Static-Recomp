//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005E108.hpp"
#include "fn_80061834.hpp"



void fn_80379B1C(PPC::Runtime::GCContext* context)
{
/*80379B1C 0037691C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80379B20 00376920*/ PPC::Runtime::ASM::mflr(context->r0);
/*80379B24 00376924*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80379B28 00376928*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80379B2C 0037692C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80379B30 00376930*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80379B34 00376934*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*80379B38 00376938*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x3);
/*80379B3C 0037693C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80379B40 00376940*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*80379B44 00376944*/ PPC::Runtime::ASM::blt(.L_80379B60);
/*80379B48 00376948*/ PPC::Runtime::ASM::lis(context->r3, String_ "a2d_soundhandle.cp" Get_MemoryOffset_HighBit);
/*80379B4C 0037694C*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F2B14 @ Get_MemoryOffset_HighBit);
/*80379B50 00376950*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "a2d_soundhandle.cp" Get_MemoryOffset_LowBit);
/*80379B54 00376954*/ PPC::Runtime::ASM::li(context->r4, 0xbe);
/*80379B58 00376958*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804F2B14 @ Get_MemoryOffset_LowBit);
/*80379B5C 0037695C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80379B60, 0x80379B60) //this is a jump label
/*80379B60 00376960*/ PPC::Runtime::ASM::mulli(context->r5, context->r29, 0xc);
/*80379B64 00376964*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80379B68 00376968*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_63 @ Get_MemoryOffset_HighBit);
/*80379B6C 0037696C*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*80379B70 00376970*/ PPC::Runtime::ASM::addi(context->r4, context->r4, MemoryOffset_63 @ Get_MemoryOffset_LowBit);
/*80379B74 00376974*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 2);
/*80379B78 00376978*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r5);
/*80379B7C 0037697C*/ PPC::Runtime::ASM::lwzx(context->r30, context->r4, context->r0);
/*80379B80 00376980*/ PPC::Runtime::ASM::beq(.L_80379BAC);
/*80379B84 00376984*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80379B88 00376988*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*80379B8C 0037698C*/ PPC::Runtime::ASM::bne(.L_80379BAC);
/*80379B90 00376990*/ PPC::Runtime::ASM::bl(fn_8005E108);
/*80379B94 00376994*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*80379B98 00376998*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/* 80379B9C 0037699C  54 00 0F FF */ srwi. context->r0 , context->r0 , 31
/*80379BA0 003769A0*/ PPC::Runtime::ASM::beq(.L_80379BAC);
/*80379BA4 003769A4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80379BA8 003769A8*/ PPC::Runtime::ASM::b(.L_80379BDC);
RUNTIME_PPC_JUMP_LABEL(.L_80379BAC, 0x80379BAC) //this is a jump label
/*80379BAC 003769AC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80379BB0 003769B0*/ PPC::Runtime::ASM::li(context->r4, 0x7f);
/*80379BB4 003769B4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80379BB8 003769B8*/ PPC::Runtime::ASM::bl(fn_80061834);
/*80379BBC 003769BC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80379BC0 003769C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80379BC4 003769C4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80379BC8 003769C8*/ PPC::Runtime::ASM::beq(.L_80379BD8);
/*80379BCC 003769CC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80379BD0 003769D0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80379BD4 003769D4*/ PPC::Runtime::ASM::b(.L_80379BDC);
RUNTIME_PPC_JUMP_LABEL(.L_80379BD8, 0x80379BD8) //this is a jump label
/*80379BD8 003769D8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80379BDC, 0x80379BDC) //this is a jump label
/*80379BDC 003769DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80379BE0 003769E0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80379BE4 003769E4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80379BE8 003769E8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80379BEC 003769EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80379BF0 003769F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80379BF4 003769F4*/ PPC::Runtime::ASM::blr();
}