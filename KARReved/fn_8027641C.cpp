//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8000A188.hpp"



void fn_8027641C(PPC::Runtime::GCContext* context)
{
/*8027641C 0027321C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80276420 00273220*/ PPC::Runtime::ASM::mflr(context->r0);
/*80276424 00273224*/ PPC::Runtime::ASM::lis(context->r4, lbl_804B7F30 @ Get_MemoryOffset_HighBit);
/*80276428 00273228*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8027642C 0027322C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80276430 00273230*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_804B7F30 @ Get_MemoryOffset_LowBit);
/*80276434 00273234*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80276438 00273238*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8027643C 0027323C*/ PPC::Runtime::ASM::bl(fn_8000A188);
/*80276440 00273240*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80276444 00273244*/ PPC::Runtime::ASM::beq(.L_80276488);
/*80276448 00273248*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8027644C 0027324C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xd0);
/*80276450 00273250*/ PPC::Runtime::ASM::mulli(context->r0, context->r4, 0x14);
/*80276454 00273254*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*80276458 00273258*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*8027645C 0027325C*/ PPC::Runtime::ASM::beq(.L_80276470);
/*80276460 00273260*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xcbc);
/*80276464 00273264*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xcc8);
/*80276468 00273268*/ PPC::Runtime::ASM::li(context->r4, 0x22a);
/*8027646C 0027326C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80276470, 0x80276470) //this is a jump label
/*80276470 00273270*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*80276474 00273274*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xd0);
/*80276478 00273278*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x14);
/*8027647C 0027327C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80276480 00273280*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80276484 00273284*/ PPC::Runtime::ASM::b(.L_802764C4);
RUNTIME_PPC_JUMP_LABEL(.L_80276488, 0x80276488) //this is a jump label
/*80276488 00273288*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8027648C 0027328C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xd0);
/*80276490 00273290*/ PPC::Runtime::ASM::mulli(context->r0, context->r4, 0x14);
/*80276494 00273294*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*80276498 00273298*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*8027649C 0027329C*/ PPC::Runtime::ASM::beq(.L_802764B0);
/*802764A0 002732A0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xcbc);
/*802764A4 002732A4*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xcc8);
/*802764A8 002732A8*/ PPC::Runtime::ASM::li(context->r4, 0x220);
/*802764AC 002732AC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_802764B0, 0x802764B0) //this is a jump label
/*802764B0 002732B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*802764B4 002732B4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xd0);
/*802764B8 002732B8*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x14);
/*802764BC 002732BC*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*802764C0 002732C0*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_802764C4, 0x802764C4) //this is a jump label
/*802764C4 002732C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802764C8 002732C8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802764CC 002732CC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802764D0 002732D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802764D4 002732D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802764D8 002732D8*/ PPC::Runtime::ASM::blr();
}