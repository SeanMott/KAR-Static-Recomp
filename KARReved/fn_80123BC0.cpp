//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_8022D584.hpp"
#include "fn_80123E34.hpp"
#include "fn_800547E0.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_80114D08.hpp"



void fn_80123BC0(PPC::Runtime::GCContext* context)
{
/*80123BC0 001209C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80123BC4 001209C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80123BC8 001209C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80123BCC 001209CC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80123BD0 001209D0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80123BD4 001209D4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80123BD8 001209D8*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80123BDC 001209DC*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80123BE0 001209E0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80123BE4 001209E4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80123BE8 001209E8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*80123BEC 001209EC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80123BF0 001209F0*/ PPC::Runtime::ASM::extrwi(context->r29, context->r0, 2, 28);
/*80123BF4 001209F4*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 4, 24);
/*80123BF8 001209F8*/ PPC::Runtime::ASM::bl(fn_8022D584);
/*80123BFC 001209FC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80123C00 00120A00*/ PPC::Runtime::ASM::bne(.L_80123C10);
/*80123C04 00120A04*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80123C08 00120A08*/ PPC::Runtime::ASM::bl(fn_80123E34);
/*80123C0C 00120A0C*/ PPC::Runtime::ASM::b(.L_80123C74);
RUNTIME_PPC_JUMP_LABEL(.L_80123C10, 0x80123C10) //this is a jump label
/*80123C10 00120A10*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80123C14 00120A14*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80123C18 00120A18*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80123C1C 00120A1C*/ PPC::Runtime::ASM::bl(fn_800547E0);
/*80123C20 00120A20*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80123C24 00120A24*/ PPC::Runtime::ASM::bne(.L_80123C74);
/*80123C28 00120A28*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*80123C2C 00120A2C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80123C30 00120A30*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80123C34 00120A34*/ PPC::Runtime::ASM::bne(.L_80123C40);
/*80123C38 00120A38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5b4, context->r31));
/*80123C3C 00120A3C*/ PPC::Runtime::ASM::b(.L_80123C5C);
RUNTIME_PPC_JUMP_LABEL(.L_80123C40, 0x80123C40) //this is a jump label
/*80123C40 00120A40*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*80123C44 00120A44*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80123C48 00120A48*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80123C4C 00120A4C*/ PPC::Runtime::ASM::bne(.L_80123C58);
/*80123C50 00120A50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5b8, context->r31));
/*80123C54 00120A54*/ PPC::Runtime::ASM::b(.L_80123C5C);
RUNTIME_PPC_JUMP_LABEL(.L_80123C58, 0x80123C58) //this is a jump label
/*80123C58 00120A58*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5bc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80123C5C, 0x80123C5C) //this is a jump label
/*80123C5C 00120A5C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80123C60 00120A60*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80123C64 00120A64*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFEA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80123C68 00120A68*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80123C6C 00120A6C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFEAC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80123C70 00120A70*/ PPC::Runtime::ASM::bl(fn_80114D08);
RUNTIME_PPC_JUMP_LABEL(.L_80123C74, 0x80123C74) //this is a jump label
/*80123C74 00120A74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80123C78 00120A78*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80123C7C 00120A7C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80123C80 00120A80*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80123C84 00120A84*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80123C88 00120A88*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80123C8C 00120A8C*/ PPC::Runtime::ASM::blr();
}