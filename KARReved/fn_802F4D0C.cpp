//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802D4678.hpp"
#include "fn_802DE0E4.hpp"
#include "fn_802889D0.hpp"
#include "fn_802889D0.hpp"
#include "fn_802889D0.hpp"



void fn_802F4D0C(PPC::Runtime::GCContext* context)
{
/*802F4D0C 002F1B0C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*802F4D10 002F1B10*/ PPC::Runtime::ASM::mflr(context->r0);
/*802F4D14 002F1B14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*802F4D18 002F1B18*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802F4D1C 002F1B1C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*802F4D20 002F1B20*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802F4D24 002F1B24*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*802F4D28 002F1B28*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802F4D2C 002F1B2C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802F4D30 002F1B30*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802F4D34 002F1B34*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802F4D38 002F1B38*/ PPC::Runtime::ASM::bl(fn_802D4678);
/*802F4D3C 002F1B3C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802F4D40 002F1B40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802F4D44 002F1B44*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802F4D48 002F1B48*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r12));
/*802F4D4C 002F1B4C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802F4D50 002F1B50*/ PPC::Runtime::ASM::bctrl();
/*802F4D54 002F1B54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802F4D58 002F1B58*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802F4D5C 002F1B5C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802F4D60 002F1B60*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802F4D64 002F1B64*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r12));
/*802F4D68 002F1B68*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802F4D6C 002F1B6C*/ PPC::Runtime::ASM::bctrl();
/*802F4D70 002F1B70*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*802F4D74 002F1B74*/ PPC::Runtime::ASM::bl(fn_802DE0E4);
/*802F4D78 002F1B78*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*802F4D7C 002F1B7C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802F4D80 002F1B80*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2120);
/*802F4D84 002F1B84*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x2124);
/*802F4D88 002F1B88*/ PPC::Runtime::ASM::bl(fn_802889D0);
/*802F4D8C 002F1B8C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802F4D90 002F1B90*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*802F4D94 002F1B94*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2128);
/*802F4D98 002F1B98*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802F4D9C 002F1B9C*/ PPC::Runtime::ASM::bl(fn_802889D0);
/*802F4DA0 002F1BA0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802F4DA4 002F1BA4*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*802F4DA8 002F1BA8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802F4DAC 002F1BAC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*802F4DB0 002F1BB0*/ PPC::Runtime::ASM::bl(fn_802889D0);
/*802F4DB4 002F1BB4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802F4DB8 002F1BB8*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802F4DBC 002F1BBC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802F4DC0 002F1BC0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802F4DC4 002F1BC4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x120, context->r12));
/*802F4DC8 002F1BC8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802F4DCC 002F1BCC*/ PPC::Runtime::ASM::bctrl();
/*802F4DD0 002F1BD0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F4DD4 002F1BD4*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*802F4DD8 002F1BD8*/ PPC::Runtime::ASM::fmuls(context->f3, context->f31, context->f1);
/*802F4DDC 002F1BDC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*802F4DE0 002F1BE0*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f31);
/*802F4DE4 002F1BE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802F4DE8 002F1BE8*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3B08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802F4DEC 002F1BEC*/ PPC::Runtime::ASM::fdivs(context->f2, context->f3, context->f2);
/*802F4DF0 002F1BF0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*802F4DF4 002F1BF4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*802F4DF8 002F1BF8*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802F4DFC 002F1BFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802F4E00 002F1C00*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802F4E04 002F1C04*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*802F4E08 002F1C08*/ PPC::Runtime::ASM::fmuls(context->f1, context->f31, context->f0);
/*802F4E0C 002F1C0C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802F4E10 002F1C10*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*802F4E14 002F1C14*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*802F4E18 002F1C18*/ PPC::Runtime::ASM::bge(.L_802F4E24);
/*802F4E1C 002F1C1C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*802F4E20 002F1C20*/ PPC::Runtime::ASM::b(.L_802F4E28);
RUNTIME_PPC_JUMP_LABEL(.L_802F4E24, 0x802F4E24) //this is a jump label
/*802F4E24 002F1C24*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x34);
RUNTIME_PPC_JUMP_LABEL(.L_802F4E28, 0x802F4E28) //this is a jump label
/*802F4E28 002F1C28*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802F4E2C 002F1C2C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*802F4E30 002F1C30*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802F4E34 002F1C34*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x8);
/*802F4E38 002F1C38*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x20);
/*802F4E3C 002F1C3C*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802F4E40 002F1C40*/ PPC::Runtime::ASM::bl(fn_PSVECAdd);
/*802F4E44 002F1C44*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*802F4E48 002F1C48*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802F4E4C 002F1C4C*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*802F4E50 002F1C50*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802F4E54 002F1C54*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802F4E58 002F1C58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*802F4E5C 002F1C5C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802F4E60 002F1C60*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802F4E64 002F1C64*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*802F4E68 002F1C68*/ PPC::Runtime::ASM::blr();
}