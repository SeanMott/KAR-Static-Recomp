//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8037B33C.hpp"
#include "fn_803792B8.hpp"
#include "fn_802EFFB8.hpp"



void fn_802FD5B0(PPC::Runtime::GCContext* context)
{
/*802FD5B0 002FA3B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802FD5B4 002FA3B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802FD5B8 002FA3B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FD5BC 002FA3BC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802FD5C0 002FA3C0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802FD5C4 002FA3C4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802FD5C8 002FA3C8  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802FD5CC 002FA3CC*/ PPC::Runtime::ASM::beq(.L_802FD750);
/*802FD5D0 002FA3D0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D9BAC @ Get_MemoryOffset_HighBit);
/*802FD5D4 002FA3D4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x78);
/*802FD5D8 002FA3D8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804D9BAC @ Get_MemoryOffset_LowBit);
/*802FD5DC 002FA3DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FD5E0 002FA3E0*/ PPC::Runtime::ASM::beq(.L_802FD624);
/*802FD5E4 002FA3E4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*802FD5E8 002FA3E8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x78);
/*802FD5EC 002FA3EC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*802FD5F0 002FA3F0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802FD5F4 002FA3F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r30));
/*802FD5F8 002FA3F8*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*802FD5FC 002FA3FC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x78);
/*802FD600 002FA400*/ PPC::Runtime::ASM::beq(.L_802FD624);
/*802FD604 002FA404*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*802FD608 002FA408*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x78);
/*802FD60C 002FA40C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*802FD610 002FA410*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r30));
/*802FD614 002FA414*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r30));
/*802FD618 002FA418*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802FD61C 002FA41C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FD620 002FA420*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802FD624, 0x802FD624) //this is a jump label
/*802FD624 002FA424*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FD628 002FA428*/ PPC::Runtime::ASM::beq(.L_802FD740);
/*802FD62C 002FA42C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D9A90 @ Get_MemoryOffset_HighBit);
/*802FD630 002FA430*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3c);
/*802FD634 002FA434*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804D9A90 @ Get_MemoryOffset_LowBit);
/*802FD638 002FA438*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FD63C 002FA43C*/ PPC::Runtime::ASM::beq(.L_802FD688);
/*802FD640 002FA440*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE104 @ Get_MemoryOffset_HighBit);
/*802FD644 002FA444*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BE104 @ Get_MemoryOffset_LowBit);
/*802FD648 002FA448*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*802FD64C 002FA44C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r30));
/*802FD650 002FA450*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*802FD654 002FA454*/ PPC::Runtime::ASM::beq(.L_802FD660);
/*802FD658 002FA458*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FD65C 002FA45C*/ PPC::Runtime::ASM::bl(fn_803792B8);
RUNTIME_PPC_JUMP_LABEL(.L_802FD660, 0x802FD660) //this is a jump label
/*802FD660 002FA460*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3c);
/*802FD664 002FA464*/ PPC::Runtime::ASM::beq(.L_802FD688);
/*802FD668 002FA468*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE0C4 @ Get_MemoryOffset_HighBit);
/*802FD66C 002FA46C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3c);
/*802FD670 002FA470*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE0C4 @ Get_MemoryOffset_LowBit);
/*802FD674 002FA474*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*802FD678 002FA478*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*802FD67C 002FA47C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802FD680 002FA480*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FD684 002FA484*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802FD688, 0x802FD688) //this is a jump label
/*802FD688 002FA488*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FD68C 002FA48C*/ PPC::Runtime::ASM::beq(.L_802FD740);
/*802FD690 002FA490*/ PPC::Runtime::ASM::lis(context->r3, lbl_804DA158 @ Get_MemoryOffset_HighBit);
/*802FD694 002FA494*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804DA158 @ Get_MemoryOffset_LowBit);
/*802FD698 002FA498*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FD69C 002FA49C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802FD6A0 002FA4A0*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f8, context->r3));
/*802FD6A4 002FA4A4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*802FD6A8 002FA4A8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FD6AC 002FA4AC*/ PPC::Runtime::ASM::bctrl();
/*802FD6B0 002FA4B0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802FD6B4 002FA4B4*/ PPC::Runtime::ASM::beq(.L_802FD700);
/*802FD6B8 002FA4B8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F54B8 @ Get_MemoryOffset_HighBit);
/*802FD6BC 002FA4BC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802FD6C0 002FA4C0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F54B8 @ Get_MemoryOffset_LowBit);
/*802FD6C4 002FA4C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FD6C8 002FA4C8*/ PPC::Runtime::ASM::beq(.L_802FD700);
/*802FD6CC 002FA4CC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD6A0 @ Get_MemoryOffset_HighBit);
/*802FD6D0 002FA4D0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802FD6D4 002FA4D4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BD6A0 @ Get_MemoryOffset_LowBit);
/*802FD6D8 002FA4D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FD6DC 002FA4DC*/ PPC::Runtime::ASM::beq(.L_802FD700);
/*802FD6E0 002FA4E0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD658 @ Get_MemoryOffset_HighBit);
/*802FD6E4 002FA4E4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*802FD6E8 002FA4E8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD658 @ Get_MemoryOffset_LowBit);
/*802FD6EC 002FA4EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FD6F0 002FA4F0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FD6F4 002FA4F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802FD6F8 002FA4F8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FD6FC 002FA4FC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802FD700, 0x802FD700) //this is a jump label
/*802FD700 002FA500*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FD704 002FA504*/ PPC::Runtime::ASM::beq(.L_802FD740);
/*802FD708 002FA508*/ PPC::Runtime::ASM::lis(context->r4, lbl_804D6F5C @ Get_MemoryOffset_HighBit);
/*802FD70C 002FA50C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D8F18 @ Get_MemoryOffset_HighBit);
/*802FD710 002FA510*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804D6F5C @ Get_MemoryOffset_LowBit);
/*802FD714 002FA514*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802FD718 002FA518*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FD71C 002FA51C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804D8F18 @ Get_MemoryOffset_LowBit);
/*802FD720 002FA520*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802FD724 002FA524*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r3));
/*802FD728 002FA528*/ PPC::Runtime::ASM::bl(fn_802EFFB8);
/*802FD72C 002FA52C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FD730 002FA530*/ PPC::Runtime::ASM::beq(.L_802FD740);
/*802FD734 002FA534*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D1A98 @ Get_MemoryOffset_HighBit);
/*802FD738 002FA538*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804D1A98 @ Get_MemoryOffset_LowBit);
/*802FD73C 002FA53C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802FD740, 0x802FD740) //this is a jump label
/*802FD740 002FA540*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802FD744 002FA544*/ PPC::Runtime::ASM::ble(.L_802FD750);
/*802FD748 002FA548*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802FD74C 002FA54C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802FD750, 0x802FD750) //this is a jump label
/*802FD750 002FA550*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FD754 002FA554*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802FD758 002FA558*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802FD75C 002FA55C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802FD760 002FA560*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802FD764 002FA564*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802FD768 002FA568*/ PPC::Runtime::ASM::blr();
}