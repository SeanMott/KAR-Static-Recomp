//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80234A8C.hpp"



void fn_8023641C(PPC::Runtime::GCContext* context)
{
/*8023641C 0023321C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80236420 00233220*/ PPC::Runtime::ASM::mflr(context->r0);
/*80236424 00233224*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80236428 00233228*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8023642C 0023322C*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80236430 00233230*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80236434 00233234*/ PPC::Runtime::ASM::cmpwi(context->r27, -0x1);
/*80236438 00233238*/ PPC::Runtime::ASM::bne(.L_80236450);
/*8023643C 0023323C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B53BC @ Get_MemoryOffset_HighBit);
/*80236440 00233240*/ PPC::Runtime::ASM::li(context->r3, String_ "eflib." Get_MemoryOffset_SDA21);
/*80236444 00233244*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804B53BC @ Get_MemoryOffset_LowBit);
/*80236448 00233248*/ PPC::Runtime::ASM::li(context->r4, 0x10b);
/*8023644C 0023324C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80236450, 0x80236450) //this is a jump label
/*80236450 00233250*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*80236454 00233254*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80236458 00233258*/ PPC::Runtime::ASM::addi(context->r29, context->r3, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_8023645C, 0x8023645C) //this is a jump label
/*8023645C 0023325C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80236460 00233260*/ PPC::Runtime::ASM::addi(context->r31, context->r29, 0x140);
/*80236464 00233264*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r29));
/*80236468 00233268*/ PPC::Runtime::ASM::addi(context->r30, context->r29, 0xc0);
/*8023646C 0023326C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r29));
/*80236470 00233270*/ PPC::Runtime::ASM::b(.L_802364B0);
RUNTIME_PPC_JUMP_LABEL(.L_80236474, 0x80236474) //this is a jump label
/*80236474 00233274*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80236478 00233278*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8023647C 0023327C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*80236480 00233280*/ PPC::Runtime::ASM::cmpw(context->r0, context->r27);
/*80236484 00233284*/ PPC::Runtime::ASM::bne(.L_80236490);
/*80236488 00233288*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8023648C 0023328C*/ PPC::Runtime::ASM::bl(fn_80234A8C);
RUNTIME_PPC_JUMP_LABEL(.L_80236490, 0x80236490) //this is a jump label
/*80236490 00233290*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80236494 00233294*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80236498 00233298*/ PPC::Runtime::ASM::bne(.L_802364AC);
/*8023649C 0023329C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802364A0 002332A0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802364A4 002332A4*/ PPC::Runtime::ASM::beq(.L_802364B8);
/*802364A8 002332A8*/ PPC::Runtime::ASM::b(.L_802364B0);
RUNTIME_PPC_JUMP_LABEL(.L_802364AC, 0x802364AC) //this is a jump label
/*802364AC 002332AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_802364B0, 0x802364B0) //this is a jump label
/*802364B0 002332B0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802364B4 002332B4*/ PPC::Runtime::ASM::bne(.L_80236474);
RUNTIME_PPC_JUMP_LABEL(.L_802364B8, 0x802364B8) //this is a jump label
/*802364B8 002332B8*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*802364BC 002332BC*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*802364C0 002332C0*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x20);
/*802364C4 002332C4*/ PPC::Runtime::ASM::blt(.L_8023645C);
/*802364C8 002332C8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*802364CC 002332CC*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*802364D0 002332D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802364D4 002332D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802364D8 002332D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802364DC 002332DC*/ PPC::Runtime::ASM::blr();
}