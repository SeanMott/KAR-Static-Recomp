//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80297F44(PPC::Runtime::GCContext* context)
{
/*80297F44 00294D44*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80297F48 00294D48*/ PPC::Runtime::ASM::mflr(context->r0);
/*80297F4C 00294D4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80297F50 00294D50*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80297F54 00294D54*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80297F58 00294D58*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 80297F5C 00294D5C  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80297F60 00294D60*/ PPC::Runtime::ASM::beq(.L_80297FCC);
/*80297F64 00294D64*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BF0BC @ Get_MemoryOffset_HighBit);
/*80297F68 00294D68*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xc);
/*80297F6C 00294D6C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BF0BC @ Get_MemoryOffset_LowBit);
/*80297F70 00294D70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80297F74 00294D74*/ PPC::Runtime::ASM::beq(.L_80297F94);
/*80297F78 00294D78*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F4E38 @ Get_MemoryOffset_HighBit);
/*80297F7C 00294D7C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F4E38 @ Get_MemoryOffset_LowBit);
/*80297F80 00294D80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*80297F84 00294D84*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80297F88 00294D88*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80297F8C 00294D8C*/ PPC::Runtime::ASM::beq(.L_80297F94);
/*80297F90 00294D90*/ PPC::Runtime::ASM::bl(fn_HSD_JObjUnref);
RUNTIME_PPC_JUMP_LABEL(.L_80297F94, 0x80297F94) //this is a jump label
/*80297F94 00294D94*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80297F98 00294D98*/ PPC::Runtime::ASM::beq(.L_80297FBC);
/*80297F9C 00294D9C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BF078 @ Get_MemoryOffset_HighBit);
/*80297FA0 00294DA0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80297FA4 00294DA4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BF078 @ Get_MemoryOffset_LowBit);
/*80297FA8 00294DA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80297FAC 00294DAC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80297FB0 00294DB0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80297FB4 00294DB4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80297FB8 00294DB8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80297FBC, 0x80297FBC) //this is a jump label
/*80297FBC 00294DBC*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*80297FC0 00294DC0*/ PPC::Runtime::ASM::ble(.L_80297FCC);
/*80297FC4 00294DC4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80297FC8 00294DC8*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_80297FCC, 0x80297FCC) //this is a jump label
/*80297FCC 00294DCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80297FD0 00294DD0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80297FD4 00294DD4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80297FD8 00294DD8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80297FDC 00294DDC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80297FE0 00294DE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80297FE4 00294DE4*/ PPC::Runtime::ASM::blr();
}