//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_80236C40.hpp"
#include "fn_80236C40.hpp"
#include "fn_80236C40.hpp"
#include "fn_8018DC88.hpp"



void fn_80201C78(PPC::Runtime::GCContext* context)
{
/*80201C78 001FEA78*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80201C7C 001FEA7C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80201C80 001FEA80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80201C84 001FEA84*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80201C88 001FEA88*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80201C8C 001FEA8C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*80201C90 001FEA90*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*80201C94 001FEA94*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80201C98 001FEA98*/ PPC::Runtime::ASM::fmr(context->f31, context->f2);
/*80201C9C 001FEA9C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80201CA0 001FEAA0*/ PPC::Runtime::ASM::mr(context->r26, context->r5);
/*80201CA4 001FEAA4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa3c, context->r28));
/*80201CA8 001FEAA8*/ PPC::Runtime::ASM::mr(context->r27, context->r6);
/*80201CAC 001FEAAC*/ PPC::Runtime::ASM::cmpwi(context->r29, -0x1);
/*80201CB0 001FEAB0*/ PPC::Runtime::ASM::beq(.L_80201DC0);
/*80201CB4 001FEAB4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r27));
/*80201CB8 001FEAB8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80201CBC 001FEABC*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 5, 24);
/*80201CC0 001FEAC0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x5);
/*80201CC4 001FEAC4*/ PPC::Runtime::ASM::beq(.L_80201DC0);
/*80201CC8 001FEAC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
/*80201CCC 001FEACC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*80201CD0 001FEAD0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80201CD4 001FEAD4*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*80201CD8 001FEAD8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r26));
/*80201CDC 001FEADC*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*80201CE0 001FEAE0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80201CE4 001FEAE4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80201CE8 001FEAE8*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f0);
/*80201CEC 001FEAEC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80201CF0 001FEAF0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80201CF4 001FEAF4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r26));
/*80201CF8 001FEAF8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*80201CFC 001FEAFC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80201D00 001FEB00*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r26));
/*80201D04 001FEB04*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*80201D08 001FEB08*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80201D0C 001FEB0C*/ PPC::Runtime::ASM::beq(.L_80201D38);
/*80201D10 001FEB10*/ PPC::Runtime::ASM::lis(context->r4, 0x6);
/*80201D14 001FEB14*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
/*80201D18 001FEB18*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80201D1C 001FEB1C*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*80201D20 001FEB20*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x5a72);
/*80201D24 001FEB24*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x18);
/*80201D28 001FEB28*/ PPC::Runtime::ASM::li(context->r6, 0xd7);
/*80201D2C 001FEB2C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80201D30 001FEB30*/ PPC::Runtime::ASM::bl(fn_80236C40);
/*80201D34 001FEB34*/ PPC::Runtime::ASM::b(.L_80201DC0);
RUNTIME_PPC_JUMP_LABEL(.L_80201D38, 0x80201D38) //this is a jump label
/*80201D38 001FEB38*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*80201D3C 001FEB3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80201D40 001FEB40*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3e);
/*80201D44 001FEB44*/ PPC::Runtime::ASM::beq(.L_80201D70);
/*80201D48 001FEB48*/ PPC::Runtime::ASM::bge(.L_80201D64);
/*80201D4C 001FEB4C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x26);
/*80201D50 001FEB50*/ PPC::Runtime::ASM::beq(.L_80201D70);
/*80201D54 001FEB54*/ PPC::Runtime::ASM::bge(.L_80201D9C);
/*80201D58 001FEB58*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xe);
/*80201D5C 001FEB5C*/ PPC::Runtime::ASM::beq(.L_80201D70);
/*80201D60 001FEB60*/ PPC::Runtime::ASM::b(.L_80201D9C);
RUNTIME_PPC_JUMP_LABEL(.L_80201D64, 0x80201D64) //this is a jump label
/*80201D64 001FEB64*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4b);
/*80201D68 001FEB68*/ PPC::Runtime::ASM::beq(.L_80201D70);
/*80201D6C 001FEB6C*/ PPC::Runtime::ASM::b(.L_80201D9C);
RUNTIME_PPC_JUMP_LABEL(.L_80201D70, 0x80201D70) //this is a jump label
/*80201D70 001FEB70*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r3));
/*80201D74 001FEB74*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80201D78 001FEB78*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*80201D7C 001FEB7C*/ PPC::Runtime::ASM::addi(context->r7, context->r26, 0x38);
/*80201D80 001FEB80*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80201D84 001FEB84*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x8);
/*80201D88 001FEB88*/ PPC::Runtime::ASM::li(context->r4, 0x4eb3);
/*80201D8C 001FEB8C*/ PPC::Runtime::ASM::li(context->r6, 0x67);
/*80201D90 001FEB90*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80201D94 001FEB94*/ PPC::Runtime::ASM::bl(fn_80236C40);
/*80201D98 001FEB98*/ PPC::Runtime::ASM::b(.L_80201DC0);
RUNTIME_PPC_JUMP_LABEL(.L_80201D9C, 0x80201D9C) //this is a jump label
/*80201D9C 001FEB9C*/ PPC::Runtime::ASM::lis(context->r4, 0x6);
/*80201DA0 001FEBA0*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
/*80201DA4 001FEBA4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80201DA8 001FEBA8*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*80201DAC 001FEBAC*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x5a6e);
/*80201DB0 001FEBB0*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x18);
/*80201DB4 001FEBB4*/ PPC::Runtime::ASM::li(context->r6, 0xd7);
/*80201DB8 001FEBB8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80201DBC 001FEBBC*/ PPC::Runtime::ASM::bl(fn_80236C40);
RUNTIME_PPC_JUMP_LABEL(.L_80201DC0, 0x80201DC0) //this is a jump label
/*80201DC0 001FEBC0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa68, context->r28));
/*80201DC4 001FEBC4*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*80201DC8 001FEBC8*/ PPC::Runtime::ASM::beq(.L_80201DF8);
/*80201DCC 001FEBCC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa58, context->r28));
/*80201DD0 001FEBD0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80201DD4 001FEBD4*/ PPC::Runtime::ASM::beq(.L_80201DF8);
/*80201DD8 001FEBD8*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80201DDC 001FEBDC*/ PPC::Runtime::ASM::lis(context->r6, MemoryOffset_1330 @ Get_MemoryOffset_HighBit);
/*80201DE0 001FEBE0*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_1331_0x0005000F_0xFFFFFFFF @ Get_MemoryOffset_HighBit);
/*80201DE4 001FEBE4*/ PPC::Runtime::ASM::addi(context->r7, context->r6, MemoryOffset_1330 @ Get_MemoryOffset_LowBit);
/*80201DE8 001FEBE8*/ PPC::Runtime::ASM::mr(context->r6, context->r27);
/*80201DEC 001FEBEC*/ PPC::Runtime::ASM::addi(context->r8, context->r5, MemoryOffset_1331_0x0005000F_0xFFFFFFFF @ Get_MemoryOffset_LowBit);
/*80201DF0 001FEBF0*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*80201DF4 001FEBF4*/ PPC::Runtime::ASM::bl(fn_8018DC88);
RUNTIME_PPC_JUMP_LABEL(.L_80201DF8, 0x80201DF8) //this is a jump label
/*80201DF8 001FEBF8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80201DFC 001FEBFC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*80201E00 001FEC00*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80201E04 001FEC04*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*80201E08 001FEC08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80201E0C 001FEC0C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80201E10 001FEC10*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*80201E14 001FEC14*/ PPC::Runtime::ASM::blr();
}