//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802980B4(PPC::Runtime::GCContext* context)
{
/*802980B4 00294EB4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802980B8 00294EB8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802980BC 00294EBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802980C0 00294EC0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802980C4 00294EC4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802980C8 00294EC8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802980CC 00294ECC  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802980D0 00294ED0*/ PPC::Runtime::ASM::beq(.L_80298110);
/*802980D4 00294ED4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BF034 @ Get_MemoryOffset_HighBit);
/*802980D8 00294ED8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BF034 @ Get_MemoryOffset_LowBit);
/*802980DC 00294EDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802980E0 00294EE0*/ PPC::Runtime::ASM::beq(.L_80298100);
/*802980E4 00294EE4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BEFE4 @ Get_MemoryOffset_HighBit);
/*802980E8 00294EE8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BEFE4 @ Get_MemoryOffset_LowBit);
/*802980EC 00294EEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802980F0 00294EF0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802980F4 00294EF4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802980F8 00294EF8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802980FC 00294EFC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80298100, 0x80298100) //this is a jump label
/*80298100 00294F00*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*80298104 00294F04*/ PPC::Runtime::ASM::ble(.L_80298110);
/*80298108 00294F08*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8029810C 00294F0C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80298110, 0x80298110) //this is a jump label
/*80298110 00294F10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80298114 00294F14*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80298118 00294F18*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8029811C 00294F1C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80298120 00294F20*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80298124 00294F24*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80298128 00294F28*/ PPC::Runtime::ASM::blr();
}