//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80461B88.hpp"
#include "fn_80461B88.hpp"
#include "fn_80461B88.hpp"



void fn_80461C64(PPC::Runtime::GCContext* context)
{
/*80461C64 0045EA64*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*80461C68 0045EA68*/ PPC::Runtime::ASM::mflr(context->r0);
/*80461C6C 0045EA6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80461C70 0045EA70*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*80461C74 0045EA74*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*80461C78 0045EA78*/ PPC::Runtime::ASM::mulli(context->r0, context->r4, 0x38);
/*80461C7C 0045EA7C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80461C80 0045EA80*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*80461C84 0045EA84*/ PPC::Runtime::ASM::add(context->r29, context->r30, context->r0);
/*80461C88 0045EA88*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*80461C8C 0045EA8C*/ PPC::Runtime::ASM::lhz(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r29));
/*80461C90 0045EA90*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80461C94 0045EA94*/ PPC::Runtime::ASM::mr(context->r26, context->r5);
/*80461C98 0045EA98*/ PPC::Runtime::ASM::lhz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80461C9C 0045EA9C*/ PPC::Runtime::ASM::cmpwi(context->r24, 0x0);
/*80461CA0 0045EAA0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 1);
/*80461CA4 0045EAA4*/ PPC::Runtime::ASM::slwi(context->r25, context->r5, 2);
/*80461CA8 0045EAA8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80461CAC 0045EAAC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80461CB0 0045EAB0*/ PPC::Runtime::ASM::add(context->r0, context->r4, context->r0);
/*80461CB4 0045EAB4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80461CB8 0045EAB8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80461CBC 0045EABC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80461CC0 0045EAC0*/ PPC::Runtime::ASM::ble(.L_80461CDC);
/*80461CC4 0045EAC4*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80461CC8 0045EAC8*/ PPC::Runtime::ASM::mr(context->r7, context->r27);
/*80461CCC 0045EACC*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*80461CD0 0045EAD0*/ PPC::Runtime::ASM::bl(fn_80461B88);
/*80461CD4 0045EAD4*/ PPC::Runtime::ASM::add(context->r31, context->r31, context->r25);
/*80461CD8 0045EAD8*/ PPC::Runtime::ASM::subi(context->r24, context->r24, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80461CDC, 0x80461CDC) //this is a jump label
/*80461CDC 0045EADC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*80461CE0 0045EAE0*/ PPC::Runtime::ASM::mr(context->r29, context->r27);
/*80461CE4 0045EAE4*/ PPC::Runtime::ASM::mr(context->r28, context->r26);
/*80461CE8 0045EAE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80461CEC 0045EAEC*/ PPC::Runtime::ASM::b(.L_80461D10);
RUNTIME_PPC_JUMP_LABEL(.L_80461CF0, 0x80461CF0) //this is a jump label
/*80461CF0 0045EAF0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80461CF4 0045EAF4*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80461CF8 0045EAF8*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*80461CFC 0045EAFC*/ PPC::Runtime::ASM::mr(context->r7, context->r29);
/*80461D00 0045EB00*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*80461D04 0045EB04*/ PPC::Runtime::ASM::bl(fn_80461B88);
/*80461D08 0045EB08*/ PPC::Runtime::ASM::add(context->r31, context->r31, context->r25);
/*80461D0C 0045EB0C*/ PPC::Runtime::ASM::subi(context->r24, context->r24, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80461D10, 0x80461D10) //this is a jump label
/*80461D10 0045EB10*/ PPC::Runtime::ASM::cmpwi(context->r24, 0x1);
/*80461D14 0045EB14*/ PPC::Runtime::ASM::bgt(.L_80461CF0);
/*80461D18 0045EB18*/ PPC::Runtime::ASM::cmpwi(context->r24, 0x0);
/*80461D1C 0045EB1C*/ PPC::Runtime::ASM::ble(.L_80461D40);
/*80461D20 0045EB20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80461D24 0045EB24*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80461D28 0045EB28*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80461D2C 0045EB2C*/ PPC::Runtime::ASM::mr(context->r5, context->r26);
/*80461D30 0045EB30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80461D34 0045EB34*/ PPC::Runtime::ASM::mr(context->r7, context->r27);
/*80461D38 0045EB38*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*80461D3C 0045EB3C*/ PPC::Runtime::ASM::bl(fn_80461B88);
RUNTIME_PPC_JUMP_LABEL(.L_80461D40, 0x80461D40) //this is a jump label
/*80461D40 0045EB40*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*80461D44 0045EB44*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*80461D48 0045EB48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80461D4C 0045EB4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80461D50 0045EB50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*80461D54 0045EB54*/ PPC::Runtime::ASM::blr();
}