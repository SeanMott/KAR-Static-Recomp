//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_8000FCB0.hpp"
#include "fn_8000FCB0.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_8022D230.hpp"
#include "fn_801C8410.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_8022D230.hpp"
#include "fn_801C8410.hpp"
#include "fn_gmGetGlobalP.hpp"
#include "fn_8022D230.hpp"
#include "fn_8022D128.hpp"



void fn_vsDedede_CPU_Cheating(PPC::Runtime::GCContext* context)
{
/*80040B80 0003D980*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*80040B84 0003D984*/ PPC::Runtime::ASM::mflr(context->r0);
/*80040B88 0003D988*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80040B8C 0003D98C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80040B90 0003D990*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*80040B94 0003D994*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80040B98 0003D998*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80040B9C 0003D99C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80040BA0 0003D9A0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80040BA4 0003D9A4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80040BA8 0003D9A8*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80040BAC 0003D9AC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80040BB0 0003D9B0*/ PPC::Runtime::ASM::bl(fn_8000FCB0);
/*80040BB4 0003D9B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80040BB8 0003D9B8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x833, context->r31));
/*80040BBC 0003D9BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r3));
/*80040BC0 0003D9C0*/ PPC::Runtime::ASM::divw(context->r0, context->r4, context->r3);
/*80040BC4 0003D9C4*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r3);
/*80040BC8 0003D9C8*/ PPC::Runtime::ASM::subf.(context->r0, context->r0, context->r4);
/*80040BCC 0003D9CC*/ PPC::Runtime::ASM::bne(.L_80040D2C);
/*80040BD0 0003D9D0*/ PPC::Runtime::ASM::bl(fn_8000FCB0);
/*80040BD4 0003D9D4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80040BD8 0003D9D8*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80040BDC 0003D9DC*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DE888 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80040BE0 0003D9E0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80040BE4 0003D9E4*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*80040BE8 0003D9E8*/ PPC::Runtime::ASM::bl(fn_8022D230);
/*80040BEC 0003D9EC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80040BF0 0003D9F0*/ PPC::Runtime::ASM::beq(.L_80040BFC);
/*80040BF4 0003D9F4*/ PPC::Runtime::ASM::bl(fn_801C8410);
/*80040BF8 0003D9F8*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_80040BFC, 0x80040BFC) //this is a jump label
/*80040BFC 0003D9FC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x604, context->r31));
/*80040C00 0003DA00*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80040C04 0003DA04*/ PPC::Runtime::ASM::lfs(context->f30, STRUCT_FLOAT_COUNT_1805DE888 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80040C08 0003DA08*/ PPC::Runtime::ASM::fdivs(context->f31, context->f31, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_80040C0C, 0x80040C0C) //this is a jump label
/*80040C0C 0003DA0C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*80040C10 0003DA10*/ PPC::Runtime::ASM::beq(.L_80040C3C);
/*80040C14 0003DA14*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80040C18 0003DA18*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*80040C1C 0003DA1C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*80040C20 0003DA20*/ PPC::Runtime::ASM::beq(.L_80040C3C);
/*80040C24 0003DA24*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80040C28 0003DA28*/ PPC::Runtime::ASM::bl(fn_8022D230);
/*80040C2C 0003DA2C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80040C30 0003DA30*/ PPC::Runtime::ASM::beq(.L_80040C3C);
/*80040C34 0003DA34*/ PPC::Runtime::ASM::bl(fn_801C8410);
/*80040C38 0003DA38*/ PPC::Runtime::ASM::fadds(context->f30, context->f30, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_80040C3C, 0x80040C3C) //this is a jump label
/*80040C3C 0003DA3C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*80040C40 0003DA40*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x5);
/*80040C44 0003DA44*/ PPC::Runtime::ASM::blt(.L_80040C0C);
/*80040C48 0003DA48*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x608, context->r31));
/*80040C4C 0003DA4C*/ PPC::Runtime::ASM::fdivs(context->f1, context->f30, context->f0);
/*80040C50 0003DA50*/ PPC::Runtime::ASM::fsubs(context->f0, context->f31, context->f1);
/*80040C54 0003DA54*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f31);
/*80040C58 0003DA58*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60c, context->r31));
/*80040C5C 0003DA5C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r30));
/*80040C60 0003DA60*/ PPC::Runtime::ASM::fmuls(context->f31, context->f0, context->f1);
/*80040C64 0003DA64*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80040C68 0003DA68*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x610, context->r3));
/*80040C6C 0003DA6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x614, context->r3));
/*80040C70 0003DA70*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80040C74 0003DA74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80040C78 0003DA78*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x618, context->r3));
/*80040C7C 0003DA7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x61c, context->r3));
/*80040C80 0003DA80*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80040C84 0003DA84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80040C88 0003DA88*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x620, context->r3));
/*80040C8C 0003DA8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x624, context->r3));
/*80040C90 0003DA90*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80040C94 0003DA94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80040C98 0003DA98*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x628, context->r3));
/*80040C9C 0003DA9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x62c, context->r3));
/*80040CA0 0003DAA0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80040CA4 0003DAA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80040CA8 0003DAA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x630, context->r3));
/*80040CAC 0003DAAC*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*80040CB0 0003DAB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80040CB4 0003DAB4*/ PPC::Runtime::ASM::bl(fn_8022D230);
/*80040CB8 0003DAB8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80040CBC 0003DABC*/ PPC::Runtime::ASM::beq(.L_80040D2C);
/*80040CC0 0003DAC0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80040CC4 0003DAC4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80040CC8 0003DAC8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80040CCC 0003DACC*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*80040CD0 0003DAD0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80040CD4 0003DAD4*/ PPC::Runtime::ASM::fadds(context->f7, context->f0, context->f31);
/*80040CD8 0003DAD8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80040CDC 0003DADC*/ PPC::Runtime::ASM::fadds(context->f6, context->f2, context->f31);
/*80040CE0 0003DAE0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80040CE4 0003DAE4*/ PPC::Runtime::ASM::fadds(context->f5, context->f1, context->f31);
/*80040CE8 0003DAE8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80040CEC 0003DAEC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80040CF0 0003DAF0*/ PPC::Runtime::ASM::fadds(context->f4, context->f0, context->f31);
/*80040CF4 0003DAF4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80040CF8 0003DAF8*/ PPC::Runtime::ASM::fadds(context->f3, context->f3, context->f31);
/*80040CFC 0003DAFC*/ PPC::Runtime::ASM::fadds(context->f2, context->f2, context->f31);
/*80040D00 0003DB00*/ PPC::Runtime::ASM::stfs(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80040D04 0003DB04*/ PPC::Runtime::ASM::fadds(context->f1, context->f1, context->f31);
/*80040D08 0003DB08*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f31);
/*80040D0C 0003DB0C*/ PPC::Runtime::ASM::stfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80040D10 0003DB10*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80040D14 0003DB14*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80040D18 0003DB18*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80040D1C 0003DB1C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80040D20 0003DB20*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80040D24 0003DB24*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80040D28 0003DB28*/ PPC::Runtime::ASM::bl(fn_8022D128);
RUNTIME_PPC_JUMP_LABEL(.L_80040D2C, 0x80040D2C) //this is a jump label
/*80040D2C 0003DB2C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*80040D30 0003DB30*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80040D34 0003DB34*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80040D38 0003DB38*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80040D3C 0003DB3C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80040D40 0003DB40*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80040D44 0003DB44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80040D48 0003DB48*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80040D4C 0003DB4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80040D50 0003DB50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*80040D54 0003DB54*/ PPC::Runtime::ASM::blr();
}