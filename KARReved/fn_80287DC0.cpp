//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80287DC0(PPC::Runtime::GCContext* context)
{
/*80287DC0 00284BC0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80287DC4 00284BC4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80287DC8 00284BC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80287DCC 00284BCC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80287DD0 00284BD0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80287DD4 00284BD4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 80287DD8 00284BD8  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80287DDC 00284BDC*/ PPC::Runtime::ASM::beq(.L_80287E1C);
/*80287DE0 00284BE0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC200 @ Get_MemoryOffset_HighBit);
/*80287DE4 00284BE4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC200 @ Get_MemoryOffset_LowBit);
/*80287DE8 00284BE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80287DEC 00284BEC*/ PPC::Runtime::ASM::beq(.L_80287E0C);
/*80287DF0 00284BF0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC1D8 @ Get_MemoryOffset_HighBit);
/*80287DF4 00284BF4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC1D8 @ Get_MemoryOffset_LowBit);
/*80287DF8 00284BF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80287DFC 00284BFC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80287E00 00284C00*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80287E04 00284C04*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80287E08 00284C08*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80287E0C, 0x80287E0C) //this is a jump label
/*80287E0C 00284C0C*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*80287E10 00284C10*/ PPC::Runtime::ASM::ble(.L_80287E1C);
/*80287E14 00284C14*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80287E18 00284C18*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80287E1C, 0x80287E1C) //this is a jump label
/*80287E1C 00284C1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80287E20 00284C20*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80287E24 00284C24*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80287E28 00284C28*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80287E2C 00284C2C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80287E30 00284C30*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80287E34 00284C34*/ PPC::Runtime::ASM::blr();
}