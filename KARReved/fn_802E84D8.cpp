//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802E84D8(PPC::Runtime::GCContext* context)
{
/*802E84D8 002E52D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802E84DC 002E52DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802E84E0 002E52E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E84E4 002E52E4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E84E8 002E52E8*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802E84EC 002E52EC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802E84F0 002E52F0  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802E84F4 002E52F4*/ PPC::Runtime::ASM::beq(.L_802E8568);
/*802E84F8 002E52F8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D7260 @ Get_MemoryOffset_HighBit);
/*802E84FC 002E52FC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x24);
/*802E8500 002E5300*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804D7260 @ Get_MemoryOffset_LowBit);
/*802E8504 002E5304*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802E8508 002E5308*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x38);
/*802E850C 002E530C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*802E8510 002E5310*/ PPC::Runtime::ASM::beq(.L_802E8520);
/*802E8514 002E5314*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BF3C0 @ Get_MemoryOffset_HighBit);
/*802E8518 002E5318*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BF3C0 @ Get_MemoryOffset_LowBit);
/*802E851C 002E531C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802E8520, 0x802E8520) //this is a jump label
/*802E8520 002E5320*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802E8524 002E5324*/ PPC::Runtime::ASM::beq(.L_802E8558);
/*802E8528 002E5328*/ PPC::Runtime::ASM::lis(context->r3, FuncPtrList_2 @ Get_MemoryOffset_HighBit);
/*802E852C 002E532C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, FuncPtrList_2 @ Get_MemoryOffset_LowBit);
/*802E8530 002E5330*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802E8534 002E5334*/ PPC::Runtime::ASM::beq(.L_802E8558);
/*802E8538 002E5338*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BF4DC @ Get_MemoryOffset_HighBit);
/*802E853C 002E533C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802E8540 002E5340*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BF4DC @ Get_MemoryOffset_LowBit);
/*802E8544 002E5344*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802E8548 002E5348*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802E854C 002E534C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802E8550 002E5350*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E8554 002E5354*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802E8558, 0x802E8558) //this is a jump label
/*802E8558 002E5358*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802E855C 002E535C*/ PPC::Runtime::ASM::ble(.L_802E8568);
/*802E8560 002E5360*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802E8564 002E5364*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802E8568, 0x802E8568) //this is a jump label
/*802E8568 002E5368*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E856C 002E536C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802E8570 002E5370*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E8574 002E5374*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802E8578 002E5378*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802E857C 002E537C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802E8580 002E5380*/ PPC::Runtime::ASM::blr();
}