//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80079A60(PPC::Runtime::GCContext* context)
{
/*80079A60 00076860*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r3));
/*80079A64 00076864*/ PPC::Runtime::ASM::li(context->r11, 0x0);
/*80079A68 00076868*/ PPC::Runtime::ASM::mr(context->r8, context->r3);
/*80079A6C 0007686C*/ PPC::Runtime::ASM::mr(context->r10, context->r9);
/*80079A70 00076870*/ PPC::Runtime::ASM::mtctr(context->r9);
/*80079A74 00076874*/ PPC::Runtime::ASM::cmpwi(context->r9, 0x0);
/*80079A78 00076878*/ PPC::Runtime::ASM::ble(.L_80079AA4);
RUNTIME_PPC_JUMP_LABEL(.L_80079A7C, 0x80079A7C) //this is a jump label
/*80079A7C 0007687C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*80079A80 00076880*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80079A84 00076884*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*80079A88 00076888*/ PPC::Runtime::ASM::cmpw(context->r7, context->r0);
/*80079A8C 0007688C*/ PPC::Runtime::ASM::ble(.L_80079A98);
/*80079A90 00076890*/ PPC::Runtime::ASM::mr(context->r10, context->r11);
/*80079A94 00076894*/ PPC::Runtime::ASM::b(.L_80079AA4);
RUNTIME_PPC_JUMP_LABEL(.L_80079A98, 0x80079A98) //this is a jump label
/*80079A98 00076898*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x14);
/*80079A9C 0007689C*/ PPC::Runtime::ASM::addi(context->r11, context->r11, 0x1);
/*80079AA0 000768A0*/ PPC::Runtime::ASM::bdnz(.L_80079A7C);
RUNTIME_PPC_JUMP_LABEL(.L_80079AA4, 0x80079AA4) //this is a jump label
/*80079AA4 000768A4*/ PPC::Runtime::ASM::cmpwi(context->r10, 0xa);
/*80079AA8 000768A8*/ PPC::Runtime::ASM::bgelr();
/*80079AAC 000768AC*/ PPC::Runtime::ASM::cmpwi(context->r9, 0xa);
/*80079AB0 000768B0*/ PPC::Runtime::ASM::blt(.L_80079ABC);
/*80079AB4 000768B4*/ PPC::Runtime::ASM::li(context->r0, 0x9);
/*80079AB8 000768B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80079ABC, 0x80079ABC) //this is a jump label
/*80079ABC 000768BC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r3));
/*80079AC0 000768C0*/ PPC::Runtime::ASM::mulli(context->r0, context->r6, 0x14);
/*80079AC4 000768C4*/ PPC::Runtime::ASM::cmpw(context->r6, context->r10);
/*80079AC8 000768C8*/ PPC::Runtime::ASM::subf(context->r6, context->r10, context->r6);
/*80079ACC 000768CC*/ PPC::Runtime::ASM::add(context->r8, context->r3, context->r0);
/*80079AD0 000768D0*/ PPC::Runtime::ASM::ble(.L_80079BC4);
/* 80079AD4 000768D4  54 C0 F0 BF */ srwi. context->r0 , context->r6 , 2
/*80079AD8 000768D8*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80079ADC 000768DC*/ PPC::Runtime::ASM::beq(.L_80079B90);
RUNTIME_PPC_JUMP_LABEL(.L_80079AE0, 0x80079AE0) //this is a jump label
/*80079AE0 000768E0*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x14, context->r8));
/*80079AE4 000768E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r8));
/*80079AE8 000768E8*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*80079AEC 000768EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80079AF0 000768F0*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r8));
/*80079AF4 000768F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r8));
/*80079AF8 000768F8*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*80079AFC 000768FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r8));
/*80079B00 00076900*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r8));
/*80079B04 00076904*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r8));
/*80079B08 00076908*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x28, context->r8));
/*80079B0C 0007690C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x24, context->r8));
/*80079B10 00076910*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x14, context->r8));
/*80079B14 00076914*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r8));
/*80079B18 00076918*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r8));
/*80079B1C 0007691C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1c, context->r8));
/*80079B20 00076920*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r8));
/*80079B24 00076924*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r8));
/*80079B28 00076928*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r8));
/*80079B2C 0007692C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r8));
/*80079B30 00076930*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x3c, context->r8));
/*80079B34 00076934*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x38, context->r8));
/*80079B38 00076938*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x28, context->r8));
/*80079B3C 0007693C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x24, context->r8));
/*80079B40 00076940*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x34, context->r8));
/*80079B44 00076944*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r8));
/*80079B48 00076948*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r8));
/*80079B4C 0007694C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1c, context->r8));
/*80079B50 00076950*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x2c, context->r8));
/*80079B54 00076954*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r8));
/*80079B58 00076958*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r8));
/*80079B5C 0007695C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4c, context->r8));
/*80079B60 00076960*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x3c, context->r8));
/*80079B64 00076964*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x38, context->r8));
/*80079B68 00076968*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x48, context->r8));
/*80079B6C 0007696C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x44, context->r8));
/*80079B70 00076970*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x34, context->r8));
/*80079B74 00076974*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r8));
/*80079B78 00076978*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r8));
/*80079B7C 0007697C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x2c, context->r8));
/*80079B80 00076980*/ PPC::Runtime::ASM::subi(context->r8, context->r8, 0x50);
/*80079B84 00076984*/ PPC::Runtime::ASM::bdnz(.L_80079AE0);
/*80079B88 00076988*/ PPC::Runtime::ASM::andi.(context->r6, context->r6, 0x3);
/*80079B8C 0007698C*/ PPC::Runtime::ASM::beq(.L_80079BC4);
RUNTIME_PPC_JUMP_LABEL(.L_80079B90, 0x80079B90) //this is a jump label
/*80079B90 00076990*/ PPC::Runtime::ASM::mtctr(context->r6);
RUNTIME_PPC_JUMP_LABEL(.L_80079B94, 0x80079B94) //this is a jump label
/*80079B94 00076994*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x14, context->r8));
/*80079B98 00076998*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r8));
/*80079B9C 0007699C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*80079BA0 000769A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80079BA4 000769A4*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r8));
/*80079BA8 000769A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r8));
/*80079BAC 000769AC*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*80079BB0 000769B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r8));
/*80079BB4 000769B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r8));
/*80079BB8 000769B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r8));
/*80079BBC 000769BC*/ PPC::Runtime::ASM::subi(context->r8, context->r8, 0x14);
/*80079BC0 000769C0*/ PPC::Runtime::ASM::bdnz(.L_80079B94);
RUNTIME_PPC_JUMP_LABEL(.L_80079BC4, 0x80079BC4) //this is a jump label
/*80079BC4 000769C4*/ PPC::Runtime::ASM::mulli(context->r0, context->r10, 0x14);
/*80079BC8 000769C8*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*80079BCC 000769CC*/ PPC::Runtime::ASM::stwx(context->r4, context->r3, context->r0);
/*80079BD0 000769D0*/ PPC::Runtime::ASM::add(context->r6, context->r3, context->r0);
/*80079BD4 000769D4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80079BD8 000769D8*/ PPC::Runtime::ASM::beq(.L_80079BF4);
/*80079BDC 000769DC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80079BE0 000769E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80079BE4 000769E4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*80079BE8 000769E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*80079BEC 000769EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80079BF0 000769F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
RUNTIME_PPC_JUMP_LABEL(.L_80079BF4, 0x80079BF4) //this is a jump label
/*80079BF4 000769F4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r3));
/*80079BF8 000769F8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*80079BFC 000769FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r3));
/*80079C00 00076A00*/ PPC::Runtime::ASM::blr();
}