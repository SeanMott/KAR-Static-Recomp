//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801BB058.hpp"
#include "fn_801BC71C.hpp"
#include "fn_801A2CEC.hpp"
#include "fn_801BD100.hpp"
#include "fn_AS_RunBrake.hpp"



void fn_801BBB98(PPC::Runtime::GCContext* context)
{
/*801BBB98 001B8998*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*801BBB9C 001B899C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BBBA0 001B89A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801BBBA4 001B89A4*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801BBBA8 001B89A8*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*801BBBAC 001B89AC*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801BBBB0 001B89B0*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*801BBBB4 001B89B4*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801BBBB8 001B89B8*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801BBBBC 001B89BC*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801BBBC0 001B89C0*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*801BBBC4 001B89C4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BBBC8 001B89C8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801BBBCC 001B89CC*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x394, context->r3));
/*801BBBD0 001B89D0*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x398, context->r3));
/*801BBBD4 001B89D4*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x39c, context->r3));
/*801BBBD8 001B89D8*/ PPC::Runtime::ASM::lfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3a0, context->r3));
/*801BBBDC 001B89DC*/ PPC::Runtime::ASM::bl(fn_801BB058);
/*801BBBE0 001B89E0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801BBBE4 001B89E4*/ PPC::Runtime::ASM::bne(.L_801BBBF8);
/*801BBBE8 001B89E8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BBBEC 001B89EC*/ PPC::Runtime::ASM::bl(fn_801BC71C);
/*801BBBF0 001B89F0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801BBBF4 001B89F4*/ PPC::Runtime::ASM::beq(.L_801BBCB0);
RUNTIME_PPC_JUMP_LABEL(.L_801BBBF8, 0x801BBBF8) //this is a jump label
/*801BBBF8 001B89F8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E17A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BBBFC 001B89FC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*801BBC00 001B8A00*/ PPC::Runtime::ASM::bge(.L_801BBC0C);
/*801BBC04 001B8A04*/ PPC::Runtime::ASM::fneg(context->f0, context->f31);
/*801BBC08 001B8A08*/ PPC::Runtime::ASM::b(.L_801BBC10);
RUNTIME_PPC_JUMP_LABEL(.L_801BBC0C, 0x801BBC0C) //this is a jump label
/*801BBC0C 001B8A0C*/ PPC::Runtime::ASM::fmr(context->f0, context->f31);
RUNTIME_PPC_JUMP_LABEL(.L_801BBC10, 0x801BBC10) //this is a jump label
/*801BBC10 001B8A10*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BBC14 001B8A14*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801BBC18 001B8A18*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*801BBC1C 001B8A1C*/ PPC::Runtime::ASM::bge(.L_801BBCB0);
/*801BBC20 001B8A20*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E17A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BBC24 001B8A24*/ PPC::Runtime::ASM::fcmpo(cr0, context->f30, context->f0);
/*801BBC28 001B8A28*/ PPC::Runtime::ASM::bge(.L_801BBC34);
/*801BBC2C 001B8A2C*/ PPC::Runtime::ASM::fneg(context->f0, context->f30);
/*801BBC30 001B8A30*/ PPC::Runtime::ASM::b(.L_801BBC38);
RUNTIME_PPC_JUMP_LABEL(.L_801BBC34, 0x801BBC34) //this is a jump label
/*801BBC34 001B8A34*/ PPC::Runtime::ASM::fmr(context->f0, context->f30);
RUNTIME_PPC_JUMP_LABEL(.L_801BBC38, 0x801BBC38) //this is a jump label
/*801BBC38 001B8A38*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801BBC3C 001B8A3C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*801BBC40 001B8A40*/ PPC::Runtime::ASM::bge(.L_801BBCB0);
/*801BBC44 001B8A44*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E17A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BBC48 001B8A48*/ PPC::Runtime::ASM::fcmpo(cr0, context->f29, context->f0);
/*801BBC4C 001B8A4C*/ PPC::Runtime::ASM::bge(.L_801BBC58);
/*801BBC50 001B8A50*/ PPC::Runtime::ASM::fneg(context->f0, context->f29);
/*801BBC54 001B8A54*/ PPC::Runtime::ASM::b(.L_801BBC5C);
RUNTIME_PPC_JUMP_LABEL(.L_801BBC58, 0x801BBC58) //this is a jump label
/*801BBC58 001B8A58*/ PPC::Runtime::ASM::fmr(context->f0, context->f29);
RUNTIME_PPC_JUMP_LABEL(.L_801BBC5C, 0x801BBC5C) //this is a jump label
/*801BBC5C 001B8A5C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*801BBC60 001B8A60*/ PPC::Runtime::ASM::bge(.L_801BBCB0);
/*801BBC64 001B8A64*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E17A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BBC68 001B8A68*/ PPC::Runtime::ASM::fcmpo(cr0, context->f28, context->f0);
/*801BBC6C 001B8A6C*/ PPC::Runtime::ASM::bge(.L_801BBC78);
/*801BBC70 001B8A70*/ PPC::Runtime::ASM::fneg(context->f0, context->f28);
/*801BBC74 001B8A74*/ PPC::Runtime::ASM::b(.L_801BBC7C);
RUNTIME_PPC_JUMP_LABEL(.L_801BBC78, 0x801BBC78) //this is a jump label
/*801BBC78 001B8A78*/ PPC::Runtime::ASM::fmr(context->f0, context->f28);
RUNTIME_PPC_JUMP_LABEL(.L_801BBC7C, 0x801BBC7C) //this is a jump label
/*801BBC7C 001B8A7C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*801BBC80 001B8A80*/ PPC::Runtime::ASM::bge(.L_801BBCB0);
/*801BBC84 001B8A84*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BBC88 001B8A88*/ PPC::Runtime::ASM::bl(fn_801A2CEC);
/*801BBC8C 001B8A8C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801BBC90 001B8A90*/ PPC::Runtime::ASM::beq(.L_801BBCA0);
/*801BBC94 001B8A94*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BBC98 001B8A98*/ PPC::Runtime::ASM::bl(fn_801BD100);
/*801BBC9C 001B8A9C*/ PPC::Runtime::ASM::b(.L_801BBCA8);
RUNTIME_PPC_JUMP_LABEL(.L_801BBCA0, 0x801BBCA0) //this is a jump label
/*801BBCA0 001B8AA0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BBCA4 001B8AA4*/ PPC::Runtime::ASM::bl(fn_AS_RunBrake);
RUNTIME_PPC_JUMP_LABEL(.L_801BBCA8, 0x801BBCA8) //this is a jump label
/*801BBCA8 001B8AA8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801BBCAC 001B8AAC*/ PPC::Runtime::ASM::b(.L_801BBCB4);
RUNTIME_PPC_JUMP_LABEL(.L_801BBCB0, 0x801BBCB0) //this is a jump label
/*801BBCB0 001B8AB0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801BBCB4, 0x801BBCB4) //this is a jump label
/*801BBCB4 001B8AB4*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*801BBCB8 001B8AB8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801BBCBC 001B8ABC*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*801BBCC0 001B8AC0*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801BBCC4 001B8AC4*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801BBCC8 001B8AC8*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801BBCCC 001B8ACC*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*801BBCD0 001B8AD0*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801BBCD4 001B8AD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801BBCD8 001B8AD8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BBCDC 001B8ADC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BBCE0 001B8AE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*801BBCE4 001B8AE4*/ PPC::Runtime::ASM::blr();
}