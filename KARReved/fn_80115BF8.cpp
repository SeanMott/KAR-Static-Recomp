//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80116268.hpp"
#include "fn_80116268.hpp"
#include "fn_80115E0C.hpp"
#include "fn_getTrialFlag.hpp"



void fn_80115BF8(PPC::Runtime::GCContext* context)
{
/*80115BF8 001129F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*80115BFC 001129FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80115C00 00112A00*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80115C04 00112A04*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80115C08 00112A08*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*80115C0C 00112A0C*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80115C10 00112A10*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80115C14 00112A14*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80115C18 00112A18*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*80115C1C 00112A1C*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80115C20 00112A20*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*80115C24 00112A24*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80115C28 00112A28*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80115C2C 00112A2C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80115C30 00112A30*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80115C34 00112A34*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80115C38 00112A38*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80115C3C 00112A3C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*80115C40 00112A40*/ PPC::Runtime::ASM::bl(fn_80116268);
/*80115C44 00112A44*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFB90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115C48 00112A48*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115C4C 00112A4C*/ PPC::Runtime::ASM::fmsubs(context->f29, context->f2, context->f1, context->f0);
/*80115C50 00112A50*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*80115C54 00112A54*/ PPC::Runtime::ASM::bl(fn_80116268);
/*80115C58 00112A58*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFB90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115C5C 00112A5C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115C60 00112A60*/ PPC::Runtime::ASM::fmsubs(context->f28, context->f2, context->f1, context->f0);
/*80115C64 00112A64*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*80115C68 00112A68*/ PPC::Runtime::ASM::bl(fn_tanf2);
/*80115C6C 00112A6C*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*80115C70 00112A70*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*80115C74 00112A74*/ PPC::Runtime::ASM::bl(fn_80115E0C);
/*80115C78 00112A78*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFB90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115C7C 00112A7C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115C80 00112A80*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*80115C84 00112A84*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80115C88 00112A88*/ PPC::Runtime::ASM::fneg(context->f31, context->f0);
/*80115C8C 00112A8C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80115C90 00112A90*/ PPC::Runtime::ASM::fmsub(context->f1, context->f1, context->f30, context->f0);
/*80115C94 00112A94*/ PPC::Runtime::ASM::frsp(context->f1, context->f1);
/*80115C98 00112A98*/ PPC::Runtime::ASM::bne(.L_80115CFC);
/*80115C9C 00112A9C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80115CA0 00112AA0*/ PPC::Runtime::ASM::fcmpu(cr0, context->f2, context->f28);
/*80115CA4 00112AA4*/ PPC::Runtime::ASM::beq(.L_80115D58);
/*80115CA8 00112AA8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115CAC 00112AAC*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f28);
/*80115CB0 00112AB0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80115CB4 00112AB4*/ PPC::Runtime::ASM::bge(.L_80115CC8);
/*80115CB8 00112AB8*/ PPC::Runtime::ASM::stfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80115CBC 00112ABC*/ PPC::Runtime::ASM::stfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80115CC0 00112AC0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*80115CC4 00112AC4*/ PPC::Runtime::ASM::b(.L_80115D58);
RUNTIME_PPC_JUMP_LABEL(.L_80115CC8, 0x80115CC8) //this is a jump label
/*80115CC8 00112AC8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80115CCC 00112ACC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*80115CD0 00112AD0*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80115CD4 00112AD4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80115CD8 00112AD8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80115CDC 00112ADC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*80115CE0 00112AE0*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80115CE4 00112AE4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80115CE8 00112AE8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*80115CEC 00112AEC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*80115CF0 00112AF0*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80115CF4 00112AF4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*80115CF8 00112AF8*/ PPC::Runtime::ASM::b(.L_80115D58);
RUNTIME_PPC_JUMP_LABEL(.L_80115CFC, 0x80115CFC) //this is a jump label
/*80115CFC 00112AFC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80115D00 00112B00*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFB8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115D04 00112B04*/ PPC::Runtime::ASM::fcmpu(cr0, context->f2, context->f1);
/*80115D08 00112B08*/ PPC::Runtime::ASM::beq(.L_80115D58);
/*80115D0C 00112B0C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115D10 00112B10*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80115D14 00112B14*/ PPC::Runtime::ASM::ble(.L_80115D28);
/*80115D18 00112B18*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80115D1C 00112B1C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80115D20 00112B20*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*80115D24 00112B24*/ PPC::Runtime::ASM::b(.L_80115D58);
RUNTIME_PPC_JUMP_LABEL(.L_80115D28, 0x80115D28) //this is a jump label
/*80115D28 00112B28*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80115D2C 00112B2C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*80115D30 00112B30*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80115D34 00112B34*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80115D38 00112B38*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80115D3C 00112B3C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*80115D40 00112B40*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80115D44 00112B44*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80115D48 00112B48*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*80115D4C 00112B4C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*80115D50 00112B50*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*80115D54 00112B54*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80115D58, 0x80115D58) //this is a jump label
/*80115D58 00112B58*/ PPC::Runtime::ASM::bl(fn_getTrialFlag);
/*80115D5C 00112B5C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80115D60 00112B60*/ PPC::Runtime::ASM::beq(.L_80115D74);
/*80115D64 00112B64*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80115D68 00112B68*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115D6C 00112B6C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80115D70 00112B70*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80115D74, 0x80115D74) //this is a jump label
/*80115D74 00112B74*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80115D78 00112B78*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x24);
/*80115D7C 00112B7C*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetEyePosition);
/*80115D80 00112B80*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80115D84 00112B84*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80115D88 00112B88*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetFlags);
/*80115D8C 00112B8C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80115D90 00112B90*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80115D94 00112B94*/ PPC::Runtime::ASM::bne(.L_80115DB0);
/*80115D98 00112B98*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFB88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115D9C 00112B9C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115DA0 00112BA0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80115DA4 00112BA4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80115DA8 00112BA8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80115DAC 00112BAC*/ PPC::Runtime::ASM::b(.L_80115DC8);
RUNTIME_PPC_JUMP_LABEL(.L_80115DB0, 0x80115DB0) //this is a jump label
/*80115DB0 00112BB0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFB88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115DB4 00112BB4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFB9C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115DB8 00112BB8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFBA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115DBC 00112BBC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80115DC0 00112BC0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80115DC4 00112BC4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80115DC8, 0x80115DC8) //this is a jump label
/*80115DC8 00112BC8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80115DCC 00112BCC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80115DD0 00112BD0*/ PPC::Runtime::ASM::bl(fn_80402138);
/*80115DD4 00112BD4*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*80115DD8 00112BD8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80115DDC 00112BDC*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80115DE0 00112BE0*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80115DE4 00112BE4*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*80115DE8 00112BE8*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80115DEC 00112BEC*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*80115DF0 00112BF0*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80115DF4 00112BF4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80115DF8 00112BF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80115DFC 00112BFC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80115E00 00112C00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80115E04 00112C04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*80115E08 00112C08*/ PPC::Runtime::ASM::blr();
}