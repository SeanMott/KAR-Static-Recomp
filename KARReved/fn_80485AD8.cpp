//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_sscanf.hpp"



void fn_80485AD8(PPC::Runtime::GCContext* context)
{
/*80485AD8 004828D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80485ADC 004828DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80485AE0 004828E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80485AE4 004828E4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80485AE8 004828E8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80485AEC 004828EC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80485AF0 004828F0*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x0);
/*80485AF4 004828F4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F8AF0 @ Get_MemoryOffset_HighBit);
/*80485AF8 004828F8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80485AFC 004828FC*/ PPC::Runtime::ASM::addi(context->r31, context->r29, 0x0);
/*80485B00 00482900*/ PPC::Runtime::ASM::addi(context->r30, context->r29, 0x0);
/*80485B04 00482904*/ PPC::Runtime::ASM::addi(context->r28, context->r3, lbl_804F8AF0 @ Get_MemoryOffset_LowBit);
/*80485B08 00482908*/ PPC::Runtime::ASM::b(.L_80485B84);
RUNTIME_PPC_JUMP_LABEL(.L_80485B0C, 0x80485B0C) //this is a jump label
/*80485B0C 0048290C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80485B10 00482910*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x25);
/*80485B14 00482914*/ PPC::Runtime::ASM::bne(.L_80485B74);
/*80485B18 00482918*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r29));
/*80485B1C 0048291C*/ PPC::Runtime::ASM::add(context->r3, context->r28, context->r0);
/*80485B20 00482920*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80485B24 00482924*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 26, 26);
/*80485B28 00482928*/ PPC::Runtime::ASM::beq(.L_80485B74);
/*80485B2C 0048292C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r29));
/*80485B30 00482930*/ PPC::Runtime::ASM::add(context->r3, context->r28, context->r0);
/*80485B34 00482934*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80485B38 00482938*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 26, 26);
/*80485B3C 0048293C*/ PPC::Runtime::ASM::beq(.L_80485B74);
/*80485B40 00482940*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x1);
/*80485B44 00482944*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80485B48 00482948*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*80485B4C 0048294C*/ PPC::Runtime::ASM::li(context->r4, MemoryOffset_317 @ Get_MemoryOffset_SDA21);
/*80485B50 00482950*/ PPC::Runtime::ASM::bl(fn_sscanf);
/*80485B54 00482954*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80485B58 00482958*/ PPC::Runtime::ASM::bne(.L_80485B84);
/*80485B5C 0048295C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80485B60 00482960*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x3);
/*80485B64 00482964*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80485B68 00482968*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80485B6C 0048296C*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*80485B70 00482970*/ PPC::Runtime::ASM::b(.L_80485B84);
RUNTIME_PPC_JUMP_LABEL(.L_80485B74, 0x80485B74) //this is a jump label
/*80485B74 00482974*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80485B78 00482978*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*80485B7C 0048297C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80485B80 00482980*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80485B84, 0x80485B84) //this is a jump label
/*80485B84 00482984*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80485B88 00482988*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80485B8C 0048298C*/ PPC::Runtime::ASM::bne(.L_80485B0C);
/*80485B90 00482990*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80485B94 00482994*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80485B98 00482998*/ PPC::Runtime::ASM::subf(context->r3, context->r30, context->r31);
/*80485B9C 0048299C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80485BA0 004829A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80485BA4 004829A4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80485BA8 004829A8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80485BAC 004829AC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80485BB0 004829B0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80485BB4 004829B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80485BB8 004829B8*/ PPC::Runtime::ASM::blr();
}