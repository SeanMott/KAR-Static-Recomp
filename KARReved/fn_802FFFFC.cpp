//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8037B33C.hpp"
#include "fn_8028E058.hpp"
#include "fn_8028E058.hpp"



void fn_802FFFFC(PPC::Runtime::GCContext* context)
{
/*802FFFFC 002FCDFC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80300000 002FCE00*/ PPC::Runtime::ASM::mflr(context->r0);
/*80300004 002FCE04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80300008 002FCE08*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8030000C 002FCE0C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80300010 002FCE10*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 80300014 002FCE14  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80300018 002FCE18*/ PPC::Runtime::ASM::beq(.L_803000A0);
/*8030001C 002FCE1C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804DBC54 @ Get_MemoryOffset_HighBit);
/*80300020 002FCE20*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x310);
/*80300024 002FCE24*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804DBC54 @ Get_MemoryOffset_LowBit);
/*80300028 002FCE28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x364, context->r30));
/*8030002C 002FCE2C*/ PPC::Runtime::ASM::beq(.L_80300070);
/*80300030 002FCE30*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*80300034 002FCE34*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x310);
/*80300038 002FCE38*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*8030003C 002FCE3C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80300040 002FCE40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x310, context->r30));
/*80300044 002FCE44*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*80300048 002FCE48*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x310);
/*8030004C 002FCE4C*/ PPC::Runtime::ASM::beq(.L_80300070);
/*80300050 002FCE50*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*80300054 002FCE54*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x310);
/*80300058 002FCE58*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*8030005C 002FCE5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x310, context->r30));
/*80300060 002FCE60*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x310, context->r30));
/*80300064 002FCE64*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80300068 002FCE68*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8030006C 002FCE6C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80300070, 0x80300070) //this is a jump label
/*80300070 002FCE70*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x4);
/*80300074 002FCE74*/ PPC::Runtime::ASM::beq(.L_80300090);
/*80300078 002FCE78*/ PPC::Runtime::ASM::lis(context->r4, fn_8028E058 @ Get_MemoryOffset_HighBit);
/*8030007C 002FCE7C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x18);
/*80300080 002FCE80*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8028E058 @ Get_MemoryOffset_LowBit);
/*80300084 002FCE84*/ PPC::Runtime::ASM::li(context->r5, 0x4c);
/*80300088 002FCE88*/ PPC::Runtime::ASM::li(context->r6, 0xa);
/*8030008C 002FCE8C*/ PPC::Runtime::ASM::bl(fn___destroy_arr);
RUNTIME_PPC_JUMP_LABEL(.L_80300090, 0x80300090) //this is a jump label
/*80300090 002FCE90*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*80300094 002FCE94*/ PPC::Runtime::ASM::ble(.L_803000A0);
/*80300098 002FCE98*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8030009C 002FCE9C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_803000A0, 0x803000A0) //this is a jump label
/*803000A0 002FCEA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803000A4 002FCEA4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803000A8 002FCEA8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803000AC 002FCEAC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803000B0 002FCEB0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803000B4 002FCEB4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803000B8 002FCEB8*/ PPC::Runtime::ASM::blr();
}