//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80172C3C.hpp"
#include "fn_80172CA8.hpp"
#include "fn_800547E0.hpp"
#include "fn_80138B10.hpp"
#include "fn_800550F4.hpp"



void fn_80176CF0(PPC::Runtime::GCContext* context)
{
/*80176CF0 00173AF0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80176CF4 00173AF4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80176CF8 00173AF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80176CFC 00173AFC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80176D00 00173B00*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80176D04 00173B04*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80176D08 00173B08*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80176D0C 00173B0C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80176D10 00173B10*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*80176D14 00173B14*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80176D18 00173B18*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80176D1C 00173B1C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80176D20 00173B20*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80176D24 00173B24*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r29));
/*80176D28 00173B28*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80176D2C 00173B2C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80176D30 00173B30*/ PPC::Runtime::ASM::bgt(.L_80176D44);
/*80176D34 00173B34*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80176D38 00173B38*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80176D3C 00173B3C*/ PPC::Runtime::ASM::bl(fn_80172C3C);
/*80176D40 00173B40*/ PPC::Runtime::ASM::b(.L_80176D50);
RUNTIME_PPC_JUMP_LABEL(.L_80176D44, 0x80176D44) //this is a jump label
/*80176D44 00173B44*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r29));
/*80176D48 00173B48*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80176D4C 00173B4C*/ PPC::Runtime::ASM::bl(fn_80172CA8);
RUNTIME_PPC_JUMP_LABEL(.L_80176D50, 0x80176D50) //this is a jump label
/*80176D50 00173B50*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80176D54 00173B54*/ PPC::Runtime::ASM::bne(.L_80176D68);
/*80176D58 00173B58*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6D08 @ Get_MemoryOffset_SDA21);
/*80176D5C 00173B5C*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*80176D60 00173B60*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6D10 @ Get_MemoryOffset_SDA21);
/*80176D64 00173B64*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80176D68, 0x80176D68) //this is a jump label
/*80176D68 00173B68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80176D6C 00173B6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80176D70 00173B70*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80176D74 00173B74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80176D78 00173B78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80176D7C 00173B7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*80176D80 00173B80*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80176D84 00173B84*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80176D88 00173B88*/ PPC::Runtime::ASM::bne(.L_80176DD4);
/*80176D8C 00173B8C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80176D90 00173B90*/ PPC::Runtime::ASM::beq(.L_80176DD4);
/*80176D94 00173B94*/ PPC::Runtime::ASM::bne(.L_80176DA8);
/*80176D98 00173B98*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6D08 @ Get_MemoryOffset_SDA21);
/*80176D9C 00173B9C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80176DA0 00173BA0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6D10 @ Get_MemoryOffset_SDA21);
/*80176DA4 00173BA4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80176DA8, 0x80176DA8) //this is a jump label
/*80176DA8 00173BA8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80176DAC 00173BAC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80176DB0 00173BB0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80176DB4 00173BB4*/ PPC::Runtime::ASM::bne(.L_80176DC4);
/*80176DB8 00173BB8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80176DBC 00173BBC*/ PPC::Runtime::ASM::beq(.L_80176DC4);
/*80176DC0 00173BC0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80176DC4, 0x80176DC4) //this is a jump label
/*80176DC4 00173BC4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80176DC8 00173BC8*/ PPC::Runtime::ASM::bne(.L_80176DD4);
/*80176DCC 00173BCC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80176DD0 00173BD0*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80176DD4, 0x80176DD4) //this is a jump label
/*80176DD4 00173BD4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80176DD8 00173BD8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80176DDC 00173BDC*/ PPC::Runtime::ASM::bne(.L_80176E24);
/*80176DE0 00173BE0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80176DE4 00173BE4*/ PPC::Runtime::ASM::bl(fn_800547E0);
/*80176DE8 00173BE8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80176DEC 00173BEC*/ PPC::Runtime::ASM::bne(.L_80176E24);
/*80176DF0 00173BF0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80176DF4 00173BF4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0C60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80176DF8 00173BF8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*80176DFC 00173BFC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80176E00 00173C00*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0C64 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80176E04 00173C04*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80176E08 00173C08*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcf0, context->r30));
/*80176E0C 00173C0C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80176E10 00173C10*/ PPC::Runtime::ASM::bl(fn_80138B10);
/*80176E14 00173C14*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80176E18 00173C18*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80176E1C 00173C1C*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80176E20 00173C20*/ PPC::Runtime::ASM::bl(fn_800550F4);
RUNTIME_PPC_JUMP_LABEL(.L_80176E24, 0x80176E24) //this is a jump label
/*80176E24 00173C24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80176E28 00173C28*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80176E2C 00173C2C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80176E30 00173C30*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80176E34 00173C34*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80176E38 00173C38*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80176E3C 00173C3C*/ PPC::Runtime::ASM::blr();
}