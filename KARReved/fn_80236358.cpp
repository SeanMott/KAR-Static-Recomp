//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80234A8C.hpp"



void fn_80236358(PPC::Runtime::GCContext* context)
{
/*80236358 00233158*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8023635C 0023315C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80236360 00233160*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80236364 00233164*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80236368 00233168*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8023636C 0023316C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80236370 00233170*/ PPC::Runtime::ASM::cmpwi(context->r27, -0x1);
/*80236374 00233174*/ PPC::Runtime::ASM::bne(.L_8023638C);
/*80236378 00233178*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B53BC @ Get_MemoryOffset_HighBit);
/*8023637C 0023317C*/ PPC::Runtime::ASM::li(context->r3, String_ "eflib." Get_MemoryOffset_SDA21);
/*80236380 00233180*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804B53BC @ Get_MemoryOffset_LowBit);
/*80236384 00233184*/ PPC::Runtime::ASM::li(context->r4, 0xeb);
/*80236388 00233188*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8023638C, 0x8023638C) //this is a jump label
/*8023638C 0023318C*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*80236390 00233190*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80236394 00233194*/ PPC::Runtime::ASM::addi(context->r29, context->r3, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80236398, 0x80236398) //this is a jump label
/*80236398 00233198*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8023639C 0023319C*/ PPC::Runtime::ASM::addi(context->r31, context->r29, 0x140);
/*802363A0 002331A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r29));
/*802363A4 002331A4*/ PPC::Runtime::ASM::addi(context->r30, context->r29, 0xc0);
/*802363A8 002331A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r29));
/*802363AC 002331AC*/ PPC::Runtime::ASM::b(.L_802363EC);
RUNTIME_PPC_JUMP_LABEL(.L_802363B0, 0x802363B0) //this is a jump label
/*802363B0 002331B0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802363B4 002331B4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802363B8 002331B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*802363BC 002331BC*/ PPC::Runtime::ASM::cmpw(context->r0, context->r27);
/*802363C0 002331C0*/ PPC::Runtime::ASM::bne(.L_802363CC);
/*802363C4 002331C4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802363C8 002331C8*/ PPC::Runtime::ASM::bl(fn_80234A8C);
RUNTIME_PPC_JUMP_LABEL(.L_802363CC, 0x802363CC) //this is a jump label
/*802363CC 002331CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802363D0 002331D0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802363D4 002331D4*/ PPC::Runtime::ASM::bne(.L_802363E8);
/*802363D8 002331D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802363DC 002331DC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802363E0 002331E0*/ PPC::Runtime::ASM::beq(.L_802363F4);
/*802363E4 002331E4*/ PPC::Runtime::ASM::b(.L_802363EC);
RUNTIME_PPC_JUMP_LABEL(.L_802363E8, 0x802363E8) //this is a jump label
/*802363E8 002331E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_802363EC, 0x802363EC) //this is a jump label
/*802363EC 002331EC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802363F0 002331F0*/ PPC::Runtime::ASM::bne(.L_802363B0);
RUNTIME_PPC_JUMP_LABEL(.L_802363F4, 0x802363F4) //this is a jump label
/*802363F4 002331F4*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*802363F8 002331F8*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*802363FC 002331FC*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x20);
/*80236400 00233200*/ PPC::Runtime::ASM::blt(.L_80236398);
/*80236404 00233204*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80236408 00233208*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8023640C 0023320C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80236410 00233210*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80236414 00233214*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80236418 00233218*/ PPC::Runtime::ASM::blr();
}