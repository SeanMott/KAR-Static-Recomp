//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_cbForCancelSync3.hpp"
#include "fn___SOClose.hpp"
#include "fn___SOSetSockOpt.hpp"
#include "fn___SOClose.hpp"
#include "fn_LingerCallback.hpp"
#include "fn_LingerCallback.hpp"
#include "fn_80476C44.hpp"
#include "fn_GetNode.hpp"
#include "fn_IPAutoStop.hpp"
#include "fn_DNSClose.hpp"
#include "fn_80480210.hpp"
#include "OSDisableInterrupts.hpp"
#include "fn_DHCPCleanup.hpp"
#include "fn_OSSleepThread.hpp"
#include "fn_DHCPGetStatus.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_IPInitRoute.hpp"
#include "fn_8046D98C.hpp"
#include "OSDisableInterrupts.hpp"
#include "fn_OSWakeupThread.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSDisableInterrupts.hpp"
#include "fn_OSWakeupThread.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSDisableInterrupts.hpp"
#include "fn_OSSleepThread.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_IFMute.hpp"
#include "fn_ARPRefresh.hpp"



void fn_8047B578(PPC::Runtime::GCContext* context)
{
/*8047B578 00478378*/ PPC::Runtime::ASM::mflr(context->r0);
/*8047B57C 0047837C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8047B580 00478380*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x28, context->r1));
/*8047B584 00478384*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8047B588 00478388*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8047B58C 0047838C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8047B590 00478390*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE68C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B594 00478394*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8047B598 00478398*/ PPC::Runtime::ASM::beq(.L_8047B5A4);
/*8047B59C 0047839C*/ PPC::Runtime::ASM::li(context->r3, -0x27);
/*8047B5A0 004783A0*/ PPC::Runtime::ASM::b(.L_8047B86C);
RUNTIME_PPC_JUMP_LABEL(.L_8047B5A4, 0x8047B5A4) //this is a jump label
/*8047B5A4 004783A4*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8047B5A8 004783A8*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE68C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B5AC 004783AC*/ PPC::Runtime::ASM::bl(fn_cbForCancelSync3);
/*8047B5B0 004783B0*/ PPC::Runtime::ASM::lis(context->r3, lbl_805BE4B0 @ Get_MemoryOffset_HighBit);
/*8047B5B4 004783B4*/ PPC::Runtime::ASM::addi(context->r30, context->r3, lbl_805BE4B0 @ Get_MemoryOffset_LowBit);
/*8047B5B8 004783B8*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8047B5BC 004783BC*/ PPC::Runtime::ASM::lis(context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8047B5C0, 0x8047B5C0) //this is a jump label
/*8047B5C0 004783C0*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r30));
/*8047B5C4 004783C4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8047B5C8 004783C8*/ PPC::Runtime::ASM::beq(.L_8047B624);
/*8047B5CC 004783CC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8047B5D0 004783D0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x11);
/*8047B5D4 004783D4*/ PPC::Runtime::ASM::beq(.L_8047B5E8);
/*8047B5D8 004783D8*/ PPC::Runtime::ASM::bge(.L_8047B624);
/*8047B5DC 004783DC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x6);
/*8047B5E0 004783E0*/ PPC::Runtime::ASM::beq(.L_8047B5F4);
/*8047B5E4 004783E4*/ PPC::Runtime::ASM::b(.L_8047B624);
RUNTIME_PPC_JUMP_LABEL(.L_8047B5E8, 0x8047B5E8) //this is a jump label
/*8047B5E8 004783E8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8047B5EC 004783EC*/ PPC::Runtime::ASM::bl(fn___SOClose);
/*8047B5F0 004783F0*/ PPC::Runtime::ASM::b(.L_8047B624);
RUNTIME_PPC_JUMP_LABEL(.L_8047B5F4, 0x8047B5F4) //this is a jump label
/*8047B5F4 004783F4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8047B5F8 004783F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8047B5FC 004783FC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8047B600 00478400*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*8047B604 00478404*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8047B608 00478408*/ PPC::Runtime::ASM::subi(context->r4, context->r31, 0x1);
/*8047B60C 0047840C*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*8047B610 00478410*/ PPC::Runtime::ASM::li(context->r5, 0x80);
/*8047B614 00478414*/ PPC::Runtime::ASM::li(context->r7, 0x8);
/*8047B618 00478418*/ PPC::Runtime::ASM::bl(fn___SOSetSockOpt);
/*8047B61C 0047841C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8047B620 00478420*/ PPC::Runtime::ASM::bl(fn___SOClose);
RUNTIME_PPC_JUMP_LABEL(.L_8047B624, 0x8047B624) //this is a jump label
/*8047B624 00478424*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8047B628 00478428*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x100);
/*8047B62C 0047842C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x38);
/*8047B630 00478430*/ PPC::Runtime::ASM::blt(.L_8047B5C0);
/*8047B634 00478434*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE650 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B638 00478438*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8047B63C 0047843C*/ PPC::Runtime::ASM::mr(context->r4, context->r0);
/*8047B640 00478440*/ PPC::Runtime::ASM::bne(.L_8047B64C);
/*8047B644 00478444*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8047B648 00478448*/ PPC::Runtime::ASM::b(.L_8047B650);
RUNTIME_PPC_JUMP_LABEL(.L_8047B64C, 0x8047B64C) //this is a jump label
/*8047B64C 0047844C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8047B650, 0x8047B650) //this is a jump label
/*8047B650 00478450*/ PPC::Runtime::ASM::lis(context->r3, fn_LingerCallback @ Get_MemoryOffset_HighBit);
/*8047B654 00478454*/ PPC::Runtime::ASM::mr(context->r29, context->r0);
/*8047B658 00478458*/ PPC::Runtime::ASM::addi(context->r31, context->r3, fn_LingerCallback @ Get_MemoryOffset_LowBit);
/*8047B65C 0047845C*/ PPC::Runtime::ASM::b(.L_8047B690);
RUNTIME_PPC_JUMP_LABEL(.L_8047B660, 0x8047B660) //this is a jump label
/*8047B660 00478460*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r4));
/*8047B664 00478464*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x0);
/*8047B668 00478468*/ PPC::Runtime::ASM::cmplw(context->r0, context->r31);
/*8047B66C 0047846C*/ PPC::Runtime::ASM::bne(.L_8047B674);
/*8047B670 00478470*/ PPC::Runtime::ASM::bl(fn_80476C44);
RUNTIME_PPC_JUMP_LABEL(.L_8047B674, 0x8047B674) //this is a jump label
/*8047B674 00478474*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8047B678 00478478*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x0);
/*8047B67C 0047847C*/ PPC::Runtime::ASM::bne(.L_8047B688);
/*8047B680 00478480*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8047B684 00478484*/ PPC::Runtime::ASM::b(.L_8047B68C);
RUNTIME_PPC_JUMP_LABEL(.L_8047B688, 0x8047B688) //this is a jump label
/*8047B688 00478488*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_8047B68C, 0x8047B68C) //this is a jump label
/*8047B68C 0047848C*/ PPC::Runtime::ASM::mr(context->r29, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8047B690, 0x8047B690) //this is a jump label
/*8047B690 00478490*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8047B694 00478494*/ PPC::Runtime::ASM::bne(.L_8047B660);
/*8047B698 00478498*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*8047B69C 0047849C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8047B6A0 004784A0*/ PPC::Runtime::ASM::bl(fn_GetNode);
/*8047B6A4 004784A4*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE690 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B6A8 004784A8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 16, 16);
/*8047B6AC 004784AC*/ PPC::Runtime::ASM::beq(.L_8047B6B4);
/*8047B6B0 004784B0*/ PPC::Runtime::ASM::bl(fn_IPAutoStop);
RUNTIME_PPC_JUMP_LABEL(.L_8047B6B4, 0x8047B6B4) //this is a jump label
/*8047B6B4 004784B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_805C1CB0 @ Get_MemoryOffset_HighBit);
/*8047B6B8 004784B8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_805C1CB0 @ Get_MemoryOffset_LowBit);
/*8047B6BC 004784BC*/ PPC::Runtime::ASM::bl(fn_DNSClose);
/*8047B6C0 004784C0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE6B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B6C4 004784C4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8047B6C8 004784C8*/ PPC::Runtime::ASM::bne(.L_8047B758);
/*8047B6CC 004784CC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE690 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B6D0 004784D0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 30, 30);
/*8047B6D4 004784D4*/ PPC::Runtime::ASM::beq(.L_8047B6FC);
/*8047B6D8 004784D8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8047B6DC 004784DC*/ PPC::Runtime::ASM::bl(fn_80480210);
/*8047B6E0 004784E0*/ PPC::Runtime::ASM::lis(context->r3, lbl_805C2448 @ Get_MemoryOffset_HighBit);
/*8047B6E4 004784E4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_805C2448 @ Get_MemoryOffset_LowBit);
/*8047B6E8 004784E8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_8047B6EC, 0x8047B6EC) //this is a jump label
/*8047B6EC 004784EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8047B6F0 004784F0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8047B6F4 004784F4*/ PPC::Runtime::ASM::bne(.L_8047B6EC);
/*8047B6F8 004784F8*/ PPC::Runtime::ASM::b(.L_8047B758);
RUNTIME_PPC_JUMP_LABEL(.L_8047B6FC, 0x8047B6FC) //this is a jump label
/* 8047B6FC 004784FC  54 60 07 FF */ clrlwi. context->r0 , context->r3 , 31
/*8047B700 00478500*/ PPC::Runtime::ASM::beq(.L_8047B738);
/*8047B704 00478504*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8047B708 00478508*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8047B70C 0047850C*/ PPC::Runtime::ASM::bl(fn_DHCPCleanup);
/*8047B710 00478510*/ PPC::Runtime::ASM::b(.L_8047B71C);
RUNTIME_PPC_JUMP_LABEL(.L_8047B714, 0x8047B714) //this is a jump label
/*8047B714 00478514*/ PPC::Runtime::ASM::li(context->r3, SkipAddress_5 @ Get_MemoryOffset_SDA21);
/*8047B718 00478518*/ PPC::Runtime::ASM::bl(fn_OSSleepThread);
RUNTIME_PPC_JUMP_LABEL(.L_8047B71C, 0x8047B71C) //this is a jump label
/*8047B71C 0047851C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8047B720 00478520*/ PPC::Runtime::ASM::bl(fn_DHCPGetStatus);
/*8047B724 00478524*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8047B728 00478528*/ PPC::Runtime::ASM::bne(.L_8047B714);
/*8047B72C 0047852C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8047B730 00478530*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8047B734 00478534*/ PPC::Runtime::ASM::b(.L_8047B758);
RUNTIME_PPC_JUMP_LABEL(.L_8047B738, 0x8047B738) //this is a jump label
/*8047B738 00478538*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8047B73C 0047853C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8047B740 00478540*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8047B744 00478544*/ PPC::Runtime::ASM::bl(fn_IPInitRoute);
/*8047B748 00478548*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_HighBit);
/*8047B74C 0047854C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_LowBit);
/*8047B750 00478550*/ PPC::Runtime::ASM::li(context->r4, STRUCT_BYTE4_COUNT_1805E62A0 @ Get_MemoryOffset_SDA21);
/*8047B754 00478554*/ PPC::Runtime::ASM::bl(fn_8046D98C);
RUNTIME_PPC_JUMP_LABEL(.L_8047B758, 0x8047B758) //this is a jump label
/*8047B758 00478558*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE67C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B75C 0047855C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8047B760 00478560*/ PPC::Runtime::ASM::beq(.L_8047B7BC);
/*8047B764 00478564*/ PPC::Runtime::ASM::lwz(context->r30, STRUCT_BYTE4_COUNT_1805DE680 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B768 00478568*/ PPC::Runtime::ASM::beq(.L_8047B7BC);
/*8047B76C 0047856C*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE66C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B770 00478570*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x0);
/*8047B774 00478574*/ PPC::Runtime::ASM::li(context->r3, 0x6);
/*8047B778 00478578*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 8047B77C 0047857C  4E 80 00 21 */ blrl
/*8047B780 00478580*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8047B784 00478584*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B788 00478588*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*8047B78C 0047858C*/ PPC::Runtime::ASM::subf(context->r0, context->r30, context->r0);
/*8047B790 00478590*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B794 00478594*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B798 00478598*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8047B79C 0047859C*/ PPC::Runtime::ASM::bne(.L_8047B7B4);
/*8047B7A0 004785A0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE68C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B7A4 004785A4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8047B7A8 004785A8*/ PPC::Runtime::ASM::bne(.L_8047B7B4);
/*8047B7AC 004785AC*/ PPC::Runtime::ASM::li(context->r3, SkipAddress_5 @ Get_MemoryOffset_SDA21);
/*8047B7B0 004785B0*/ PPC::Runtime::ASM::bl(fn_OSWakeupThread);
RUNTIME_PPC_JUMP_LABEL(.L_8047B7B4, 0x8047B7B4) //this is a jump label
/*8047B7B4 004785B4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8047B7B8 004785B8*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_8047B7BC, 0x8047B7BC) //this is a jump label
/*8047B7BC 004785BC*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE684 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B7C0 004785C0*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8047B7C4 004785C4*/ PPC::Runtime::ASM::beq(.L_8047B820);
/*8047B7C8 004785C8*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1805DE688 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B7CC 004785CC*/ PPC::Runtime::ASM::beq(.L_8047B820);
/*8047B7D0 004785D0*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE66C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B7D4 004785D4*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x0);
/*8047B7D8 004785D8*/ PPC::Runtime::ASM::li(context->r3, 0x7);
/*8047B7DC 004785DC*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 8047B7E0 004785E0  4E 80 00 21 */ blrl
/*8047B7E4 004785E4*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8047B7E8 004785E8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B7EC 004785EC*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*8047B7F0 004785F0*/ PPC::Runtime::ASM::subf(context->r0, context->r31, context->r0);
/*8047B7F4 004785F4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B7F8 004785F8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B7FC 004785FC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8047B800 00478600*/ PPC::Runtime::ASM::bne(.L_8047B818);
/*8047B804 00478604*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE68C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B808 00478608*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8047B80C 0047860C*/ PPC::Runtime::ASM::bne(.L_8047B818);
/*8047B810 00478610*/ PPC::Runtime::ASM::li(context->r3, SkipAddress_5 @ Get_MemoryOffset_SDA21);
/*8047B814 00478614*/ PPC::Runtime::ASM::bl(fn_OSWakeupThread);
RUNTIME_PPC_JUMP_LABEL(.L_8047B818, 0x8047B818) //this is a jump label
/*8047B818 00478618*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8047B81C 0047861C*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_8047B820, 0x8047B820) //this is a jump label
/*8047B820 00478620*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8047B824 00478624*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8047B828 00478628*/ PPC::Runtime::ASM::b(.L_8047B834);
RUNTIME_PPC_JUMP_LABEL(.L_8047B82C, 0x8047B82C) //this is a jump label
/*8047B82C 0047862C*/ PPC::Runtime::ASM::li(context->r3, SkipAddress_5 @ Get_MemoryOffset_SDA21);
/*8047B830 00478630*/ PPC::Runtime::ASM::bl(fn_OSSleepThread);
RUNTIME_PPC_JUMP_LABEL(.L_8047B834, 0x8047B834) //this is a jump label
/*8047B834 00478634*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE670 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B838 00478638*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8047B83C 0047863C*/ PPC::Runtime::ASM::bne(.L_8047B82C);
/*8047B840 00478640*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8047B844 00478644*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8047B848 00478648*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE6B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B84C 0047864C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8047B850 00478650*/ PPC::Runtime::ASM::bne(.L_8047B860);
/*8047B854 00478654*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8047B858 00478658*/ PPC::Runtime::ASM::bl(fn_IFMute);
/*8047B85C 0047865C*/ PPC::Runtime::ASM::bl(fn_ARPRefresh);
RUNTIME_PPC_JUMP_LABEL(.L_8047B860, 0x8047B860) //this is a jump label
/*8047B860 00478660*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8047B864 00478664*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE68C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8047B868 00478668*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8047B86C, 0x8047B86C) //this is a jump label
/*8047B86C 0047866C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8047B870 00478670*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8047B874 00478674*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8047B878 00478678*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8047B87C 0047867C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x28);
/*8047B880 00478680*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8047B884 00478684*/ PPC::Runtime::ASM::blr();
}