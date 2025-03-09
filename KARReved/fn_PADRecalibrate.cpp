//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "fn_SIDisablePolling.hpp"
#include "memset.hpp"
#include "fn_PADTypeAndStatusCallback.hpp"
#include "fn_PADTypeAndStatusCallback.hpp"
#include "fn_SIGetTypeAsync.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_PADRecalibrate(PPC::Runtime::GCContext* context)
{
/*803DC5CC 003D93CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803DC5D0 003D93D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803DC5D4 003D93D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803DC5D8 003D93D8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803DC5DC 003D93DC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803DC5E0 003D93E0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803DC5E4 003D93E4*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803DC5E8 003D93E8*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DDF58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC5EC 003D93EC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803DC5F0 003D93F0*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DDF50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC5F4 003D93F4*/ PPC::Runtime::ASM::lis(context->r4, 0x8000);
/*803DC5F8 003D93F8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDF54 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC5FC 003D93FC*/ PPC::Runtime::ASM::or(context->r30, context->r30, context->r6);
/*803DC600 003D9400*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DDF48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC604 003D9404*/ PPC::Runtime::ASM::or(context->r5, context->r5, context->r0);
/*803DC608 003D9408*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30e3, context->r4));
/*803DC60C 003D940C*/ PPC::Runtime::ASM::andc(context->r30, context->r30, context->r5);
/*803DC610 003D9410*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DDF44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC614 003D9414*/ PPC::Runtime::ASM::or(context->r4, context->r6, context->r30);
/*803DC618 003D9418*/ PPC::Runtime::ASM::stw(context->r7, STRUCT_BYTE4_COUNT_1805DDF58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC61C 003D941C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 25, 25);
/*803DC620 003D9420*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DDF48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC624 003D9424*/ PPC::Runtime::ASM::andc(context->r4, context->r5, context->r30);
/*803DC628 003D9428*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*803DC62C 003D942C*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DDF48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC630 003D9430*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DDF44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC634 003D9434*/ PPC::Runtime::ASM::and(context->r3, context->r6, context->r5);
/*803DC638 003D9438*/ PPC::Runtime::ASM::bne(.L_803DC648);
/*803DC63C 003D943C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDF4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC640 003D9440*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r30);
/*803DC644 003D9444*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDF4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803DC648, 0x803DC648) //this is a jump label
/*803DC648 003D9448*/ PPC::Runtime::ASM::bl(fn_SIDisablePolling);
/*803DC64C 003D944C*/ PPC::Runtime::ASM::lwz(context->r0, StructValues_33 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC650 003D9450*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x20);
/*803DC654 003D9454*/ PPC::Runtime::ASM::bne(.L_803DC6AC);
/*803DC658 003D9458*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DDF48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC65C 003D945C*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r5);
/*803DC660 003D9460*/ PPC::Runtime::ASM::stw(context->r0, StructValues_33 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC664 003D9464*/ PPC::Runtime::ASM::lwz(context->r4, StructValues_33 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC668 003D9468*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x20);
/*803DC66C 003D946C*/ PPC::Runtime::ASM::beq(.L_803DC6AC);
/*803DC670 003D9470*/ PPC::Runtime::ASM::lis(context->r0, 0x8000);
/*803DC674 003D9474*/ PPC::Runtime::ASM::srw(context->r0, context->r0, context->r4);
/*803DC678 003D9478*/ PPC::Runtime::ASM::andc(context->r0, context->r5, context->r0);
/*803DC67C 003D947C*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0xc);
/*803DC680 003D9480*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDF48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC684 003D9484*/ PPC::Runtime::ASM::lis(context->r3, lbl_8056E360 @ Get_MemoryOffset_HighBit);
/*803DC688 003D9488*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_8056E360 @ Get_MemoryOffset_LowBit);
/*803DC68C 003D948C*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r4);
/*803DC690 003D9490*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803DC694 003D9494*/ PPC::Runtime::ASM::li(context->r5, 0xc);
/*803DC698 003D9498*/ PPC::Runtime::ASM::bl(memset);
/*803DC69C 003D949C*/ PPC::Runtime::ASM::lis(context->r4, fn_PADTypeAndStatusCallback @ Get_MemoryOffset_HighBit);
/*803DC6A0 003D94A0*/ PPC::Runtime::ASM::lwz(context->r3, StructValues_33 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DC6A4 003D94A4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_PADTypeAndStatusCallback @ Get_MemoryOffset_LowBit);
/*803DC6A8 003D94A8*/ PPC::Runtime::ASM::bl(fn_SIGetTypeAsync);
RUNTIME_PPC_JUMP_LABEL(.L_803DC6AC, 0x803DC6AC) //this is a jump label
/*803DC6AC 003D94AC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803DC6B0 003D94B0*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803DC6B4 003D94B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803DC6B8 003D94B8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803DC6BC 003D94BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803DC6C0 003D94C0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803DC6C4 003D94C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803DC6C8 003D94C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803DC6CC 003D94CC*/ PPC::Runtime::ASM::blr();
}