//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802043C8.hpp"
#include "fn_800CEAA4.hpp"
#include "fn_80062DD0.hpp"
#include "fn_80062DD0.hpp"
#include "fn_80062ECC.hpp"
#include "fn_80209CE4.hpp"
#include "fn_80209CE4.hpp"
#include "fn_800CF3AC.hpp"
#include "fn_800CF44C.hpp"
#include "fn_800CF44C.hpp"
#include "fn_800CF3AC.hpp"
#include "fn_8020728C.hpp"



void fn_80207CE8(PPC::Runtime::GCContext* context)
{
/*80207CE8 00204AE8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80207CEC 00204AEC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80207CF0 00204AF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80207CF4 00204AF4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80207CF8 00204AF8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80207CFC 00204AFC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80207D00 00204B00*/ PPC::Runtime::ASM::bl(fn_802043C8);
/*80207D04 00204B04*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80207D08 00204B08*/ PPC::Runtime::ASM::beq(.L_80207DD8);
/*80207D0C 00204B0C*/ PPC::Runtime::ASM::bl(fn_800CEAA4);
/*80207D10 00204B10*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80207D14 00204B14*/ PPC::Runtime::ASM::beq(.L_80207D20);
/*80207D18 00204B18*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2370 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80207D1C 00204B1C*/ PPC::Runtime::ASM::b(.L_80207D54);
RUNTIME_PPC_JUMP_LABEL(.L_80207D20, 0x80207D20) //this is a jump label
/*80207D20 00204B20*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x340);
/*80207D24 00204B24*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x664);
/*80207D28 00204B28*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80207D2C 00204B2C*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*80207D30 00204B30*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80207D34 00204B34*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x340);
/*80207D38 00204B38*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*80207D3C 00204B3C*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*80207D40 00204B40*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x334);
/*80207D44 00204B44*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*80207D48 00204B48*/ PPC::Runtime::ASM::bl(fn_80062ECC);
/*80207D4C 00204B4C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E23D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80207D50 00204B50*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_80207D54, 0x80207D54) //this is a jump label
/*80207D54 00204B54*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E23D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80207D58 00204B58*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80207D5C 00204B5C*/ PPC::Runtime::ASM::bge(.L_80207D78);
/*80207D60 00204B60*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80207D64 00204B64*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80207D68 00204B68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5f8, context->r31));
/*80207D6C 00204B6C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80207D70 00204B70*/ PPC::Runtime::ASM::bl(fn_80209CE4);
/*80207D74 00204B74*/ PPC::Runtime::ASM::b(.L_80207D8C);
RUNTIME_PPC_JUMP_LABEL(.L_80207D78, 0x80207D78) //this is a jump label
/*80207D78 00204B78*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*80207D7C 00204B7C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80207D80 00204B80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5f8, context->r31));
/*80207D84 00204B84*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80207D88 00204B88*/ PPC::Runtime::ASM::bl(fn_80209CE4);
RUNTIME_PPC_JUMP_LABEL(.L_80207D8C, 0x80207D8C) //this is a jump label
/*80207D8C 00204B8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5f8, context->r31));
/*80207D90 00204B90*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80207D94 00204B94*/ PPC::Runtime::ASM::bne(.L_80207DB4);
/*80207D98 00204B98*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5dc, context->r31));
/*80207D9C 00204B9C*/ PPC::Runtime::ASM::bl(fn_800CF3AC);
/*80207DA0 00204BA0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d4, context->r31));
/*80207DA4 00204BA4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5dc, context->r31));
/*80207DA8 00204BA8*/ PPC::Runtime::ASM::bl(fn_800CF44C);
/*80207DAC 00204BAC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d8, context->r31));
/*80207DB0 00204BB0*/ PPC::Runtime::ASM::b(.L_80207DCC);
RUNTIME_PPC_JUMP_LABEL(.L_80207DB4, 0x80207DB4) //this is a jump label
/*80207DB4 00204BB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5dc, context->r31));
/*80207DB8 00204BB8*/ PPC::Runtime::ASM::bl(fn_800CF44C);
/*80207DBC 00204BBC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d4, context->r31));
/*80207DC0 00204BC0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5dc, context->r31));
/*80207DC4 00204BC4*/ PPC::Runtime::ASM::bl(fn_800CF3AC);
/*80207DC8 00204BC8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80207DCC, 0x80207DCC) //this is a jump label
/*80207DCC 00204BCC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80207DD0 00204BD0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80207DD4 00204BD4*/ PPC::Runtime::ASM::bl(fn_8020728C);
RUNTIME_PPC_JUMP_LABEL(.L_80207DD8, 0x80207DD8) //this is a jump label
/*80207DD8 00204BD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80207DDC 00204BDC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80207DE0 00204BE0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80207DE4 00204BE4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80207DE8 00204BE8*/ PPC::Runtime::ASM::blr();
}