//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8003D5F0.hpp"
#include "fn_getRuleNum.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_8000979C.hpp"
#include "fn_8000A0F8.hpp"
#include "fn_800092D8.hpp"
#include "fn_stGetStageKind_groundId.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_80009534.hpp"
#include "fn_80230294.hpp"



void fn_8004CFE0(PPC::Runtime::GCContext* context)
{
/*8004CFE0 00049DE0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8004CFE4 00049DE4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004CFE8 00049DE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004CFEC 00049DEC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004CFF0 00049DF0*/ PPC::Runtime::ASM::bl(fn_8003D5F0);
/*8004CFF4 00049DF4*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004CFF8 00049DF8*/ PPC::Runtime::ASM::bne(.L_8004D068);
/*8004CFFC 00049DFC*/ PPC::Runtime::ASM::bl(fn_getRuleNum);
/*8004D000 00049E00*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004D004 00049E04*/ PPC::Runtime::ASM::bne(.L_8004D054);
/*8004D008 00049E08*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004D00C, 0x8004D00C) //this is a jump label
/*8004D00C 00049E0C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004D010 00049E10*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004D014 00049E14*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004D018 00049E18*/ PPC::Runtime::ASM::bne(.L_8004D034);
/*8004D01C 00049E1C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004D020 00049E20*/ PPC::Runtime::ASM::bl(fn_8000979C);
/*8004D024 00049E24*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004D028 00049E28*/ PPC::Runtime::ASM::beq(.L_8004D034);
/*8004D02C 00049E2C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8004D030 00049E30*/ PPC::Runtime::ASM::b(.L_8004D044);
RUNTIME_PPC_JUMP_LABEL(.L_8004D034, 0x8004D034) //this is a jump label
/*8004D034 00049E34*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8004D038 00049E38*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8004D03C 00049E3C*/ PPC::Runtime::ASM::blt(.L_8004D00C);
/*8004D040 00049E40*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004D044, 0x8004D044) //this is a jump label
/*8004D044 00049E44*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8004D048 00049E48*/ PPC::Runtime::ASM::beq(.L_8004D068);
/*8004D04C 00049E4C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8004D050 00049E50*/ PPC::Runtime::ASM::b(.L_8004D06C);
RUNTIME_PPC_JUMP_LABEL(.L_8004D054, 0x8004D054) //this is a jump label
/*8004D054 00049E54*/ PPC::Runtime::ASM::bl(fn_8000A0F8);
/*8004D058 00049E58*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004D05C 00049E5C*/ PPC::Runtime::ASM::bgt(.L_8004D068);
/*8004D060 00049E60*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8004D064 00049E64*/ PPC::Runtime::ASM::b(.L_8004D06C);
RUNTIME_PPC_JUMP_LABEL(.L_8004D068, 0x8004D068) //this is a jump label
/*8004D068 00049E68*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004D06C, 0x8004D06C) //this is a jump label
/*8004D06C 00049E6C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8004D070 00049E70*/ PPC::Runtime::ASM::beq(.L_8004D0D0);
/*8004D074 00049E74*/ PPC::Runtime::ASM::bl(fn_800092D8);
/*8004D078 00049E78*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8004D07C 00049E7C*/ PPC::Runtime::ASM::bl(fn_stGetStageKind_groundId);
/*8004D080 00049E80*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*8004D084 00049E84*/ PPC::Runtime::ASM::bne(.L_8004D0D0);
/*8004D088 00049E88*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004D08C, 0x8004D08C) //this is a jump label
/*8004D08C 00049E8C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004D090 00049E90*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004D094 00049E94*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004D098 00049E98*/ PPC::Runtime::ASM::bne(.L_8004D0C4);
/*8004D09C 00049E9C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004D0A0 00049EA0*/ PPC::Runtime::ASM::bl(fn_80009534);
/*8004D0A4 00049EA4*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004D0A8 00049EA8*/ PPC::Runtime::ASM::bne(.L_8004D0C4);
/*8004D0AC 00049EAC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004D0B0 00049EB0*/ PPC::Runtime::ASM::bl(fn_80230294);
/*8004D0B4 00049EB4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004D0B8 00049EB8*/ PPC::Runtime::ASM::beq(.L_8004D0C4);
/*8004D0BC 00049EBC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8004D0C0 00049EC0*/ PPC::Runtime::ASM::b(.L_8004D0D4);
RUNTIME_PPC_JUMP_LABEL(.L_8004D0C4, 0x8004D0C4) //this is a jump label
/*8004D0C4 00049EC4*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8004D0C8 00049EC8*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8004D0CC 00049ECC*/ PPC::Runtime::ASM::blt(.L_8004D08C);
RUNTIME_PPC_JUMP_LABEL(.L_8004D0D0, 0x8004D0D0) //this is a jump label
/*8004D0D0 00049ED0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004D0D4, 0x8004D0D4) //this is a jump label
/*8004D0D4 00049ED4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004D0D8 00049ED8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004D0DC 00049EDC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004D0E0 00049EE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8004D0E4 00049EE4*/ PPC::Runtime::ASM::blr();
}