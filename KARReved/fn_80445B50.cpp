//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn___assert.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn___assert.hpp"
#include "fn_80446820.hpp"
#include "fn_80445CF4.hpp"



void fn_80445B50(PPC::Runtime::GCContext* context)
{
/*80445B50 00442950*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80445B54 00442954*/ PPC::Runtime::ASM::mflr(context->r0);
/*80445B58 00442958*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80445B5C 0044295C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80445B60 00442960*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80445B64 00442964*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DE4B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80445B68 00442968*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18058EC80 @ Get_MemoryOffset_HighBit);
/*80445B6C 0044296C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80445B70 00442970*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r6));
/*80445B74 00442974*/ PPC::Runtime::ASM::addi(context->r31, context->r4, STRUCT_BYTE4_COUNT_18058EC80 @ Get_MemoryOffset_LowBit);
/*80445B78 00442978*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1a);
/*80445B7C 0044297C*/ PPC::Runtime::ASM::bne(.L_80445BA4);
/*80445B80 00442980*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x20);
/*80445B84 00442984*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058ED20 @ Get_MemoryOffset_HighBit);
/*80445B88 00442988*/ PPC::Runtime::ASM::subf(context->r5, context->r29, context->r0);
/*80445B8C 0044298C*/ PPC::Runtime::ASM::subf(context->r4, context->r0, context->r29);
/*80445B90 00442990*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_8058ED20 @ Get_MemoryOffset_LowBit);
/*80445B94 00442994*/ PPC::Runtime::ASM::or(context->r3, context->r5, context->r4);
/*80445B98 00442998*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r3, 15, 17, 17);
/*80445B9C 0044299C*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r3);
/*80445BA0 004429A0*/ PPC::Runtime::ASM::b(.L_80445BA8);
RUNTIME_PPC_JUMP_LABEL(.L_80445BA4, 0x80445BA4) //this is a jump label
/*80445BA4 004429A4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80445BA8, 0x80445BA8) //this is a jump label
/*80445BA8 004429A8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r6));
/*80445BAC 004429AC*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*80445BB0 004429B0*/ PPC::Runtime::ASM::beq(.L_80445BC8);
/*80445BB4 004429B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80445BB8 004429B8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r6));
/*80445BBC 004429BC*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r6));
/*80445BC0 004429C0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80445BC4 004429C4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80445BC8, 0x80445BC8) //this is a jump label
/*80445BC8 004429C8*/ PPC::Runtime::ASM::lwz(context->r27, STRUCT_BYTE4_COUNT_1805DE4B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80445BCC 004429CC*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80445BD0 004429D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*80445BD4 004429D4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*80445BD8 004429D8*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80445BDC 004429DC*/ PPC::Runtime::ASM::clrlslwi(context->r5, context->r0, 30, 2);
/*80445BE0 004429E0*/ PPC::Runtime::ASM::lwzx(context->r3, context->r4, context->r5);
/*80445BE4 004429E4*/ PPC::Runtime::ASM::cmplw(context->r3, context->r27);
/*80445BE8 004429E8*/ PPC::Runtime::ASM::bne(.L_80445C48);
/*80445BEC 004429EC*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0x10);
/*80445BF0 004429F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80445BF4 004429F4*/ PPC::Runtime::ASM::lwzx(context->r0, context->r6, context->r5);
/*80445BF8 004429F8*/ PPC::Runtime::ASM::stwx(context->r3, context->r4, context->r5);
/*80445BFC 004429FC*/ PPC::Runtime::ASM::cmplw(context->r0, context->r27);
/*80445C00 00442A00*/ PPC::Runtime::ASM::bne(.L_80445C68);
/*80445C04 00442A04*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80445C08 00442A08*/ PPC::Runtime::ASM::stwx(context->r0, context->r6, context->r5);
/*80445C0C 00442A0C*/ PPC::Runtime::ASM::b(.L_80445C68);
/*80445C10 00442A10*/ PPC::Runtime::ASM::b(.L_80445C48);
RUNTIME_PPC_JUMP_LABEL(.L_80445C14, 0x80445C14) //this is a jump label
/*80445C14 00442A14*/ PPC::Runtime::ASM::cmplw(context->r0, context->r27);
/*80445C18 00442A18*/ PPC::Runtime::ASM::bne(.L_80445C44);
/*80445C1C 00442A1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80445C20 00442A20*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x10);
/*80445C24 00442A24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80445C28 00442A28*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r5);
/*80445C2C 00442A2C*/ PPC::Runtime::ASM::cmplw(context->r0, context->r27);
/*80445C30 00442A30*/ PPC::Runtime::ASM::bne(.L_80445C38);
/*80445C34 00442A34*/ PPC::Runtime::ASM::stwx(context->r3, context->r4, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_80445C38, 0x80445C38) //this is a jump label
/*80445C38 00442A38*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80445C3C 00442A3C*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80445C40 00442A40*/ PPC::Runtime::ASM::b(.L_80445C70);
RUNTIME_PPC_JUMP_LABEL(.L_80445C44, 0x80445C44) //this is a jump label
/*80445C44 00442A44*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80445C48, 0x80445C48) //this is a jump label
/*80445C48 00442A48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80445C4C 00442A4C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80445C50 00442A50*/ PPC::Runtime::ASM::bne(.L_80445C14);
/*80445C54 00442A54*/ PPC::Runtime::ASM::lis(context->r3, lbl_80508BE0 @ Get_MemoryOffset_HighBit);
/*80445C58 00442A58*/ PPC::Runtime::ASM::li(context->r4, 0x79);
/*80445C5C 00442A5C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80508BE0 @ Get_MemoryOffset_LowBit);
/*80445C60 00442A60*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_347 @ Get_MemoryOffset_SDA21);
/*80445C64 00442A64*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80445C68, 0x80445C68) //this is a jump label
/*80445C68 00442A68*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80445C6C 00442A6C*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_80445C70, 0x80445C70) //this is a jump label
/*80445C70 00442A70*/ PPC::Runtime::ASM::lwz(context->r27, STRUCT_BYTE4_COUNT_1805DE4B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80445C74 00442A74*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80445C78 00442A78*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE4A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80445C7C 00442A7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80445C80 00442A80*/ PPC::Runtime::ASM::stw(context->r27, STRUCT_BYTE4_COUNT_1805DE4A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80445C84 00442A84*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80445C88 00442A88*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x20);
/*80445C8C 00442A8C*/ PPC::Runtime::ASM::cmplw(context->r29, context->r3);
/*80445C90 00442A90*/ PPC::Runtime::ASM::bne(.L_80445C9C);
/*80445C94 00442A94*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*80445C98 00442A98*/ PPC::Runtime::ASM::b(.L_80445CC4);
RUNTIME_PPC_JUMP_LABEL(.L_80445C9C, 0x80445C9C) //this is a jump label
/*80445C9C 00442A9C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x40);
/*80445CA0 00442AA0*/ PPC::Runtime::ASM::cmplw(context->r29, context->r0);
/*80445CA4 00442AA4*/ PPC::Runtime::ASM::bne(.L_80445CB0);
/*80445CA8 00442AA8*/ PPC::Runtime::ASM::li(context->r30, 0x1);
/*80445CAC 00442AAC*/ PPC::Runtime::ASM::b(.L_80445CC4);
RUNTIME_PPC_JUMP_LABEL(.L_80445CB0, 0x80445CB0) //this is a jump label
/*80445CB0 00442AB0*/ PPC::Runtime::ASM::lis(context->r3, lbl_80508BE0 @ Get_MemoryOffset_HighBit);
/*80445CB4 00442AB4*/ PPC::Runtime::ASM::li(context->r4, 0xb0);
/*80445CB8 00442AB8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80508BE0 @ Get_MemoryOffset_LowBit);
/*80445CBC 00442ABC*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_347 @ Get_MemoryOffset_SDA21);
/*80445CC0 00442AC0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80445CC4, 0x80445CC4) //this is a jump label
/*80445CC4 00442AC4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80445CC8 00442AC8*/ PPC::Runtime::ASM::li(context->r3, SkipAddress_15 @ Get_MemoryOffset_SDA21);
/*80445CCC 00442ACC*/ PPC::Runtime::ASM::stb(context->r0, SkipAddress_20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80445CD0 00442AD0*/ PPC::Runtime::ASM::stbx(context->r0, context->r3, context->r30);
/*80445CD4 00442AD4*/ PPC::Runtime::ASM::bl(fn_80446820);
/*80445CD8 00442AD8*/ PPC::Runtime::ASM::bl(fn_80445CF4);
/*80445CDC 00442ADC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80445CE0 00442AE0*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*80445CE4 00442AE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80445CE8 00442AE8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80445CEC 00442AEC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80445CF0 00442AF0*/ PPC::Runtime::ASM::blr();
}