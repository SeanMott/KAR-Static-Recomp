//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_80133348.hpp"
#include "fn_DoesSomeShit_1.hpp"
#include "fn_80133368.hpp"
#include "fn_DoesSomeShit_1.hpp"
#include "fn_80133348.hpp"
#include "fn_DoesSomeShit_2.hpp"
#include "fn_80133348.hpp"
#include "fn_DoesSomeShit_1.hpp"



void fn_8001AE9C(PPC::Runtime::GCContext* context)
{
/*8001AE9C 00017C9C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8001AEA0 00017CA0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8001AEA4 00017CA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8001AEA8 00017CA8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8001AEAC 00017CAC*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8001AEB0 00017CB0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8001AEB4 00017CB4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8001AEB8 00017CB8*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8001AEBC 00017CBC*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*8001AEC0 00017CC0*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x6e);
/*8001AEC4 00017CC4*/ PPC::Runtime::ASM::mulli(context->r3, context->r0, 0x5);
/*8001AEC8 00017CC8*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8001AECC 00017CCC*/ PPC::Runtime::ASM::add(context->r3, context->r6, context->r3);
/*8001AED0 00017CD0*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8001AED4 00017CD4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8001AED8 00017CD8*/ PPC::Runtime::ASM::extsb(context->r3, context->r0);
/*8001AEDC 00017CDC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8001AEE0 00017CE0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x11);
/*8001AEE4 00017CE4*/ PPC::Runtime::ASM::bgt(.L_8001AF70);
/*8001AEE8 00017CE8*/ PPC::Runtime::ASM::lis(context->r3, jumptable_80496814 @ Get_MemoryOffset_HighBit);
/*8001AEEC 00017CEC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8001AEF0 00017CF0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, jumptable_80496814 @ Get_MemoryOffset_LowBit);
/*8001AEF4 00017CF4*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*8001AEF8 00017CF8*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8001AEFC 00017CFC*/ PPC::Runtime::ASM::bctr();
/*8001AF00 00017D00*/ PPC::Runtime::ASM::bl(fn_80133348);
/*8001AF04 00017D04*/ PPC::Runtime::ASM::bl(fn_DoesSomeShit_1);
/*8001AF08 00017D08*/ PPC::Runtime::ASM::b(.L_8001AF70);
/*8001AF0C 00017D0C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r6));
/*8001AF10 00017D10*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8001AF14 00017D14*/ PPC::Runtime::ASM::bne(.L_8001AF24);
/*8001AF18 00017D18*/ PPC::Runtime::ASM::bl(fn_80133368);
/*8001AF1C 00017D1C*/ PPC::Runtime::ASM::bl(fn_DoesSomeShit_1);
/*8001AF20 00017D20*/ PPC::Runtime::ASM::b(.L_8001AF70);
RUNTIME_PPC_JUMP_LABEL(.L_8001AF24, 0x8001AF24) //this is a jump label
/*8001AF24 00017D24*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8001AF28 00017D28*/ PPC::Runtime::ASM::extsb(context->r5, context->r3);
/*8001AF2C 00017D2C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8001AF30 00017D30*/ PPC::Runtime::ASM::mulli(context->r4, context->r0, 0x5);
/*8001AF34 00017D34*/ PPC::Runtime::ASM::add(context->r3, context->r6, context->r0);
/*8001AF38 00017D38*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*8001AF3C 00017D3C*/ PPC::Runtime::ASM::add(context->r3, context->r6, context->r4);
/*8001AF40 00017D40*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8001AF44 00017D44*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8001AF48 00017D48*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r3));
/*8001AF4C 00017D4C*/ PPC::Runtime::ASM::extsb(context->r3, context->r0);
/*8001AF50 00017D50*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8001AF54 00017D54*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*8001AF58 00017D58*/ PPC::Runtime::ASM::bne(.L_8001AF68);
/*8001AF5C 00017D5C*/ PPC::Runtime::ASM::bl(fn_80133348);
/*8001AF60 00017D60*/ PPC::Runtime::ASM::bl(fn_DoesSomeShit_2);
/*8001AF64 00017D64*/ PPC::Runtime::ASM::b(.L_8001AF70);
RUNTIME_PPC_JUMP_LABEL(.L_8001AF68, 0x8001AF68) //this is a jump label
/*8001AF68 00017D68*/ PPC::Runtime::ASM::bl(fn_80133348);
/*8001AF6C 00017D6C*/ PPC::Runtime::ASM::bl(fn_DoesSomeShit_1);
RUNTIME_PPC_JUMP_LABEL(.L_8001AF70, 0x8001AF70) //this is a jump label
/*8001AF70 00017D70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8001AF74 00017D74*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8001AF78 00017D78*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8001AF7C 00017D7C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8001AF80 00017D80*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8001AF84 00017D84*/ PPC::Runtime::ASM::blr();
}