//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802708A0.hpp"
#include "fn_80262FDC.hpp"
#include "fn_8026D1FC.hpp"
#include "fn_800B8AAC.hpp"
#include "fn_800B8B04.hpp"
#include "fn_800B8B5C.hpp"
#include "fn_80262FDC.hpp"
#include "fn_80262FDC.hpp"
#include "fn_80262FDC.hpp"
#include "fn_80276650.hpp"
#include "fn_80276050.hpp"
#include "fn_80276050.hpp"



void fn_80270BAC(PPC::Runtime::GCContext* context)
{
/*80270BAC 0026D9AC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xd0, context->r1));
/*80270BB0 0026D9B0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80270BB4 0026D9B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r1));
/*80270BB8 0026D9B8*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*80270BBC 0026D9BC*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1)0, context->qr0);
/*80270BC0 0026D9C0*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*80270BC4 0026D9C4*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1)0, context->qr0);
/*80270BC8 0026D9C8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r1));
/*80270BCC 0026D9CC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*80270BD0 0026D9D0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80270BD4 0026D9D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r3));
/*80270BD8 0026D9D8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x778, context->r3));
/*80270BDC 0026D9DC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80270BE0 0026D9E0*/ PPC::Runtime::ASM::beq(.L_80270BF8);
/*80270BE4 0026D9E4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80270BE8 0026D9E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r4));
/*80270BEC 0026D9EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*80270BF0 0026D9F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*80270BF4 0026D9F4*/ PPC::Runtime::ASM::b(.L_80270E3C);
RUNTIME_PPC_JUMP_LABEL(.L_80270BF8, 0x80270BF8) //this is a jump label
/*80270BF8 0026D9F8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x70);
/*80270BFC 0026D9FC*/ PPC::Runtime::ASM::bl(fn_802708A0);
/*80270C00 0026DA00*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x70);
/*80270C04 0026DA04*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x64);
/*80270C08 0026DA08*/ PPC::Runtime::ASM::bl(fn_80262FDC);
/*80270C0C 0026DA0C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80270C10 0026DA10*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80270C14 0026DA14*/ PPC::Runtime::ASM::blt(.L_80270E3C);
/*80270C18 0026DA18*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3100 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80270C1C 0026DA1C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80270C20 0026DA20*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x64);
/*80270C24 0026DA24*/ PPC::Runtime::ASM::bl(fn_8026D1FC);
/*80270C28 0026DA28*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x778, context->r30));
/*80270C2C 0026DA2C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x28);
/*80270C30 0026DA30*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80270C34 0026DA34*/ PPC::Runtime::ASM::bl(fn_800B8AAC);
/*80270C38 0026DA38*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80270C3C 0026DA3C*/ PPC::Runtime::ASM::beq(.L_80270E3C);
/*80270C40 0026DA40*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80270C44 0026DA44*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x1c);
/*80270C48 0026DA48*/ PPC::Runtime::ASM::bl(fn_800B8B04);
/*80270C4C 0026DA4C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80270C50 0026DA50*/ PPC::Runtime::ASM::beq(.L_80270E3C);
/*80270C54 0026DA54*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80270C58 0026DA58*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x34);
/*80270C5C 0026DA5C*/ PPC::Runtime::ASM::bl(fn_800B8B5C);
/*80270C60 0026DA60*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80270C64 0026DA64*/ PPC::Runtime::ASM::beq(.L_80270E3C);
/*80270C68 0026DA68*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80270C6C 0026DA6C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x4c);
/*80270C70 0026DA70*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80270C74 0026DA74*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80270C78 0026DA78*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80270C7C 0026DA7C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80270C80 0026DA80*/ PPC::Runtime::ASM::fsubs(context->f5, context->f3, context->f2);
/*80270C84 0026DA84*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80270C88 0026DA88*/ PPC::Runtime::ASM::fsubs(context->f4, context->f1, context->f0);
/*80270C8C 0026DA8C*/ PPC::Runtime::ASM::lfs(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80270C90 0026DA90*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80270C94 0026DA94*/ PPC::Runtime::ASM::fmuls(context->f1, context->f5, context->f6);
/*80270C98 0026DA98*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80270C9C 0026DA9C*/ PPC::Runtime::ASM::lfs(context->f8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80270CA0 0026DAA0*/ PPC::Runtime::ASM::fsubs(context->f3, context->f2, context->f0);
/*80270CA4 0026DAA4*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80270CA8 0026DAA8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f7);
/*80270CAC 0026DAAC*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80270CB0 0026DAB0*/ PPC::Runtime::ASM::fmuls(context->f2, context->f3, context->f8);
/*80270CB4 0026DAB4*/ PPC::Runtime::ASM::fmsubs(context->f1, context->f3, context->f7, context->f1);
/*80270CB8 0026DAB8*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80270CBC 0026DABC*/ PPC::Runtime::ASM::fmsubs(context->f0, context->f5, context->f8, context->f0);
/*80270CC0 0026DAC0*/ PPC::Runtime::ASM::fmsubs(context->f2, context->f4, context->f6, context->f2);
/*80270CC4 0026DAC4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80270CC8 0026DAC8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80270CCC 0026DACC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80270CD0 0026DAD0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80270CD4 0026DAD4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80270CD8 0026DAD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80270CDC 0026DADC*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80270CE0 0026DAE0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80270CE4 0026DAE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80270CE8 0026DAE8*/ PPC::Runtime::ASM::bl(fn_80262FDC);
/*80270CEC 0026DAEC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80270CF0 0026DAF0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80270CF4 0026DAF4*/ PPC::Runtime::ASM::blt(.L_80270E3C);
/*80270CF8 0026DAF8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x40);
/*80270CFC 0026DAFC*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80270D00 0026DB00*/ PPC::Runtime::ASM::bl(fn_80262FDC);
/*80270D04 0026DB04*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80270D08 0026DB08*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80270D0C 0026DB0C*/ PPC::Runtime::ASM::blt(.L_80270E3C);
/*80270D10 0026DB10*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*80270D14 0026DB14*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x58);
/*80270D18 0026DB18*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80270D1C 0026DB1C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80270D20 0026DB20*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80270D24 0026DB24*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f3);
/*80270D28 0026DB28*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80270D2C 0026DB2C*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*80270D30 0026DB30*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80270D34 0026DB34*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f1, context->f0);
/*80270D38 0026DB38*/ PPC::Runtime::ASM::fmadds(context->f0, context->f6, context->f5, context->f0);
/*80270D3C 0026DB3C*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*80270D40 0026DB40*/ PPC::Runtime::ASM::fmadds(context->f2, context->f1, context->f0, context->f2);
/*80270D44 0026DB44*/ PPC::Runtime::ASM::fmadds(context->f1, context->f3, context->f0, context->f4);
/*80270D48 0026DB48*/ PPC::Runtime::ASM::fmadds(context->f0, context->f5, context->f0, context->f6);
/*80270D4C 0026DB4C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80270D50 0026DB50*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80270D54 0026DB54*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80270D58 0026DB58*/ PPC::Runtime::ASM::bl(fn_80262FDC);
/*80270D5C 0026DB5C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80270D60 0026DB60*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80270D64 0026DB64*/ PPC::Runtime::ASM::bge(.L_80270D80);
/*80270D68 0026DB68*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80270D6C 0026DB6C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80270D70 0026DB70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80270D74 0026DB74*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80270D78 0026DB78*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80270D7C 0026DB7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80270D80, 0x80270D80) //this is a jump label
/*80270D80 0026DB80*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80270D84 0026DB84*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80270D88 0026DB88*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80270D8C 0026DB8C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80270D90 0026DB90*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80270D94 0026DB94*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*80270D98 0026DB98*/ PPC::Runtime::ASM::fmuls(context->f2, context->f4, context->f1);
/*80270D9C 0026DB9C*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80270DA0 0026DBA0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80270DA4 0026DBA4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80270DA8 0026DBA8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80270DAC 0026DBAC*/ PPC::Runtime::ASM::fmadds(context->f2, context->f5, context->f3, context->f2);
/*80270DB0 0026DBB0*/ PPC::Runtime::ASM::fmadds(context->f0, context->f5, context->f1, context->f0);
/*80270DB4 0026DBB4*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80270DB8 0026DBB8*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80270DBC 0026DBBC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80270DC0 0026DBC0*/ PPC::Runtime::ASM::fmadds(context->f30, context->f4, context->f3, context->f2);
/*80270DC4 0026DBC4*/ PPC::Runtime::ASM::fmadds(context->f31, context->f4, context->f1, context->f0);
/*80270DC8 0026DBC8*/ PPC::Runtime::ASM::bl(fn_80276650);
/*80270DCC 0026DBCC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80270DD0 0026DBD0*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80270DD4 0026DBD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*80270DD8 0026DBD8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80270DDC 0026DBDC*/ PPC::Runtime::ASM::xoris(context->r5, context->r4, 0x8000);
/*80270DE0 0026DBE0*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3080 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80270DE4 0026DBE4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*80270DE8 0026DBE8*/ PPC::Runtime::ASM::li(context->r4, 0x80);
/*80270DEC 0026DBEC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*80270DF0 0026DBF0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*80270DF4 0026DBF4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80270DF8 0026DBF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*80270DFC 0026DBFC*/ PPC::Runtime::ASM::fmuls(context->f30, context->f30, context->f0);
/*80270E00 0026DC00*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*80270E04 0026DC04*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f1);
/*80270E08 0026DC08*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f30);
/*80270E0C 0026DC0C*/ PPC::Runtime::ASM::fmuls(context->f31, context->f31, context->f1);
/*80270E10 0026DC10*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*80270E14 0026DC14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*80270E18 0026DC18*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r0, 24);
/*80270E1C 0026DC1C*/ PPC::Runtime::ASM::bl(fn_80276050);
/*80270E20 0026DC20*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f31);
/*80270E24 0026DC24*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80270E28 0026DC28*/ PPC::Runtime::ASM::li(context->r4, 0x81);
/*80270E2C 0026DC2C*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*80270E30 0026DC30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r1));
/*80270E34 0026DC34*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r0, 24);
/*80270E38 0026DC38*/ PPC::Runtime::ASM::bl(fn_80276050);
RUNTIME_PPC_JUMP_LABEL(.L_80270E3C, 0x80270E3C) //this is a jump label
/*80270E3C 0026DC3C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1)0, context->qr0);
/*80270E40 0026DC40*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*80270E44 0026DC44*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1)0, context->qr0);
/*80270E48 0026DC48*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*80270E4C 0026DC4C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xac, context->r1));
/*80270E50 0026DC50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r1));
/*80270E54 0026DC54*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1));
/*80270E58 0026DC58*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80270E5C 0026DC5C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xd0);
/*80270E60 0026DC60*/ PPC::Runtime::ASM::blr();
}