//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800A0598(PPC::Runtime::GCContext* context)
{
/*800A0598 0009D398*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800A059C 0009D39C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800A05A0 0009D3A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800A05A4 0009D3A4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800A05A8 0009D3A8*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*800A05AC 0009D3AC*/ PPC::Runtime::ASM::lis(context->r5, lbl_80553E50 @ Get_MemoryOffset_HighBit);
/*800A05B0 0009D3B0*/ PPC::Runtime::ASM::mr(context->r25, context->r3);
/*800A05B4 0009D3B4*/ PPC::Runtime::ASM::addi(context->r29, context->r5, lbl_80553E50 @ Get_MemoryOffset_LowBit);
/*800A05B8 0009D3B8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800A05BC 0009D3BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800A05C0 0009D3C0*/ PPC::Runtime::ASM::mr(context->r26, context->r4);
/*800A05C4 0009D3C4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800A05C8 0009D3C8*/ PPC::Runtime::ASM::bne(.L_800A05D4);
/*800A05CC 0009D3CC*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*800A05D0 0009D3D0*/ PPC::Runtime::ASM::beq(.L_800A05E4);
RUNTIME_PPC_JUMP_LABEL(.L_800A05D4, 0x800A05D4) //this is a jump label
/*800A05D4 0009D3D4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800A05D8 0009D3D8*/ PPC::Runtime::ASM::bne(.L_800A0638);
/*800A05DC 0009D3DC*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x2);
/*800A05E0 0009D3E0*/ PPC::Runtime::ASM::bne(.L_800A0638);
RUNTIME_PPC_JUMP_LABEL(.L_800A05E4, 0x800A05E4) //this is a jump label
/*800A05E4 0009D3E4*/ PPC::Runtime::ASM::lis(context->r4, lbl_80553E50 @ Get_MemoryOffset_HighBit);
/*800A05E8 0009D3E8*/ PPC::Runtime::ASM::lis(context->r3, StructWithFuncPtrs_22 @ Get_MemoryOffset_HighBit);
/*800A05EC 0009D3EC*/ PPC::Runtime::ASM::addi(context->r30, context->r4, lbl_80553E50 @ Get_MemoryOffset_LowBit);
/*800A05F0 0009D3F0*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*800A05F4 0009D3F4*/ PPC::Runtime::ASM::addi(context->r31, context->r3, StructWithFuncPtrs_22 @ Get_MemoryOffset_LowBit);
/*800A05F8 0009D3F8*/ PPC::Runtime::ASM::b(.L_800A062C);
RUNTIME_PPC_JUMP_LABEL(.L_800A05FC, 0x800A05FC) //this is a jump label
/*800A05FC 0009D3FC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800A0600 0009D400*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*800A0604 0009D404*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800A0608 0009D408*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*800A060C 0009D40C*/ PPC::Runtime::ASM::slwi(context->r6, context->r5, 3);
/*800A0610 0009D410*/ PPC::Runtime::ASM::mr(context->r5, context->r26);
/*800A0614 0009D414*/ PPC::Runtime::ASM::add(context->r6, context->r31, context->r6);
/*800A0618 0009D418*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800A061C 0009D41C*/ PPC::Runtime::ASM::lwzx(context->r12, context->r6, context->r0);
/*800A0620 0009D420*/ PPC::Runtime::ASM::mtctr(context->r12);
/*800A0624 0009D424*/ PPC::Runtime::ASM::bctrl();
/*800A0628 0009D428*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800A062C, 0x800A062C) //this is a jump label
/*800A062C 0009D42C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r28));
/*800A0630 0009D430*/ PPC::Runtime::ASM::cmpw(context->r27, context->r0);
/*800A0634 0009D434*/ PPC::Runtime::ASM::blt(.L_800A05FC);
RUNTIME_PPC_JUMP_LABEL(.L_800A0638, 0x800A0638) //this is a jump label
/*800A0638 0009D438*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800A063C 0009D43C*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*800A0640 0009D440*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800A0644 0009D444*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800A0648 0009D448*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800A064C 0009D44C*/ PPC::Runtime::ASM::blr();
}