//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"



void fn_80230C3C(PPC::Runtime::GCContext* context)
{
/*80230C3C 0022DA3C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80230C40 0022DA40*/ PPC::Runtime::ASM::mflr(context->r0);
/*80230C44 0022DA44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80230C48 0022DA48*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80230C4C 0022DA4C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80230C50 0022DA50*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*80230C54 0022DA54*/ PPC::Runtime::ASM::blt(.L_80230C70);
/*80230C58 0022DA58*/ PPC::Runtime::ASM::lis(context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_HighBit);
/*80230C5C 0022DA5C*/ PPC::Runtime::ASM::lis(context->r5, lbl_804B4CF0 @ Get_MemoryOffset_HighBit);
/*80230C60 0022DA60*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "plclearcheckerlib." Get_MemoryOffset_LowBit);
/*80230C64 0022DA64*/ PPC::Runtime::ASM::li(context->r4, 0x760);
/*80230C68 0022DA68*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_804B4CF0 @ Get_MemoryOffset_LowBit);
/*80230C6C 0022DA6C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80230C70, 0x80230C70) //this is a jump label
/*80230C70 0022DA70*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80230C74 0022DA74*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*80230C78 0022DA78*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84d, context->r3));
/*80230C7C 0022DA7C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80230C80 0022DA80*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 28);
/*80230C84 0022DA84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80230C88 0022DA88*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80230C8C 0022DA8C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80230C90 0022DA90*/ PPC::Runtime::ASM::blr();
}