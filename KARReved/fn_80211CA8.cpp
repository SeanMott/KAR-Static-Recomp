//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80200D10.hpp"
#include "fn_80205310.hpp"
#include "fn_80204FAC.hpp"
#include "fn_801FC398.hpp"
#include "fn_80206E1C.hpp"
#include "fn_80209CE4.hpp"
#include "fn_8021A0E0.hpp"



void fn_80211CA8(PPC::Runtime::GCContext* context)
{
/*80211CA8 0020EAA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80211CAC 0020EAAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80211CB0 0020EAB0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2554 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80211CB4 0020EAB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80211CB8 0020EAB8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80211CBC 0020EABC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80211CC0 0020EAC0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80211CC4 0020EAC4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r31));
/*80211CC8 0020EAC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80211CCC 0020EACC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80211CD0 0020EAD0*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*80211CD4 0020EAD4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r31));
/*80211CD8 0020EAD8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r31));
/*80211CDC 0020EADC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80211CE0 0020EAE0*/ PPC::Runtime::ASM::bge(.L_80211CE8);
/*80211CE4 0020EAE4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80211CE8, 0x80211CE8) //this is a jump label
/*80211CE8 0020EAE8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb58, context->r31));
/*80211CEC 0020EAEC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E255C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80211CF0 0020EAF0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2564 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80211CF4 0020EAF4*/ PPC::Runtime::ASM::fadds(context->f1, context->f2, context->f1);
/*80211CF8 0020EAF8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb58, context->r31));
/*80211CFC 0020EAFC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb58, context->r31));
/*80211D00 0020EB00*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80211D04 0020EB04*/ PPC::Runtime::ASM::ble(.L_80211D0C);
/*80211D08 0020EB08*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb58, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80211D0C, 0x80211D0C) //this is a jump label
/*80211D0C 0020EB0C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80211D10 0020EB10*/ PPC::Runtime::ASM::bl(fn_80200D10);
/*80211D14 0020EB14*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80211D18 0020EB18*/ PPC::Runtime::ASM::beq(.L_80211DD4);
/*80211D1C 0020EB1C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c0, context->r31));
/*80211D20 0020EB20*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x95c, context->r31));
/*80211D24 0020EB24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r31));
/*80211D28 0020EB28*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80211D2C 0020EB2C*/ PPC::Runtime::ASM::bne(.L_80211D54);
/*80211D30 0020EB30*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80211D34 0020EB34*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2558 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80211D38 0020EB38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r31));
/*80211D3C 0020EB3C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80211D40 0020EB40*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2554 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80211D44 0020EB44*/ PPC::Runtime::ASM::bl(fn_80205310);
/*80211D48 0020EB48*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x95c, context->r31));
/*80211D4C 0020EB4C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80211D50 0020EB50*/ PPC::Runtime::ASM::bl(fn_80204FAC);
RUNTIME_PPC_JUMP_LABEL(.L_80211D54, 0x80211D54) //this is a jump label
/*80211D54 0020EB54*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r31));
/*80211D58 0020EB58*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80211D5C 0020EB5C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*80211D60 0020EB60*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2550 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80211D64 0020EB64*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0a, context->r31));
/*80211D68 0020EB68*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80211D6C 0020EB6C*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80211D70 0020EB70*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2554 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80211D74 0020EB74*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x87c, context->r31));
/*80211D78 0020EB78*/ PPC::Runtime::ASM::li(context->r4, 0xf);
/*80211D7C 0020EB7C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80211D80 0020EB80*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*80211D84 0020EB84*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80211D88 0020EB88*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80211D8C 0020EB8C*/ PPC::Runtime::ASM::bl(fn_80206E1C);
/*80211D90 0020EB90*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80211D94 0020EB94*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80211D98 0020EB98*/ PPC::Runtime::ASM::bl(fn_80209CE4);
/*80211D9C 0020EB9C*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*80211DA0 0020EBA0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80211DA4 0020EBA4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4c, context->r31));
/*80211DA8 0020EBA8*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb50, context->r31));
/*80211DAC 0020EBAC*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb52, context->r31));
/*80211DB0 0020EBB0*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb54, context->r31));
/*80211DB4 0020EBB4*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb56, context->r31));
/*80211DB8 0020EBB8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb48, context->r31));
/*80211DBC 0020EBBC*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4a, context->r31));
/*80211DC0 0020EBC0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80211DC4 0020EBC4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80211DC8 0020EBC8*/ PPC::Runtime::ASM::beq(.L_80211DD4);
/*80211DCC 0020EBCC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80211DD0 0020EBD0*/ PPC::Runtime::ASM::bl(fn_8021A0E0);
RUNTIME_PPC_JUMP_LABEL(.L_80211DD4, 0x80211DD4) //this is a jump label
/*80211DD4 0020EBD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80211DD8 0020EBD8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80211DDC 0020EBDC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80211DE0 0020EBE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80211DE4 0020EBE4*/ PPC::Runtime::ASM::blr();
}