//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "strchr.hpp"



void fn_80482D48(PPC::Runtime::GCContext* context)
{
/*80482D48 0047FB48*/ PPC::Runtime::ASM::mflr(context->r0);
/*80482D4C 0047FB4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80482D50 0047FB50*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80482D54 0047FB54*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80482D58 0047FB58*/ PPC::Runtime::ASM::stmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80482D5C 0047FB5C*/ PPC::Runtime::ASM::addi(context->r27, context->r3, 0x0);
/*80482D60 0047FB60*/ PPC::Runtime::ASM::addi(context->r29, context->r5, 0x0);
/*80482D64 0047FB64*/ PPC::Runtime::ASM::addi(context->r30, context->r6, 0x0);
/*80482D68 0047FB68*/ PPC::Runtime::ASM::addi(context->r28, context->r4, 0x0);
/*80482D6C 0047FB6C*/ PPC::Runtime::ASM::addi(context->r31, context->r27, 0x0);
/*80482D70 0047FB70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80482D74 0047FB74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80482D78 0047FB78*/ PPC::Runtime::ASM::b(.L_80482D80);
RUNTIME_PPC_JUMP_LABEL(.L_80482D7C, 0x80482D7C) //this is a jump label
/*80482D7C 0047FB7C*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80482D80, 0x80482D80) //this is a jump label
/*80482D80 0047FB80*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80482D84 0047FB84*/ PPC::Runtime::ASM::extsb.(context->r0, context->r4);
/*80482D88 0047FB88*/ PPC::Runtime::ASM::beq(.L_80482DA0);
/*80482D8C 0047FB8C*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x0);
/*80482D90 0047FB90*/ PPC::Runtime::ASM::extsb(context->r4, context->r4);
/*80482D94 0047FB94*/ PPC::Runtime::ASM::bl(strchr);
/*80482D98 0047FB98*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80482D9C 0047FB9C*/ PPC::Runtime::ASM::beq(.L_80482D7C);
RUNTIME_PPC_JUMP_LABEL(.L_80482DA0, 0x80482DA0) //this is a jump label
/*80482DA0 0047FBA0*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80482DA4 0047FBA4*/ PPC::Runtime::ASM::subf(context->r0, context->r27, context->r31);
/*80482DA8 0047FBA8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*80482DAC 0047FBAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80482DB0 0047FBB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80482DB4 0047FBB4*/ PPC::Runtime::ASM::lmw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80482DB8 0047FBB8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80482DBC 0047FBBC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80482DC0 0047FBC0*/ PPC::Runtime::ASM::blr();
}