//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80293614(PPC::Runtime::GCContext* context)
{
/*80293614 00290414*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80293618 00290418*/ PPC::Runtime::ASM::mflr(context->r0);
/*8029361C 0029041C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80293620 00290420*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80293624 00290424*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80293628 00290428*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 8029362C 0029042C  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80293630 00290430*/ PPC::Runtime::ASM::beq(.L_802936D0);
/*80293634 00290434*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDC70 @ Get_MemoryOffset_HighBit);
/*80293638 00290438*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x18);
/*8029363C 0029043C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDC70 @ Get_MemoryOffset_LowBit);
/*80293640 00290440*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80293644 00290444*/ PPC::Runtime::ASM::beq(.L_80293698);
/*80293648 00290448*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDBE8 @ Get_MemoryOffset_HighBit);
/*8029364C 0029044C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x2c);
/*80293650 00290450*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BDBE8 @ Get_MemoryOffset_LowBit);
/*80293654 00290454*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*80293658 00290458*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x28);
/*8029365C 0029045C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*80293660 00290460*/ PPC::Runtime::ASM::beq(.L_80293684);
/*80293664 00290464*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDBC0 @ Get_MemoryOffset_HighBit);
/*80293668 00290468*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2c);
/*8029366C 0029046C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDBC0 @ Get_MemoryOffset_LowBit);
/*80293670 00290470*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*80293674 00290474*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*80293678 00290478*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*8029367C 0029047C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80293680 00290480*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80293684, 0x80293684) //this is a jump label
/*80293684 00290484*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x18);
/*80293688 00290488*/ PPC::Runtime::ASM::beq(.L_80293698);
/*8029368C 0029048C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDB74 @ Get_MemoryOffset_HighBit);
/*80293690 00290490*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDB74 @ Get_MemoryOffset_LowBit);
/*80293694 00290494*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80293698, 0x80293698) //this is a jump label
/*80293698 00290498*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8029369C 0029049C*/ PPC::Runtime::ASM::beq(.L_802936C0);
/*802936A0 002904A0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDB4C @ Get_MemoryOffset_HighBit);
/*802936A4 002904A4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802936A8 002904A8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDB4C @ Get_MemoryOffset_LowBit);
/*802936AC 002904AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802936B0 002904B0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802936B4 002904B4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802936B8 002904B8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802936BC 002904BC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802936C0, 0x802936C0) //this is a jump label
/*802936C0 002904C0*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802936C4 002904C4*/ PPC::Runtime::ASM::ble(.L_802936D0);
/*802936C8 002904C8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802936CC 002904CC*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802936D0, 0x802936D0) //this is a jump label
/*802936D0 002904D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802936D4 002904D4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802936D8 002904D8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802936DC 002904DC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802936E0 002904E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802936E4 002904E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802936E8 002904E8*/ PPC::Runtime::ASM::blr();
}