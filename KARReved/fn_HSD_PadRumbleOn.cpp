//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_HSD_PadRumbleOn(PPC::Runtime::GCContext* context)
{
/*80414374 00411174*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80414378 00411178*/ PPC::Runtime::ASM::mflr(context->r0);
/*8041437C 0041117C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80414380 00411180*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80414384 00411184*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058B080 @ Get_MemoryOffset_HighBit);
/*80414388 00411188*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8041438C 0041118C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058B080 @ Get_MemoryOffset_LowBit);
/*80414390 00411190*/ PPC::Runtime::ASM::slwi(context->r31, context->r0, 1);
/*80414394 00411194*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r3));
/*80414398 00411198*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r31);
/*8041439C 0041119C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r3));
/*804143A0 004111A0*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*804143A4 004111A4*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*804143A8 004111A8*/ PPC::Runtime::ASM::bne(.L_804143E0);
/*804143AC 004111AC*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*804143B0 004111B0*/ PPC::Runtime::ASM::lis(context->r5, lbl_8058B080 @ Get_MemoryOffset_HighBit);
/*804143B4 004111B4*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18058BB88 @ Get_MemoryOffset_HighBit);
/*804143B8 004111B8*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_8058B080 @ Get_MemoryOffset_LowBit);
/*804143BC 004111BC*/ PPC::Runtime::ASM::li(context->r6, 0x2);
/*804143C0 004111C0*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r31);
/*804143C4 004111C4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, STRUCT_BYTE4_COUNT_18058BB88 @ Get_MemoryOffset_LowBit);
/*804143C8 004111C8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r5));
/*804143CC 004111CC*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*804143D0 004111D0*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0xc);
/*804143D4 004111D4*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r4);
/*804143D8 004111D8*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*804143DC 004111DC*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_804143E0, 0x804143E0) //this is a jump label
/*804143E0 004111E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804143E4 004111E4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804143E8 004111E8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804143EC 004111EC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*804143F0 004111F0*/ PPC::Runtime::ASM::blr();
}