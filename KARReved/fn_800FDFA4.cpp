//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800E86CC.hpp"
#include "fn_800F7870.hpp"
#include "fn_800FE18C.hpp"



void fn_800FDFA4(PPC::Runtime::GCContext* context)
{
/*800FDFA4 000FADA4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800FDFA8 000FADA8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800FDFAC 000FADAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800FDFB0 000FADB0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800FDFB4 000FADB4*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*800FDFB8 000FADB8*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*800FDFBC 000FADBC*/ PPC::Runtime::ASM::lis(context->r3, StructWithFuncPtrs_67 @ Get_MemoryOffset_HighBit);
/*800FDFC0 000FADC0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*800FDFC4 000FADC4*/ PPC::Runtime::ASM::addi(context->r27, context->r3, StructWithFuncPtrs_67 @ Get_MemoryOffset_LowBit);
/*800FDFC8 000FADC8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*800FDFCC 000FADCC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800FDFD0 000FADD0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800FDFD4 000FADD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*800FDFD8 000FADD8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800FDFDC 000FADDC*/ PPC::Runtime::ASM::ble(.L_800FDFF0);
/*800FDFE0 000FADE0*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x88);
/*800FDFE4 000FADE4*/ PPC::Runtime::ASM::addi(context->r5, context->r27, 0x9c);
/*800FDFE8 000FADE8*/ PPC::Runtime::ASM::li(context->r4, 0x23e);
/*800FDFEC 000FADEC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800FDFF0, 0x800FDFF0) //this is a jump label
/*800FDFF0 000FADF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*800FDFF4 000FADF4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800FDFF8 000FADF8*/ PPC::Runtime::ASM::ble(.L_800FE00C);
/*800FDFFC 000FADFC*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x88);
/*800FE000 000FAE00*/ PPC::Runtime::ASM::addi(context->r5, context->r27, 0xd4);
/*800FE004 000FAE04*/ PPC::Runtime::ASM::li(context->r4, 0x23f);
/*800FE008 000FAE08*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800FE00C, 0x800FE00C) //this is a jump label
/*800FE00C 000FAE0C*/ PPC::Runtime::ASM::mr(context->r26, context->r30);
/*800FE010 000FAE10*/ PPC::Runtime::ASM::li(context->r24, 0x0);
/*800FE014 000FAE14*/ PPC::Runtime::ASM::li(context->r25, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800FE018, 0x800FE018) //this is a jump label
/*800FE018 000FAE18*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800FE01C 000FAE1C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r26));
/*800FE020 000FAE20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*800FE024 000FAE24*/ PPC::Runtime::ASM::cmpw(context->r24, context->r0);
/*800FE028 000FAE28*/ PPC::Runtime::ASM::bge(.L_800FE074);
/*800FE02C 000FAE2C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800FE030 000FAE30*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FE034 000FAE34*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r25);
/*800FE038 000FAE38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*800FE03C 000FAE3C*/ PPC::Runtime::ASM::b(.L_800FE054);
RUNTIME_PPC_JUMP_LABEL(.L_800FE040, 0x800FE040) //this is a jump label
/*800FE040 000FAE40*/ PPC::Runtime::ASM::cmpw(context->r0, context->r5);
/*800FE044 000FAE44*/ PPC::Runtime::ASM::bne(.L_800FE04C);
/*800FE048 000FAE48*/ PPC::Runtime::ASM::b(.L_800FE070);
RUNTIME_PPC_JUMP_LABEL(.L_800FE04C, 0x800FE04C) //this is a jump label
/*800FE04C 000FAE4C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800FE050 000FAE50*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800FE054, 0x800FE054) //this is a jump label
/*800FE054 000FAE54*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800FE058 000FAE58*/ PPC::Runtime::ASM::bne(.L_800FE040);
/*800FE05C 000FAE5C*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x10c);
/*800FE060 000FAE60*/ PPC::Runtime::ASM::li(context->r4, 0x96c);
/*800FE064 000FAE64*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6268 @ Get_MemoryOffset_SDA21);
/*800FE068 000FAE68*/ PPC::Runtime::ASM::bl(fn___assert);
/*800FE06C 000FAE6C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800FE070, 0x800FE070) //this is a jump label
/*800FE070 000FAE70*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_800FE074, 0x800FE074) //this is a jump label
/*800FE074 000FAE74*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x1);
/*800FE078 000FAE78*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x4);
/*800FE07C 000FAE7C*/ PPC::Runtime::ASM::cmpwi(context->r24, 0x2);
/*800FE080 000FAE80*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x4);
/*800FE084 000FAE84*/ PPC::Runtime::ASM::blt(.L_800FE018);
/*800FE088 000FAE88*/ PPC::Runtime::ASM::li(context->r24, 0x0);
/*800FE08C 000FAE8C*/ PPC::Runtime::ASM::mr(context->r25, context->r30);
/*800FE090 000FAE90*/ PPC::Runtime::ASM::mr(context->r26, context->r24);
RUNTIME_PPC_JUMP_LABEL(.L_800FE094, 0x800FE094) //this is a jump label
/*800FE094 000FAE94*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800FE098 000FAE98*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r25));
/*800FE09C 000FAE9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*800FE0A0 000FAEA0*/ PPC::Runtime::ASM::cmpw(context->r24, context->r0);
/*800FE0A4 000FAEA4*/ PPC::Runtime::ASM::bge(.L_800FE0F0);
/*800FE0A8 000FAEA8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*800FE0AC 000FAEAC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FE0B0 000FAEB0*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r26);
/*800FE0B4 000FAEB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*800FE0B8 000FAEB8*/ PPC::Runtime::ASM::b(.L_800FE0D0);
RUNTIME_PPC_JUMP_LABEL(.L_800FE0BC, 0x800FE0BC) //this is a jump label
/*800FE0BC 000FAEBC*/ PPC::Runtime::ASM::cmpw(context->r0, context->r5);
/*800FE0C0 000FAEC0*/ PPC::Runtime::ASM::bne(.L_800FE0C8);
/*800FE0C4 000FAEC4*/ PPC::Runtime::ASM::b(.L_800FE0EC);
RUNTIME_PPC_JUMP_LABEL(.L_800FE0C8, 0x800FE0C8) //this is a jump label
/*800FE0C8 000FAEC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800FE0CC 000FAECC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800FE0D0, 0x800FE0D0) //this is a jump label
/*800FE0D0 000FAED0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800FE0D4 000FAED4*/ PPC::Runtime::ASM::bne(.L_800FE0BC);
/*800FE0D8 000FAED8*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x10c);
/*800FE0DC 000FAEDC*/ PPC::Runtime::ASM::li(context->r4, 0x96c);
/*800FE0E0 000FAEE0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6268 @ Get_MemoryOffset_SDA21);
/*800FE0E4 000FAEE4*/ PPC::Runtime::ASM::bl(fn___assert);
/*800FE0E8 000FAEE8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800FE0EC, 0x800FE0EC) //this is a jump label
/*800FE0EC 000FAEEC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r25));
RUNTIME_PPC_JUMP_LABEL(.L_800FE0F0, 0x800FE0F0) //this is a jump label
/*800FE0F0 000FAEF0*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x1);
/*800FE0F4 000FAEF4*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x4);
/*800FE0F8 000FAEF8*/ PPC::Runtime::ASM::cmpwi(context->r24, 0x2);
/*800FE0FC 000FAEFC*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x4);
/*800FE100 000FAF00*/ PPC::Runtime::ASM::blt(.L_800FE094);
/*800FE104 000FAF04*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*800FE108 000FAF08*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r30));
/*800FE10C 000FAF0C*/ PPC::Runtime::ASM::mr(context->r25, context->r26);
/*800FE110 000FAF10*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x144, context->r30));
/*800FE114 000FAF14*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r30));
/*800FE118 000FAF18*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14c, context->r30));
/*800FE11C 000FAF1C*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x150, context->r30));
/*800FE120 000FAF20*/ PPC::Runtime::ASM::b(.L_800FE140);
RUNTIME_PPC_JUMP_LABEL(.L_800FE124, 0x800FE124) //this is a jump label
/*800FE124 000FAF24*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800FE128 000FAF28*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800FE12C 000FAF2C*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*800FE130 000FAF30*/ PPC::Runtime::ASM::lwzx(context->r5, context->r5, context->r25);
/*800FE134 000FAF34*/ PPC::Runtime::ASM::bl(fn_800E86CC);
/*800FE138 000FAF38*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x4);
/*800FE13C 000FAF3C*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800FE140, 0x800FE140) //this is a jump label
/*800FE140 000FAF40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*800FE144 000FAF44*/ PPC::Runtime::ASM::cmpw(context->r26, context->r0);
/*800FE148 000FAF48*/ PPC::Runtime::ASM::blt(.L_800FE124);
/*800FE14C 000FAF4C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*800FE150 000FAF50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*800FE154 000FAF54*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800FE158 000FAF58*/ PPC::Runtime::ASM::beq(.L_800FE16C);
/*800FE15C 000FAF5C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800FE160 000FAF60*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*800FE164 000FAF64*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800FE168 000FAF68*/ PPC::Runtime::ASM::bl(fn_800F7870);
RUNTIME_PPC_JUMP_LABEL(.L_800FE16C, 0x800FE16C) //this is a jump label
/*800FE16C 000FAF6C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800FE170 000FAF70*/ PPC::Runtime::ASM::bl(fn_800FE18C);
/*800FE174 000FAF74*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800FE178 000FAF78*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*800FE17C 000FAF7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800FE180 000FAF80*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800FE184 000FAF84*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800FE188 000FAF88*/ PPC::Runtime::ASM::blr();
}