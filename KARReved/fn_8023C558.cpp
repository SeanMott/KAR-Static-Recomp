//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802410D4.hpp"
#include "fn_80234CF0.hpp"
#include "fn_80235008.hpp"
#include "fn_80235008.hpp"
#include "fn_802344DC.hpp"



void fn_8023C558(PPC::Runtime::GCContext* context)
{
/*8023C558 00239358*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8023C55C 0023935C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8023C560 00239360*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8023C564 00239364*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8023C568 00239368*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*8023C56C 0023936C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8023C570 00239370*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8023C574 00239374*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023C578 00239378*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8023C57C 0023937C*/ PPC::Runtime::ASM::bl(fn_802410D4);
/*8023C580 00239380*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8023C584 00239384*/ PPC::Runtime::ASM::bne(.L_8023C590);
/*8023C588 00239388*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8023C58C 0023938C*/ PPC::Runtime::ASM::b(.L_8023C638);
RUNTIME_PPC_JUMP_LABEL(.L_8023C590, 0x8023C590) //this is a jump label
/*8023C590 00239390*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8023C594 00239394*/ PPC::Runtime::ASM::bl(fn_80234CF0);
/*8023C598 00239398*/ PPC::Runtime::ASM::lis(context->r4, 0x68dc);
/*8023C59C 0023939C*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*8023C5A0 002393A0*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x7453);
/*8023C5A4 002393A4*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/* 8023C5A8 002393A8  7C 00 E8 96 */ mulhw context->r0 , context->r0 , context->r29
/*8023C5AC 002393AC*/ PPC::Runtime::ASM::srawi(context->r0, context->r0, 12);
/*8023C5B0 002393B0*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 31);
/*8023C5B4 002393B4*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r4);
/*8023C5B8 002393B8*/ PPC::Runtime::ASM::bl(fn_804328A0);
/* 8023C5BC 002393BC  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*8023C5C0 002393C0*/ PPC::Runtime::ASM::beq(.L_8023C5F8);
/*8023C5C4 002393C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*8023C5C8 002393C8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8023C5CC 002393CC*/ PPC::Runtime::ASM::bne(.L_8023C5DC);
/*8023C5D0 002393D0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8023C5D4 002393D4*/ PPC::Runtime::ASM::bl(fn_80437CD8);
/*8023C5D8 002393D8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8023C5DC, 0x8023C5DC) //this is a jump label
/*8023C5DC 002393DC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8023C5E0 002393E0*/ PPC::Runtime::ASM::beq(.L_8023C5F8);
/*8023C5E4 002393E4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8023C5E8 002393E8*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r31));
/*8023C5EC 002393EC*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 23, 17);
/*8023C5F0 002393F0*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x1000);
/*8023C5F4 002393F4*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8023C5F8, 0x8023C5F8) //this is a jump label
/*8023C5F8 002393F8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8023C5FC 002393FC*/ PPC::Runtime::ASM::beq(.L_8023C634);
/*8023C600 00239400*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B4E08 @ Get_MemoryOffset_HighBit);
/*8023C604 00239404*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8023C608 00239408*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804B4E08 @ Get_MemoryOffset_LowBit);
/*8023C60C 0023940C*/ PPC::Runtime::ASM::bl(fn_8042BA60);
/*8023C610 00239410*/ PPC::Runtime::ASM::lis(context->r4, fn_80235008 @ Get_MemoryOffset_HighBit);
/*8023C614 00239414*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8023C618 00239418*/ PPC::Runtime::ASM::addi(context->r0, context->r4, fn_80235008 @ Get_MemoryOffset_LowBit);
/*8023C61C 0023941C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8023C620 00239420*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*8023C624 00239424*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*8023C628 00239428*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8023C62C 0023942C*/ PPC::Runtime::ASM::bl(fn_802344DC);
/*8023C630 00239430*/ PPC::Runtime::ASM::b(.L_8023C638);
RUNTIME_PPC_JUMP_LABEL(.L_8023C634, 0x8023C634) //this is a jump label
/*8023C634 00239434*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8023C638, 0x8023C638) //this is a jump label
/*8023C638 00239438*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8023C63C 0023943C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8023C640 00239440*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8023C644 00239444*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023C648 00239448*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8023C64C 0023944C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8023C650 00239450*/ PPC::Runtime::ASM::blr();
}