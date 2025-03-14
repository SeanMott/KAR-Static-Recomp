//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_HSD_PadRumbleOffH(PPC::Runtime::GCContext* context)
{
/*804143F4 004111F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*804143F8 004111F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*804143FC 004111FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80414400 00411200*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80414404 00411204*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058B080 @ Get_MemoryOffset_HighBit);
/*80414408 00411208*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8041440C 0041120C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058B080 @ Get_MemoryOffset_LowBit);
/*80414410 00411210*/ PPC::Runtime::ASM::slwi(context->r31, context->r0, 1);
/*80414414 00411214*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r3));
/*80414418 00411218*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r31);
/*8041441C 0041121C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r3));
/*80414420 00411220*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80414424 00411224*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*80414428 00411228*/ PPC::Runtime::ASM::bne(.L_80414460);
/*8041442C 0041122C*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80414430 00411230*/ PPC::Runtime::ASM::lis(context->r5, lbl_8058B080 @ Get_MemoryOffset_HighBit);
/*80414434 00411234*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18058BB88 @ Get_MemoryOffset_HighBit);
/*80414438 00411238*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_8058B080 @ Get_MemoryOffset_LowBit);
/*8041443C 0041123C*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*80414440 00411240*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r31);
/*80414444 00411244*/ PPC::Runtime::ASM::addi(context->r0, context->r4, STRUCT_BYTE4_COUNT_18058BB88 @ Get_MemoryOffset_LowBit);
/*80414448 00411248*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r5));
/*8041444C 0041124C*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*80414450 00411250*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0xc);
/*80414454 00411254*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r4);
/*80414458 00411258*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*8041445C 0041125C*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_80414460, 0x80414460) //this is a jump label
/*80414460 00411260*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80414464 00411264*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80414468 00411268*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8041446C 0041126C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80414470 00411270*/ PPC::Runtime::ASM::blr();
}