//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80298F80(PPC::Runtime::GCContext* context)
{
/*80298F80 00295D80*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80298F84 00295D84*/ PPC::Runtime::ASM::mflr(context->r0);
/*80298F88 00295D88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80298F8C 00295D8C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 80298F90 00295D90  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80298F94 00295D94*/ PPC::Runtime::ASM::beq(.L_80298FC4);
/*80298F98 00295D98*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BEB2C @ Get_MemoryOffset_HighBit);
/*80298F9C 00295D9C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BEB2C @ Get_MemoryOffset_LowBit);
/*80298FA0 00295DA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80298FA4 00295DA4*/ PPC::Runtime::ASM::beq(.L_80298FB4);
/*80298FA8 00295DA8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F1134 @ Get_MemoryOffset_HighBit);
/*80298FAC 00295DAC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F1134 @ Get_MemoryOffset_LowBit);
/*80298FB0 00295DB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80298FB4, 0x80298FB4) //this is a jump label
/*80298FB4 00295DB4*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*80298FB8 00295DB8*/ PPC::Runtime::ASM::ble(.L_80298FC4);
/*80298FBC 00295DBC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80298FC0 00295DC0*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80298FC4, 0x80298FC4) //this is a jump label
/*80298FC4 00295DC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80298FC8 00295DC8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80298FCC 00295DCC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80298FD0 00295DD0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80298FD4 00295DD4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80298FD8 00295DD8*/ PPC::Runtime::ASM::blr();
}