//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800631C4.hpp"
#include "fn_80063AC0.hpp"



void fn_80063F8C(PPC::Runtime::GCContext* context)
{
/*80063F8C 00060D8C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*80063F90 00060D90*/ PPC::Runtime::ASM::mflr(context->r0);
/*80063F94 00060D94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*80063F98 00060D98*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80063F9C 00060D9C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*80063FA0 00060DA0*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80063FA4 00060DA4*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80063FA8 00060DA8*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80063FAC 00060DAC*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*80063FB0 00060DB0*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80063FB4 00060DB4*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*80063FB8 00060DB8*/ PPC::Runtime::ASM::stfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80063FBC 00060DBC*/ PPC::Runtime::ASM::psq_st(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*80063FC0 00060DC0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80063FC4 00060DC4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80063FC8 00060DC8*/ PPC::Runtime::ASM::fmr(context->f27, context->f1);
/*80063FCC 00060DCC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80063FD0 00060DD0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80063FD4 00060DD4*/ PPC::Runtime::ASM::bl(fn_800631C4);
/*80063FD8 00060DD8*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80063FDC 00060DDC*/ PPC::Runtime::ASM::fmr(context->f1, context->f27);
/*80063FE0 00060DE0*/ PPC::Runtime::ASM::bl(fn_80063AC0);
/*80063FE4 00060DE4*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x3);
/*80063FE8 00060DE8*/ PPC::Runtime::ASM::beq(.L_80064068);
/*80063FEC 00060DEC*/ PPC::Runtime::ASM::bge(.L_80064000);
/*80063FF0 00060DF0*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x1);
/*80063FF4 00060DF4*/ PPC::Runtime::ASM::beq(.L_8006400C);
/*80063FF8 00060DF8*/ PPC::Runtime::ASM::bge(.L_8006402C);
/*80063FFC 00060DFC*/ PPC::Runtime::ASM::b(.L_80064068);
RUNTIME_PPC_JUMP_LABEL(.L_80064000, 0x80064000) //this is a jump label
/*80064000 00060E00*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*80064004 00060E04*/ PPC::Runtime::ASM::bge(.L_80064068);
/*80064008 00060E08*/ PPC::Runtime::ASM::b(.L_8006404C);
RUNTIME_PPC_JUMP_LABEL(.L_8006400C, 0x8006400C) //this is a jump label
/*8006400C 00060E0C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80064010 00060E10*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80064014 00060E14*/ PPC::Runtime::ASM::fmuls(context->f2, context->f0, context->f31);
/*80064018 00060E18*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8006401C 00060E1C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80064020 00060E20*/ PPC::Runtime::ASM::fmsubs(context->f29, context->f3, context->f1, context->f2);
/*80064024 00060E24*/ PPC::Runtime::ASM::fmadds(context->f28, context->f3, context->f31, context->f0);
/*80064028 00060E28*/ PPC::Runtime::ASM::b(.L_80064068);
RUNTIME_PPC_JUMP_LABEL(.L_8006402C, 0x8006402C) //this is a jump label
/*8006402C 00060E2C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80064030 00060E30*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80064034 00060E34*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f31);
/*80064038 00060E38*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8006403C 00060E3C*/ PPC::Runtime::ASM::fmuls(context->f2, context->f4, context->f31);
/*80064040 00060E40*/ PPC::Runtime::ASM::fmsubs(context->f28, context->f4, context->f1, context->f0);
/*80064044 00060E44*/ PPC::Runtime::ASM::fmadds(context->f30, context->f3, context->f1, context->f2);
/*80064048 00060E48*/ PPC::Runtime::ASM::b(.L_80064068);
RUNTIME_PPC_JUMP_LABEL(.L_8006404C, 0x8006404C) //this is a jump label
/*8006404C 00060E4C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80064050 00060E50*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80064054 00060E54*/ PPC::Runtime::ASM::fmuls(context->f2, context->f0, context->f31);
/*80064058 00060E58*/ PPC::Runtime::ASM::lfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8006405C 00060E5C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80064060 00060E60*/ PPC::Runtime::ASM::fmsubs(context->f30, context->f3, context->f1, context->f2);
/*80064064 00060E64*/ PPC::Runtime::ASM::fmadds(context->f29, context->f3, context->f31, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_80064068, 0x80064068) //this is a jump label
/*80064068 00060E68*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8006406C 00060E6C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80064070 00060E70*/ PPC::Runtime::ASM::stfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80064074 00060E74*/ PPC::Runtime::ASM::stfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80064078 00060E78*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*8006407C 00060E7C*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80064080 00060E80*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80064084 00060E84*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80064088 00060E88*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*8006408C 00060E8C*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80064090 00060E90*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*80064094 00060E94*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80064098 00060E98*/ PPC::Runtime::ASM::psq_l(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*8006409C 00060E9C*/ PPC::Runtime::ASM::lfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800640A0 00060EA0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800640A4 00060EA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*800640A8 00060EA8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800640AC 00060EAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800640B0 00060EB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*800640B4 00060EB4*/ PPC::Runtime::ASM::blr();
}