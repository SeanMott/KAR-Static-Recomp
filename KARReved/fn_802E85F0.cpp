//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802E85F0(PPC::Runtime::GCContext* context)
{
/*802E85F0 002E53F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802E85F4 002E53F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802E85F8 002E53F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E85FC 002E53FC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E8600 002E5400*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802E8604 002E5404*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802E8608 002E5408  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802E860C 002E540C*/ PPC::Runtime::ASM::beq(.L_802E8680);
/*802E8610 002E5410*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D7300 @ Get_MemoryOffset_HighBit);
/*802E8614 002E5414*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x24);
/*802E8618 002E5418*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804D7300 @ Get_MemoryOffset_LowBit);
/*802E861C 002E541C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802E8620 002E5420*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x38);
/*802E8624 002E5424*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*802E8628 002E5428*/ PPC::Runtime::ASM::beq(.L_802E8638);
/*802E862C 002E542C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BF3C0 @ Get_MemoryOffset_HighBit);
/*802E8630 002E5430*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BF3C0 @ Get_MemoryOffset_LowBit);
/*802E8634 002E5434*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802E8638, 0x802E8638) //this is a jump label
/*802E8638 002E5438*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802E863C 002E543C*/ PPC::Runtime::ASM::beq(.L_802E8670);
/*802E8640 002E5440*/ PPC::Runtime::ASM::lis(context->r3, FuncPtrList_2 @ Get_MemoryOffset_HighBit);
/*802E8644 002E5444*/ PPC::Runtime::ASM::addi(context->r0, context->r3, FuncPtrList_2 @ Get_MemoryOffset_LowBit);
/*802E8648 002E5448*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802E864C 002E544C*/ PPC::Runtime::ASM::beq(.L_802E8670);
/*802E8650 002E5450*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BF4DC @ Get_MemoryOffset_HighBit);
/*802E8654 002E5454*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802E8658 002E5458*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BF4DC @ Get_MemoryOffset_LowBit);
/*802E865C 002E545C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802E8660 002E5460*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802E8664 002E5464*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802E8668 002E5468*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E866C 002E546C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802E8670, 0x802E8670) //this is a jump label
/*802E8670 002E5470*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802E8674 002E5474*/ PPC::Runtime::ASM::ble(.L_802E8680);
/*802E8678 002E5478*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802E867C 002E547C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802E8680, 0x802E8680) //this is a jump label
/*802E8680 002E5480*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E8684 002E5484*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802E8688 002E5488*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E868C 002E548C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802E8690 002E5490*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802E8694 002E5494*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802E8698 002E5498*/ PPC::Runtime::ASM::blr();
}