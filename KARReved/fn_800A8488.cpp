//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8007D440.hpp"
#include "fn_800E7F74.hpp"
#include "fn_8007D440.hpp"
#include "fn_800E7F74.hpp"
#include "fn_800E7F74.hpp"



void fn_800A8488(PPC::Runtime::GCContext* context)
{
/*800A8488 000A5288*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800A848C 000A528C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800A8490 000A5290*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800A8494 000A5294*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800A8498 000A5298*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800A849C 000A529C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800A84A0 000A52A0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800A84A4 000A52A4*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800A84A8 000A52A8*/ PPC::Runtime::ASM::bl(fn_8007D440);
/*800A84AC 000A52AC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 26, 26);
/*800A84B0 000A52B0*/ PPC::Runtime::ASM::beq(.L_800A8674);
/*800A84B4 000A52B4*/ PPC::Runtime::ASM::lis(context->r4, lbl_80553E50 @ Get_MemoryOffset_HighBit);
/*800A84B8 000A52B8*/ PPC::Runtime::ASM::lis(context->r3, lbl_80556E08 @ Get_MemoryOffset_HighBit);
/*800A84BC 000A52BC*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_80553E50 @ Get_MemoryOffset_LowBit);
/*800A84C0 000A52C0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f1c, context->r31));
/*800A84C4 000A52C4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80556E08 @ Get_MemoryOffset_LowBit);
/*800A84C8 000A52C8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f18, context->r31));
/*800A84CC 000A52CC*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 2);
/*800A84D0 000A52D0*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*800A84D4 000A52D4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*800A84D8 000A52D8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f18, context->r31));
/*800A84DC 000A52DC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800A84E0 000A52E0*/ PPC::Runtime::ASM::beq(.L_800A85C0);
/*800A84E4 000A52E4*/ PPC::Runtime::ASM::bge(.L_800A84F8);
/*800A84E8 000A52E8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800A84EC 000A52EC*/ PPC::Runtime::ASM::beq(.L_800A8508);
/*800A84F0 000A52F0*/ PPC::Runtime::ASM::bge(.L_800A8548);
/*800A84F4 000A52F4*/ PPC::Runtime::ASM::b(.L_800A8650);
RUNTIME_PPC_JUMP_LABEL(.L_800A84F8, 0x800A84F8) //this is a jump label
/*800A84F8 000A52F8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*800A84FC 000A52FC*/ PPC::Runtime::ASM::beq(.L_800A8640);
/*800A8500 000A5300*/ PPC::Runtime::ASM::bge(.L_800A8650);
/*800A8504 000A5304*/ PPC::Runtime::ASM::b(.L_800A85EC);
RUNTIME_PPC_JUMP_LABEL(.L_800A8508, 0x800A8508) //this is a jump label
/*800A8508 000A5308*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f20, context->r31));
/*800A850C 000A530C*/ PPC::Runtime::ASM::lis(context->r3, StructWithFuncPtrs_24_GravityAndAirFlowFuncPtrs @ Get_MemoryOffset_HighBit);
/*800A8510 000A5310*/ PPC::Runtime::ASM::addi(context->r3, context->r3, StructWithFuncPtrs_24_GravityAndAirFlowFuncPtrs @ Get_MemoryOffset_LowBit);
/*800A8514 000A5314*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x14);
/*800A8518 000A5318*/ PPC::Runtime::ASM::lwzx(context->r12, context->r3, context->r0);
/*800A851C 000A531C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*800A8520 000A5320*/ PPC::Runtime::ASM::bctrl();
/*800A8524 000A5324*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f18, context->r31));
/*800A8528 000A5328*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*800A852C 000A532C*/ PPC::Runtime::ASM::blt(.L_800A8650);
/*800A8530 000A5330*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f1c, context->r31));
/*800A8534 000A5334*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800A8538 000A5338*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f18, context->r31));
/*800A853C 000A533C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800A8540 000A5340*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f1c, context->r31));
/*800A8544 000A5344*/ PPC::Runtime::ASM::b(.L_800A8650);
RUNTIME_PPC_JUMP_LABEL(.L_800A8548, 0x800A8548) //this is a jump label
/*800A8548 000A5348*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f20, context->r31));
/*800A854C 000A534C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A8550 000A5350*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800A8554 000A5354*/ PPC::Runtime::ASM::beq(.L_800A8580);
/*800A8558 000A5358*/ PPC::Runtime::ASM::bge(.L_800A8598);
/*800A855C 000A535C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800A8560 000A5360*/ PPC::Runtime::ASM::bge(.L_800A8568);
/*800A8564 000A5364*/ PPC::Runtime::ASM::b(.L_800A8598);
RUNTIME_PPC_JUMP_LABEL(.L_800A8568, 0x800A8568) //this is a jump label
/*800A8568 000A5368*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800A856C 000A536C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800A8570 000A5370*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800A8574 000A5374*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800A8578 000A5378*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800A857C 000A537C*/ PPC::Runtime::ASM::b(.L_800A859C);
RUNTIME_PPC_JUMP_LABEL(.L_800A8580, 0x800A8580) //this is a jump label
/*800A8580 000A5380*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800A8584 000A5384*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800A8588 000A5388*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800A858C 000A538C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800A8590 000A5390*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800A8594 000A5394*/ PPC::Runtime::ASM::b(.L_800A859C);
RUNTIME_PPC_JUMP_LABEL(.L_800A8598, 0x800A8598) //this is a jump label
/*800A8598 000A5398*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800A859C, 0x800A859C) //this is a jump label
/*800A859C 000A539C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f18, context->r31));
/*800A85A0 000A53A0*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*800A85A4 000A53A4*/ PPC::Runtime::ASM::blt(.L_800A8650);
/*800A85A8 000A53A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f1c, context->r31));
/*800A85AC 000A53AC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800A85B0 000A53B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f18, context->r31));
/*800A85B4 000A53B4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800A85B8 000A53B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f1c, context->r31));
/*800A85BC 000A53BC*/ PPC::Runtime::ASM::b(.L_800A8650);
RUNTIME_PPC_JUMP_LABEL(.L_800A85C0, 0x800A85C0) //this is a jump label
/*800A85C0 000A53C0*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180556DE0 @ Get_MemoryOffset_HighBit);
/*800A85C4 000A53C4*/ PPC::Runtime::ASM::slwi(context->r0, context->r5, 2);
/*800A85C8 000A53C8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_180556DE0 @ Get_MemoryOffset_LowBit);
/*800A85CC 000A53CC*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*800A85D0 000A53D0*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800A85D4 000A53D4*/ PPC::Runtime::ASM::bne(.L_800A8650);
/*800A85D8 000A53D8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*800A85DC 000A53DC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A85E0 000A53E0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f18, context->r31));
/*800A85E4 000A53E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f1c, context->r31));
/*800A85E8 000A53E8*/ PPC::Runtime::ASM::b(.L_800A8650);
RUNTIME_PPC_JUMP_LABEL(.L_800A85EC, 0x800A85EC) //this is a jump label
/*800A85EC 000A53EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f20, context->r31));
/*800A85F0 000A53F0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800A85F4 000A53F4*/ PPC::Runtime::ASM::beq(.L_800A8610);
/*800A85F8 000A53F8*/ PPC::Runtime::ASM::bge(.L_800A8618);
/*800A85FC 000A53FC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800A8600 000A5400*/ PPC::Runtime::ASM::bge(.L_800A8608);
/*800A8604 000A5404*/ PPC::Runtime::ASM::b(.L_800A8618);
RUNTIME_PPC_JUMP_LABEL(.L_800A8608, 0x800A8608) //this is a jump label
/*800A8608 000A5408*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A860C 000A540C*/ PPC::Runtime::ASM::b(.L_800A861C);
RUNTIME_PPC_JUMP_LABEL(.L_800A8610, 0x800A8610) //this is a jump label
/*800A8610 000A5410*/ PPC::Runtime::ASM::bl(fn_800E7F74);
/*800A8614 000A5414*/ PPC::Runtime::ASM::b(.L_800A861C);
RUNTIME_PPC_JUMP_LABEL(.L_800A8618, 0x800A8618) //this is a jump label
/*800A8618 000A5418*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800A861C, 0x800A861C) //this is a jump label
/*800A861C 000A541C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f18, context->r31));
/*800A8620 000A5420*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*800A8624 000A5424*/ PPC::Runtime::ASM::blt(.L_800A8650);
/*800A8628 000A5428*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f1c, context->r31));
/*800A862C 000A542C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800A8630 000A5430*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f18, context->r31));
/*800A8634 000A5434*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800A8638 000A5438*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f1c, context->r31));
/*800A863C 000A543C*/ PPC::Runtime::ASM::b(.L_800A8650);
RUNTIME_PPC_JUMP_LABEL(.L_800A8640, 0x800A8640) //this is a jump label
/*800A8640 000A5440*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*800A8644 000A5444*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A8648 000A5448*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f18, context->r31));
/*800A864C 000A544C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f1c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800A8650, 0x800A8650) //this is a jump label
/*800A8650 000A5450*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f1c, context->r31));
/*800A8654 000A5454*/ PPC::Runtime::ASM::lis(context->r3, lbl_80556E08 @ Get_MemoryOffset_HighBit);
/*800A8658 000A5458*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80556E08 @ Get_MemoryOffset_LowBit);
/*800A865C 000A545C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800A8660 000A5460*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*800A8664 000A5464*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x5);
/*800A8668 000A5468*/ PPC::Runtime::ASM::bne(.L_800A8674);
/*800A866C 000A546C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800A8670 000A5470*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f1c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800A8674, 0x800A8674) //this is a jump label
/*800A8674 000A5474*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800A8678 000A5478*/ PPC::Runtime::ASM::bl(fn_8007D440);
/*800A867C 000A547C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 25, 25);
/*800A8680 000A5480*/ PPC::Runtime::ASM::beq(.L_800A86BC);
/*800A8684 000A5484*/ PPC::Runtime::ASM::lis(context->r3, lbl_80553E50 @ Get_MemoryOffset_HighBit);
/*800A8688 000A5488*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_80553E50 @ Get_MemoryOffset_LowBit);
/*800A868C 000A548C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f20, context->r4));
/*800A8690 000A5490*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800A8694 000A5494*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800A8698 000A5498*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f20, context->r4));
/*800A869C 000A549C*/ PPC::Runtime::ASM::blt(.L_800A86A8);
/*800A86A0 000A54A0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800A86A4 000A54A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f20, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_800A86A8, 0x800A86A8) //this is a jump label
/*800A86A8 000A54A8*/ PPC::Runtime::ASM::lis(context->r3, lbl_80553E50 @ Get_MemoryOffset_HighBit);
/*800A86AC 000A54AC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800A86B0 000A54B0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80553E50 @ Get_MemoryOffset_LowBit);
/*800A86B4 000A54B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f18, context->r3));
/*800A86B8 000A54B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f1c, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800A86BC, 0x800A86BC) //this is a jump label
/*800A86BC 000A54BC*/ PPC::Runtime::ASM::lis(context->r3, lbl_80553E50 @ Get_MemoryOffset_HighBit);
/*800A86C0 000A54C0*/ PPC::Runtime::ASM::li(context->r10, 0x0);
/*800A86C4 000A54C4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80553E50 @ Get_MemoryOffset_LowBit);
/*800A86C8 000A54C8*/ PPC::Runtime::ASM::li(context->r12, lbl_805D5B88 @ Get_MemoryOffset_SDA21);
/*800A86CC 000A54CC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f20, context->r3));
/*800A86D0 000A54D0*/ PPC::Runtime::ASM::mr(context->r3, context->r10);
/*800A86D4 000A54D4*/ PPC::Runtime::ASM::lwz(context->r8, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A86D8 000A54D8*/ PPC::Runtime::ASM::slwi(context->r7, context->r31, 2);
/*800A86DC 000A54DC*/ PPC::Runtime::ASM::lwzx(context->r0, context->r12, context->r7);
/*800A86E0 000A54E0*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800A86E4 000A54E4*/ PPC::Runtime::ASM::beq(.L_800A8738);
/*800A86E8 000A54E8*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180556DE0 @ Get_MemoryOffset_HighBit);
/*800A86EC 000A54EC*/ PPC::Runtime::ASM::mr(context->r9, context->r10);
/*800A86F0 000A54F0*/ PPC::Runtime::ASM::mr(context->r11, context->r10);
/*800A86F4 000A54F4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, STRUCT_BYTE4_COUNT_180556DE0 @ Get_MemoryOffset_LowBit);
/*800A86F8 000A54F8*/ PPC::Runtime::ASM::b(.L_800A872C);
RUNTIME_PPC_JUMP_LABEL(.L_800A86FC, 0x800A86FC) //this is a jump label
/*800A86FC 000A54FC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r8));
/*800A8700 000A5500*/ PPC::Runtime::ASM::addi(context->r0, context->r11, 0x24);
/*800A8704 000A5504*/ PPC::Runtime::ASM::lwzx(context->r6, context->r12, context->r7);
/*800A8708 000A5508*/ PPC::Runtime::ASM::lwzx(context->r0, context->r5, context->r0);
/*800A870C 000A550C*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 7);
/*800A8710 000A5510*/ PPC::Runtime::ASM::cmpw(context->r6, context->r0);
/*800A8714 000A5514*/ PPC::Runtime::ASM::bne(.L_800A8724);
/*800A8718 000A5518*/ PPC::Runtime::ASM::stwx(context->r9, context->r4, context->r3);
/*800A871C 000A551C*/ PPC::Runtime::ASM::addi(context->r10, context->r10, 0x1);
/*800A8720 000A5520*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_800A8724, 0x800A8724) //this is a jump label
/*800A8724 000A5524*/ PPC::Runtime::ASM::addi(context->r11, context->r11, 0x140);
/*800A8728 000A5528*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800A872C, 0x800A872C) //this is a jump label
/*800A872C 000A552C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r8));
/*800A8730 000A5530*/ PPC::Runtime::ASM::cmpw(context->r9, context->r0);
/*800A8734 000A5534*/ PPC::Runtime::ASM::blt(.L_800A86FC);
RUNTIME_PPC_JUMP_LABEL(.L_800A8738, 0x800A8738) //this is a jump label
/*800A8738 000A5538*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*800A873C 000A553C*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180556DE0 @ Get_MemoryOffset_HighBit);
/*800A8740 000A5540*/ PPC::Runtime::ASM::lis(context->r3, lbl_80556E08 @ Get_MemoryOffset_HighBit);
/*800A8744 000A5544*/ PPC::Runtime::ASM::slwi(context->r6, context->r10, 2);
/*800A8748 000A5548*/ PPC::Runtime::ASM::addi(context->r5, context->r4, STRUCT_BYTE4_COUNT_180556DE0 @ Get_MemoryOffset_LowBit);
/*800A874C 000A554C*/ PPC::Runtime::ASM::li(context->r7, -0x1);
/*800A8750 000A5550*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 2);
/*800A8754 000A5554*/ PPC::Runtime::ASM::mr(context->r29, context->r30);
/*800A8758 000A5558*/ PPC::Runtime::ASM::li(context->r30, 0x1);
/*800A875C 000A555C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80556E08 @ Get_MemoryOffset_LowBit);
/*800A8760 000A5560*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*800A8764 000A5564*/ PPC::Runtime::ASM::stwx(context->r7, context->r5, context->r6);
/*800A8768 000A5568*/ PPC::Runtime::ASM::slwi(context->r28, context->r30, 2);
/*800A876C 000A556C*/ PPC::Runtime::ASM::stwx(context->r4, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_800A8770, 0x800A8770) //this is a jump label
/*800A8770 000A5570*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x1);
/*800A8774 000A5574*/ PPC::Runtime::ASM::beq(.L_800A88AC);
/*800A8778 000A5578*/ PPC::Runtime::ASM::bge(.L_800A89D0);
/*800A877C 000A557C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*800A8780 000A5580*/ PPC::Runtime::ASM::bge(.L_800A8788);
/*800A8784 000A5584*/ PPC::Runtime::ASM::b(.L_800A89D0);
RUNTIME_PPC_JUMP_LABEL(.L_800A8788, 0x800A8788) //this is a jump label
/*800A8788 000A5588*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*800A878C 000A558C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A8790 000A5590*/ PPC::Runtime::ASM::beq(.L_800A87F0);
/*800A8794 000A5594*/ PPC::Runtime::ASM::bge(.L_800A87A8);
/*800A8798 000A5598*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*800A879C 000A559C*/ PPC::Runtime::ASM::beq(.L_800A87B8);
/*800A87A0 000A55A0*/ PPC::Runtime::ASM::bge(.L_800A87D4);
/*800A87A4 000A55A4*/ PPC::Runtime::ASM::b(.L_800A88A4);
RUNTIME_PPC_JUMP_LABEL(.L_800A87A8, 0x800A87A8) //this is a jump label
/*800A87A8 000A55A8*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*800A87AC 000A55AC*/ PPC::Runtime::ASM::beq(.L_800A8848);
/*800A87B0 000A55B0*/ PPC::Runtime::ASM::bge(.L_800A88A4);
/*800A87B4 000A55B4*/ PPC::Runtime::ASM::b(.L_800A880C);
RUNTIME_PPC_JUMP_LABEL(.L_800A87B8, 0x800A87B8) //this is a jump label
/*800A87B8 000A55B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800A87BC 000A55BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*800A87C0 000A55C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800A87C4 000A55C4*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*800A87C8 000A55C8*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*800A87CC 000A55CC*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
/*800A87D0 000A55D0*/ PPC::Runtime::ASM::b(.L_800A89D4);
RUNTIME_PPC_JUMP_LABEL(.L_800A87D4, 0x800A87D4) //this is a jump label
/*800A87D4 000A55D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800A87D8 000A55D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800A87DC 000A55DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800A87E0 000A55E0*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*800A87E4 000A55E4*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*800A87E8 000A55E8*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
/*800A87EC 000A55EC*/ PPC::Runtime::ASM::b(.L_800A89D4);
RUNTIME_PPC_JUMP_LABEL(.L_800A87F0, 0x800A87F0) //this is a jump label
/*800A87F0 000A55F0*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180556DE0 @ Get_MemoryOffset_HighBit);
/*800A87F4 000A55F4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_180556DE0 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*800A87F8 000A55F8*/ PPC::Runtime::ASM::subfic(context->r3, context->r4, -0x1);
/*800A87FC 000A55FC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*800A8800 000A5600*/ PPC::Runtime::ASM::or(context->r0, context->r3, context->r0);
/*800A8804 000A5604*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
/*800A8808 000A5608*/ PPC::Runtime::ASM::b(.L_800A89D4);
RUNTIME_PPC_JUMP_LABEL(.L_800A880C, 0x800A880C) //this is a jump label
/*800A880C 000A560C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x1);
/*800A8810 000A5610*/ PPC::Runtime::ASM::beq(.L_800A882C);
/*800A8814 000A5614*/ PPC::Runtime::ASM::bge(.L_800A8834);
/*800A8818 000A5618*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*800A881C 000A561C*/ PPC::Runtime::ASM::bge(.L_800A8824);
/*800A8820 000A5620*/ PPC::Runtime::ASM::b(.L_800A8834);
RUNTIME_PPC_JUMP_LABEL(.L_800A8824, 0x800A8824) //this is a jump label
/*800A8824 000A5624*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A8828 000A5628*/ PPC::Runtime::ASM::b(.L_800A8838);
RUNTIME_PPC_JUMP_LABEL(.L_800A882C, 0x800A882C) //this is a jump label
/*800A882C 000A562C*/ PPC::Runtime::ASM::bl(fn_800E7F74);
/*800A8830 000A5630*/ PPC::Runtime::ASM::b(.L_800A8838);
RUNTIME_PPC_JUMP_LABEL(.L_800A8834, 0x800A8834) //this is a jump label
/*800A8834 000A5634*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800A8838, 0x800A8838) //this is a jump label
/*800A8838 000A5638*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*800A883C 000A563C*/ PPC::Runtime::ASM::andc(context->r0, context->r0, context->r3);
/*800A8840 000A5640*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
/*800A8844 000A5644*/ PPC::Runtime::ASM::b(.L_800A89D4);
RUNTIME_PPC_JUMP_LABEL(.L_800A8848, 0x800A8848) //this is a jump label
/*800A8848 000A5648*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800A884C 000A564C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800A8850 000A5650*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
/*800A8854 000A5654*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r6));
/*800A8858 000A5658*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800A885C 000A565C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800A8860 000A5660*/ PPC::Runtime::ASM::bne(.L_800A8878);
/*800A8864 000A5664*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r6));
/*800A8868 000A5668*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800A886C 000A566C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800A8870 000A5670*/ PPC::Runtime::ASM::bne(.L_800A8878);
/*800A8874 000A5674*/ PPC::Runtime::ASM::li(context->r5, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800A8878, 0x800A8878) //this is a jump label
/*800A8878 000A5678*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*800A887C 000A567C*/ PPC::Runtime::ASM::bne(.L_800A8894);
/*800A8880 000A5680*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180556DE0 @ Get_MemoryOffset_HighBit);
/*800A8884 000A5684*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_180556DE0 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*800A8888 000A5688*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800A888C 000A568C*/ PPC::Runtime::ASM::bne(.L_800A8894);
/*800A8890 000A5690*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800A8894, 0x800A8894) //this is a jump label
/*800A8894 000A5694*/ PPC::Runtime::ASM::neg(context->r0, context->r4);
/*800A8898 000A5698*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r4);
/*800A889C 000A569C*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
/*800A88A0 000A56A0*/ PPC::Runtime::ASM::b(.L_800A89D4);
RUNTIME_PPC_JUMP_LABEL(.L_800A88A4, 0x800A88A4) //this is a jump label
/*800A88A4 000A56A4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800A88A8 000A56A8*/ PPC::Runtime::ASM::b(.L_800A89D4);
RUNTIME_PPC_JUMP_LABEL(.L_800A88AC, 0x800A88AC) //this is a jump label
/*800A88AC 000A56AC*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*800A88B0 000A56B0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800A88B4 000A56B4*/ PPC::Runtime::ASM::beq(.L_800A8914);
/*800A88B8 000A56B8*/ PPC::Runtime::ASM::bge(.L_800A88CC);
/*800A88BC 000A56BC*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*800A88C0 000A56C0*/ PPC::Runtime::ASM::beq(.L_800A88DC);
/*800A88C4 000A56C4*/ PPC::Runtime::ASM::bge(.L_800A88F8);
/*800A88C8 000A56C8*/ PPC::Runtime::ASM::b(.L_800A89C8);
RUNTIME_PPC_JUMP_LABEL(.L_800A88CC, 0x800A88CC) //this is a jump label
/*800A88CC 000A56CC*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*800A88D0 000A56D0*/ PPC::Runtime::ASM::beq(.L_800A896C);
/*800A88D4 000A56D4*/ PPC::Runtime::ASM::bge(.L_800A89C8);
/*800A88D8 000A56D8*/ PPC::Runtime::ASM::b(.L_800A8930);
RUNTIME_PPC_JUMP_LABEL(.L_800A88DC, 0x800A88DC) //this is a jump label
/*800A88DC 000A56DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800A88E0 000A56E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*800A88E4 000A56E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*800A88E8 000A56E8*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*800A88EC 000A56EC*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*800A88F0 000A56F0*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
/*800A88F4 000A56F4*/ PPC::Runtime::ASM::b(.L_800A89D4);
RUNTIME_PPC_JUMP_LABEL(.L_800A88F8, 0x800A88F8) //this is a jump label
/*800A88F8 000A56F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800A88FC 000A56FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800A8900 000A5700*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800A8904 000A5704*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*800A8908 000A5708*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*800A890C 000A570C*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
/*800A8910 000A5710*/ PPC::Runtime::ASM::b(.L_800A89D4);
RUNTIME_PPC_JUMP_LABEL(.L_800A8914, 0x800A8914) //this is a jump label
/*800A8914 000A5714*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180556DE0 @ Get_MemoryOffset_HighBit);
/*800A8918 000A5718*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_180556DE0 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*800A891C 000A571C*/ PPC::Runtime::ASM::subfic(context->r3, context->r4, -0x1);
/*800A8920 000A5720*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*800A8924 000A5724*/ PPC::Runtime::ASM::or(context->r0, context->r3, context->r0);
/*800A8928 000A5728*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
/*800A892C 000A572C*/ PPC::Runtime::ASM::b(.L_800A89D4);
RUNTIME_PPC_JUMP_LABEL(.L_800A8930, 0x800A8930) //this is a jump label
/*800A8930 000A5730*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x1);
/*800A8934 000A5734*/ PPC::Runtime::ASM::beq(.L_800A8950);
/*800A8938 000A5738*/ PPC::Runtime::ASM::bge(.L_800A8958);
/*800A893C 000A573C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*800A8940 000A5740*/ PPC::Runtime::ASM::bge(.L_800A8948);
/*800A8944 000A5744*/ PPC::Runtime::ASM::b(.L_800A8958);
RUNTIME_PPC_JUMP_LABEL(.L_800A8948, 0x800A8948) //this is a jump label
/*800A8948 000A5748*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800A894C 000A574C*/ PPC::Runtime::ASM::b(.L_800A895C);
RUNTIME_PPC_JUMP_LABEL(.L_800A8950, 0x800A8950) //this is a jump label
/*800A8950 000A5750*/ PPC::Runtime::ASM::bl(fn_800E7F74);
/*800A8954 000A5754*/ PPC::Runtime::ASM::b(.L_800A895C);
RUNTIME_PPC_JUMP_LABEL(.L_800A8958, 0x800A8958) //this is a jump label
/*800A8958 000A5758*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800A895C, 0x800A895C) //this is a jump label
/*800A895C 000A575C*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*800A8960 000A5760*/ PPC::Runtime::ASM::andc(context->r0, context->r0, context->r3);
/*800A8964 000A5764*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
/*800A8968 000A5768*/ PPC::Runtime::ASM::b(.L_800A89D4);
RUNTIME_PPC_JUMP_LABEL(.L_800A896C, 0x800A896C) //this is a jump label
/*800A896C 000A576C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800A8970 000A5770*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800A8974 000A5774*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
/*800A8978 000A5778*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r6));
/*800A897C 000A577C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*800A8980 000A5780*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800A8984 000A5784*/ PPC::Runtime::ASM::bne(.L_800A899C);
/*800A8988 000A5788*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r6));
/*800A898C 000A578C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800A8990 000A5790*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800A8994 000A5794*/ PPC::Runtime::ASM::bne(.L_800A899C);
/*800A8998 000A5798*/ PPC::Runtime::ASM::li(context->r5, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800A899C, 0x800A899C) //this is a jump label
/*800A899C 000A579C*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x0);
/*800A89A0 000A57A0*/ PPC::Runtime::ASM::bne(.L_800A89B8);
/*800A89A4 000A57A4*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180556DE0 @ Get_MemoryOffset_HighBit);
/*800A89A8 000A57A8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_180556DE0 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*800A89AC 000A57AC*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800A89B0 000A57B0*/ PPC::Runtime::ASM::bne(.L_800A89B8);
/*800A89B4 000A57B4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800A89B8, 0x800A89B8) //this is a jump label
/*800A89B8 000A57B8*/ PPC::Runtime::ASM::neg(context->r0, context->r4);
/*800A89BC 000A57BC*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r4);
/*800A89C0 000A57C0*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
/*800A89C4 000A57C4*/ PPC::Runtime::ASM::b(.L_800A89D4);
RUNTIME_PPC_JUMP_LABEL(.L_800A89C8, 0x800A89C8) //this is a jump label
/*800A89C8 000A57C8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800A89CC 000A57CC*/ PPC::Runtime::ASM::b(.L_800A89D4);
RUNTIME_PPC_JUMP_LABEL(.L_800A89D0, 0x800A89D0) //this is a jump label
/*800A89D0 000A57D0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800A89D4, 0x800A89D4) //this is a jump label
/*800A89D4 000A57D4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800A89D8 000A57D8*/ PPC::Runtime::ASM::beq(.L_800A89F0);
/*800A89DC 000A57DC*/ PPC::Runtime::ASM::lis(context->r3, lbl_80556E08 @ Get_MemoryOffset_HighBit);
/*800A89E0 000A57E0*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*800A89E4 000A57E4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80556E08 @ Get_MemoryOffset_LowBit);
/*800A89E8 000A57E8*/ PPC::Runtime::ASM::stwx(context->r29, context->r3, context->r28);
/*800A89EC 000A57EC*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_800A89F0, 0x800A89F0) //this is a jump label
/*800A89F0 000A57F0*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*800A89F4 000A57F4*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*800A89F8 000A57F8*/ PPC::Runtime::ASM::blt(.L_800A8770);
/*800A89FC 000A57FC*/ PPC::Runtime::ASM::lis(context->r3, lbl_80556E08 @ Get_MemoryOffset_HighBit);
/*800A8A00 000A5800*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 2);
/*800A8A04 000A5804*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80556E08 @ Get_MemoryOffset_LowBit);
/*800A8A08 000A5808*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*800A8A0C 000A580C*/ PPC::Runtime::ASM::stwx(context->r4, context->r3, context->r0);
/*800A8A10 000A5810*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800A8A14 000A5814*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800A8A18 000A5818*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800A8A1C 000A581C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800A8A20 000A5820*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800A8A24 000A5824*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800A8A28 000A5828*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800A8A2C 000A582C*/ PPC::Runtime::ASM::blr();
}