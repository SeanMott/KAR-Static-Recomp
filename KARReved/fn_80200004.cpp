//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8027B418.hpp"
#include "fn_8027B5E0.hpp"
#include "fn_8027B5F0.hpp"
#include "fn_802000C0.hpp"
#include "fn_80200208.hpp"



void fn_80200004(PPC::Runtime::GCContext* context)
{
/*80200004 001FCE04*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80200008 001FCE08*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020000C 001FCE0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80200010 001FCE10*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80200014 001FCE14*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80200018 001FCE18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8020001C 001FCE1C*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80200020 001FCE20*/ PPC::Runtime::ASM::ble(.L_8020002C);
/*80200024 001FCE24*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x48);
/*80200028 001FCE28*/ PPC::Runtime::ASM::blt(.L_8020003C);
RUNTIME_PPC_JUMP_LABEL(.L_8020002C, 0x8020002C) //this is a jump label
/*8020002C 001FCE2C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4c);
/*80200030 001FCE30*/ PPC::Runtime::ASM::blt(.L_80200098);
/*80200034 001FCE34*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4f);
/*80200038 001FCE38*/ PPC::Runtime::ASM::bge(.L_80200098);
RUNTIME_PPC_JUMP_LABEL(.L_8020003C, 0x8020003C) //this is a jump label
/*8020003C 001FCE3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x954, context->r31));
/*80200040 001FCE40*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80200044 001FCE44*/ PPC::Runtime::ASM::bne(.L_80200098);
/*80200048 001FCE48*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8020004C 001FCE4C*/ PPC::Runtime::ASM::bl(fn_8027B418);
/*80200050 001FCE50*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80200054 001FCE54*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x954, context->r31));
/*80200058 001FCE58*/ PPC::Runtime::ASM::beq(.L_80200098);
/*8020005C 001FCE5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80200060 001FCE60*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4f);
/*80200064 001FCE64*/ PPC::Runtime::ASM::bge(.L_80200080);
/*80200068 001FCE68*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4c);
/*8020006C 001FCE6C*/ PPC::Runtime::ASM::bge(.L_80200074);
/*80200070 001FCE70*/ PPC::Runtime::ASM::b(.L_80200080);
RUNTIME_PPC_JUMP_LABEL(.L_80200074, 0x80200074) //this is a jump label
/*80200074 001FCE74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x954, context->r31));
/*80200078 001FCE78*/ PPC::Runtime::ASM::bl(fn_8027B5E0);
/*8020007C 001FCE7C*/ PPC::Runtime::ASM::b(.L_80200088);
RUNTIME_PPC_JUMP_LABEL(.L_80200080, 0x80200080) //this is a jump label
/*80200080 001FCE80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x954, context->r31));
/*80200084 001FCE84*/ PPC::Runtime::ASM::bl(fn_8027B5F0);
RUNTIME_PPC_JUMP_LABEL(.L_80200088, 0x80200088) //this is a jump label
/*80200088 001FCE88*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020008C 001FCE8C*/ PPC::Runtime::ASM::bl(fn_802000C0);
/*80200090 001FCE90*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80200094 001FCE94*/ PPC::Runtime::ASM::bl(fn_80200208);
RUNTIME_PPC_JUMP_LABEL(.L_80200098, 0x80200098) //this is a jump label
/*80200098 001FCE98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8020009C 001FCE9C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802000A0 001FCEA0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802000A4 001FCEA4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802000A8 001FCEA8*/ PPC::Runtime::ASM::blr();
}