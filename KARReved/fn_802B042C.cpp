//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802B042C(PPC::Runtime::GCContext* context)
{
/*802B042C 002AD22C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802B0430 002AD230*/ PPC::Runtime::ASM::mflr(context->r0);
/*802B0434 002AD234*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802B0438 002AD238*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802B043C 002AD23C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802B0440 002AD240*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802B0444 002AD244*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802B0448 002AD248*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802B044C 002AD24C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802B0450 002AD250*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802B0454 002AD254*/ PPC::Runtime::ASM::cmplw(context->r31, context->r0);
/*802B0458 002AD258*/ PPC::Runtime::ASM::ble(.L_802B0578);
/*802B045C 002AD25C*/ PPC::Runtime::ASM::lis(context->r3, 0x4000);
/*802B0460 002AD260*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*802B0464 002AD264*/ PPC::Runtime::ASM::cmplw(context->r31, context->r0);
/*802B0468 002AD268*/ PPC::Runtime::ASM::ble(.L_802B048C);
/*802B046C 002AD26C*/ PPC::Runtime::ASM::lis(context->r4, __files @ Get_MemoryOffset_HighBit);
/*802B0470 002AD270*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C4AB0 @ Get_MemoryOffset_HighBit);
/*802B0474 002AD274*/ PPC::Runtime::ASM::addi(context->r5, context->r4, __files @ Get_MemoryOffset_LowBit);
/*802B0478 002AD278*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804C4AB0 @ Get_MemoryOffset_LowBit);
/*802B047C 002AD27C*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xa0);
/*802B0480 002AD280*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802B0484 002AD284*/ PPC::Runtime::ASM::bl(fn_fprintf);
/*802B0488 002AD288*/ PPC::Runtime::ASM::bl(fn_abort);
RUNTIME_PPC_JUMP_LABEL(.L_802B048C, 0x802B048C) //this is a jump label
/*802B048C 002AD28C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802B0490 002AD290*/ PPC::Runtime::ASM::slwi(context->r3, context->r31, 2);
/*802B0494 002AD294*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 802B0498 002AD298  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*802B049C 002AD29C*/ PPC::Runtime::ASM::bne(.L_802B04C0);
/*802B04A0 002AD2A0*/ PPC::Runtime::ASM::lis(context->r4, __files @ Get_MemoryOffset_HighBit);
/*802B04A4 002AD2A4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C4A94 @ Get_MemoryOffset_HighBit);
/*802B04A8 002AD2A8*/ PPC::Runtime::ASM::addi(context->r5, context->r4, __files @ Get_MemoryOffset_LowBit);
/*802B04AC 002AD2AC*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804C4A94 @ Get_MemoryOffset_LowBit);
/*802B04B0 002AD2B0*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xa0);
/*802B04B4 002AD2B4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802B04B8 002AD2B8*/ PPC::Runtime::ASM::bl(fn_fprintf);
/*802B04BC 002AD2BC*/ PPC::Runtime::ASM::bl(fn_abort);
RUNTIME_PPC_JUMP_LABEL(.L_802B04C0, 0x802B04C0) //this is a jump label
/*802B04C0 002AD2C0*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*802B04C4 002AD2C4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802B04C8 002AD2C8*/ PPC::Runtime::ASM::beq(.L_802B0574);
/*802B04CC 002AD2CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802B04D0 002AD2D0*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*802B04D4 002AD2D4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802B04D8 002AD2D8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*802B04DC 002AD2DC*/ PPC::Runtime::ASM::add(context->r4, context->r28, context->r0);
/*802B04E0 002AD2E0*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x3);
/*802B04E4 002AD2E4*/ PPC::Runtime::ASM::subf(context->r3, context->r28, context->r3);
/*802B04E8 002AD2E8*/ PPC::Runtime::ASM::cmplw(context->r28, context->r4);
/*802B04EC 002AD2EC*/ PPC::Runtime::ASM::srwi(context->r3, context->r3, 2);
/*802B04F0 002AD2F0*/ PPC::Runtime::ASM::bge(.L_802B056C);
/* 802B04F4 002AD2F4  54 60 E8 FF */ srwi. context->r0 , context->r3 , 3
/*802B04F8 002AD2F8*/ PPC::Runtime::ASM::mtctr(context->r0);
/*802B04FC 002AD2FC*/ PPC::Runtime::ASM::beq(.L_802B0554);
RUNTIME_PPC_JUMP_LABEL(.L_802B0500, 0x802B0500) //this is a jump label
/*802B0500 002AD300*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*802B0504 002AD304*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*802B0508 002AD308*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*802B050C 002AD30C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*802B0510 002AD310*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*802B0514 002AD314*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*802B0518 002AD318*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*802B051C 002AD31C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*802B0520 002AD320*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r5));
/*802B0524 002AD324*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*802B0528 002AD328*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r5));
/*802B052C 002AD32C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r6));
/*802B0530 002AD330*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r5));
/*802B0534 002AD334*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r6));
/*802B0538 002AD338*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r5));
/*802B053C 002AD33C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x20);
/*802B0540 002AD340*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r6));
/*802B0544 002AD344*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x20);
/*802B0548 002AD348*/ PPC::Runtime::ASM::bdnz(.L_802B0500);
/*802B054C 002AD34C*/ PPC::Runtime::ASM::andi.(context->r3, context->r3, 0x7);
/*802B0550 002AD350*/ PPC::Runtime::ASM::beq(.L_802B056C);
RUNTIME_PPC_JUMP_LABEL(.L_802B0554, 0x802B0554) //this is a jump label
/*802B0554 002AD354*/ PPC::Runtime::ASM::mtctr(context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_802B0558, 0x802B0558) //this is a jump label
/*802B0558 002AD358*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*802B055C 002AD35C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4);
/*802B0560 002AD360*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*802B0564 002AD364*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x4);
/*802B0568 002AD368*/ PPC::Runtime::ASM::bdnz(.L_802B0558);
RUNTIME_PPC_JUMP_LABEL(.L_802B056C, 0x802B056C) //this is a jump label
/*802B056C 002AD36C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*802B0570 002AD370*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802B0574, 0x802B0574) //this is a jump label
/*802B0574 002AD374*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802B0578, 0x802B0578) //this is a jump label
/*802B0578 002AD378*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802B057C 002AD37C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802B0580 002AD380*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802B0584 002AD384*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802B0588 002AD388*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802B058C 002AD38C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802B0590 002AD390*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802B0594 002AD394*/ PPC::Runtime::ASM::blr();
}