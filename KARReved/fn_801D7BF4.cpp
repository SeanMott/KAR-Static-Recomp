//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8000A200.hpp"
#include "fn___flush_callback_Fv_zdOptionUse3.hpp"
#include "fn_80189D34.hpp"
#include "fn_8018A350.hpp"
#include "fn_80189FD4.hpp"
#include "fn_hwOff.hpp"



void fn_801D7BF4(PPC::Runtime::GCContext* context)
{
/*801D7BF4 001D49F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801D7BF8 001D49F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D7BFC 001D49FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801D7C00 001D4A00*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801D7C04 001D4A04*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801D7C08 001D4A08*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801D7C0C 001D4A0C*/ PPC::Runtime::ASM::bl(fn_8000A200);
/*801D7C10 001D4A10*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801D7C14 001D4A14*/ PPC::Runtime::ASM::beq(.L_801D7D40);
/*801D7C18 001D4A18*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc34, context->r31));
/* 801D7C1C 001D4A1C  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*801D7C20 001D4A20*/ PPC::Runtime::ASM::beq(.L_801D7C4C);
/*801D7C24 001D4A24*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc39, context->r31));
/* 801D7C28 001D4A28  54 60 FF FF */ extrwi. context->r0 , context->r3 , 1 , 30
/*801D7C2C 001D4A2C*/ PPC::Runtime::ASM::bne(.L_801D7C5C);
/*801D7C30 001D4A30*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*801D7C34 001D4A34*/ PPC::Runtime::ASM::rlwimi(context->r3, context->r0, 1, 30, 30);
/*801D7C38 001D4A38*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc39, context->r31));
/*801D7C3C 001D4A3C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D7C40 001D4A40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r3));
/*801D7C44 001D4A44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb38, context->r31));
/*801D7C48 001D4A48*/ PPC::Runtime::ASM::b(.L_801D7C5C);
RUNTIME_PPC_JUMP_LABEL(.L_801D7C4C, 0x801D7C4C) //this is a jump label
/*801D7C4C 001D4A4C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc39, context->r31));
/*801D7C50 001D4A50*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801D7C54 001D4A54*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 1, 30, 30);
/*801D7C58 001D4A58*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc39, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801D7C5C, 0x801D7C5C) //this is a jump label
/*801D7C5C 001D4A5C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb38, context->r31));
/*801D7C60 001D4A60*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801D7C64 001D4A64*/ PPC::Runtime::ASM::beq(.L_801D7D34);
/*801D7C68 001D4A68*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*801D7C6C 001D4A6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb38, context->r31));
/*801D7C70 001D4A70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*801D7C74 001D4A74*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801D7C78 001D4A78*/ PPC::Runtime::ASM::beq(.L_801D7D34);
/*801D7C7C 001D4A7C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc39, context->r31));
/* 801D7C80 001D4A80  54 00 E7 BF */ extrwi. context->r0 , context->r0 , 2 , 26
/*801D7C84 001D4A84*/ PPC::Runtime::ASM::bne(.L_801D7D34);
/*801D7C88 001D4A88*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x354);
/*801D7C8C 001D4A8C*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801D7C90 001D4A90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x660, context->r31));
/*801D7C94 001D4A94*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*801D7C98 001D4A98*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0xc8);
/*801D7C9C 001D4A9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r3));
/*801D7CA0 001D4AA0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801D7CA4 001D4AA4*/ PPC::Runtime::ASM::bne(.L_801D7CB8);
/*801D7CA8 001D4AA8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801D7CAC 001D4AAC*/ PPC::Runtime::ASM::bl(fn___flush_callback_Fv_zdOptionUse3);
/*801D7CB0 001D4AB0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801D7CB4 001D4AB4*/ PPC::Runtime::ASM::bl(fn_80189D34);
RUNTIME_PPC_JUMP_LABEL(.L_801D7CB8, 0x801D7CB8) //this is a jump label
/*801D7CB8 001D4AB8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46c, context->r31));
/*801D7CBC 001D4ABC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801D7CC0 001D4AC0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x584, context->r31));
/*801D7CC4 001D4AC4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801D7CC8 001D4AC8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1BA4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D7CCC 001D4ACC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*801D7CD0 001D4AD0*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*801D7CD4 001D4AD4*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801D7CD8 001D4AD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801D7CDC 001D4ADC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*801D7CE0 001D4AE0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58c, context->r31));
/*801D7CE4 001D4AE4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*801D7CE8 001D4AE8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*801D7CEC 001D4AEC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*801D7CF0 001D4AF0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x418, context->r31));
/*801D7CF4 001D4AF4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x400, context->r31));
/*801D7CF8 001D4AF8*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f3, context->f0);
/*801D7CFC 001D4AFC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D7D00 001D4B00*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x41c, context->r31));
/*801D7D04 001D4B04*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x404, context->r31));
/*801D7D08 001D4B08*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f3, context->f0);
/*801D7D0C 001D4B0C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D7D10 001D4B10*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x420, context->r31));
/*801D7D14 001D4B14*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x408, context->r31));
/*801D7D18 001D4B18*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f3, context->f0);
/*801D7D1C 001D4B1C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801D7D20 001D4B20*/ PPC::Runtime::ASM::bl(fn_8018A350);
/*801D7D24 001D4B24*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801D7D28 001D4B28*/ PPC::Runtime::ASM::bl(fn_80189FD4);
/*801D7D2C 001D4B2C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801D7D30 001D4B30*/ PPC::Runtime::ASM::b(.L_801D7D44);
RUNTIME_PPC_JUMP_LABEL(.L_801D7D34, 0x801D7D34) //this is a jump label
/*801D7D34 001D4B34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x660, context->r31));
/*801D7D38 001D4B38*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801D7D3C 001D4B3C*/ PPC::Runtime::ASM::bl(fn_hwOff);
RUNTIME_PPC_JUMP_LABEL(.L_801D7D40, 0x801D7D40) //this is a jump label
/*801D7D40 001D4B40*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801D7D44, 0x801D7D44) //this is a jump label
/*801D7D44 001D4B44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801D7D48 001D4B48*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801D7D4C 001D4B4C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801D7D50 001D4B50*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D7D54 001D4B54*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801D7D58 001D4B58*/ PPC::Runtime::ASM::blr();
}