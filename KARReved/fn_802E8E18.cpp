//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802E8E18(PPC::Runtime::GCContext* context)
{
/*802E8E18 002E5C18*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*802E8E1C 002E5C1C*/ PPC::Runtime::ASM::mflr(context->r0);
/*802E8E20 002E5C20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802E8E24 002E5C24*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*802E8E28 002E5C28*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*802E8E2C 002E5C2C*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802E8E30 002E5C30*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*802E8E34 002E5C34*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802E8E38 002E5C38*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*802E8E3C 002E5C3C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*802E8E40 002E5C40*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*802E8E44 002E5C44*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802E8E48 002E5C48*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802E8E4C 002E5C4C*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*802E8E50 002E5C50*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*802E8E54 002E5C54*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x24);
/*802E8E58 002E5C58*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*802E8E5C 002E5C5C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r28));
/*802E8E60 002E5C60*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802E8E64 002E5C64*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E8E68 002E5C68*/ PPC::Runtime::ASM::bctrl();
/*802E8E6C 002E5C6C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802E8E70 002E5C70*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802E8E74 002E5C74*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802E8E78 002E5C78*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802E8E7C 002E5C7C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E8E80 002E5C80*/ PPC::Runtime::ASM::bctrl();
/*802E8E84 002E5C84*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802E8E88 002E5C88*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*802E8E8C 002E5C8C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E8E90 002E5C90*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802E8E94 002E5C94*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802E8E98 002E5C98*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802E8E9C 002E5C9C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*802E8EA0 002E5CA0*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802E8EA4 002E5CA4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802E8EA8 002E5CA8*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*802E8EAC 002E5CAC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802E8EB0 002E5CB0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802E8EB4 002E5CB4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802E8EB8 002E5CB8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802E8EBC 002E5CBC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802E8EC0 002E5CC0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802E8EC4 002E5CC4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802E8EC8 002E5CC8*/ PPC::Runtime::ASM::bl(fn_803D2140);
/*802E8ECC 002E5CCC*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x24);
/*802E8ED0 002E5CD0*/ PPC::Runtime::ASM::fmr(context->f29, context->f1);
/*802E8ED4 002E5CD4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r28));
/*802E8ED8 002E5CD8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*802E8EDC 002E5CDC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E8EE0 002E5CE0*/ PPC::Runtime::ASM::bctrl();
/*802E8EE4 002E5CE4*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x24);
/*802E8EE8 002E5CE8*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*802E8EEC 002E5CEC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r28));
/*802E8EF0 002E5CF0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*802E8EF4 002E5CF4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E8EF8 002E5CF8*/ PPC::Runtime::ASM::bctrl();
/*802E8EFC 002E5CFC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802E8F00 002E5D00*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f30);
/*802E8F04 002E5D04*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802E8F08 002E5D08*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*802E8F0C 002E5D0C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E8F10 002E5D10*/ PPC::Runtime::ASM::bctrl();
/*802E8F14 002E5D14*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802E8F18 002E5D18*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802E8F1C 002E5D1C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802E8F20 002E5D20*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*802E8F24 002E5D24*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E8F28 002E5D28*/ PPC::Runtime::ASM::bctrl();
/*802E8F2C 002E5D2C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f31, context->f30);
/*802E8F30 002E5D30*/ PPC::Runtime::ASM::fcmpo(cr0, context->f29, context->f0);
/*802E8F34 002E5D34*/ PPC::Runtime::ASM::mfcr(context->r0);
/* 802E8F38 002E5D38  54 00 0F FF */ srwi. context->r0 , context->r0 , 31
/*802E8F3C 002E5D3C*/ PPC::Runtime::ASM::beq(.L_802E8FC8);
/*802E8F40 002E5D40*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x24);
/*802E8F44 002E5D44*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r28));
/*802E8F48 002E5D48*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802E8F4C 002E5D4C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E8F50 002E5D50*/ PPC::Runtime::ASM::bctrl();
/*802E8F54 002E5D54*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802E8F58 002E5D58*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802E8F5C 002E5D5C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*802E8F60 002E5D60*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802E8F64 002E5D64*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802E8F68 002E5D68*/ PPC::Runtime::ASM::bctrl();
/*802E8F6C 002E5D6C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802E8F70 002E5D70*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*802E8F74 002E5D74*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802E8F78 002E5D78*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802E8F7C 002E5D7C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802E8F80 002E5D80*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802E8F84 002E5D84*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*802E8F88 002E5D88*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802E8F8C 002E5D8C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802E8F90 002E5D90*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*802E8F94 002E5D94*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802E8F98 002E5D98*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*802E8F9C 002E5D9C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802E8FA0 002E5DA0*/ PPC::Runtime::ASM::addi(context->r4, context->r28, 0x38);
/*802E8FA4 002E5DA4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802E8FA8 002E5DA8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802E8FAC 002E5DAC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802E8FB0 002E5DB0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802E8FB4 002E5DB4*/ PPC::Runtime::ASM::bl(fn_PSVECDotProduct);
/*802E8FB8 002E5DB8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E394C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802E8FBC 002E5DBC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802E8FC0 002E5DC0*/ PPC::Runtime::ASM::ble(.L_802E8FC8);
/*802E8FC4 002E5DC4*/ PPC::Runtime::ASM::li(context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802E8FC8, 0x802E8FC8) //this is a jump label
/*802E8FC8 002E5DC8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802E8FCC 002E5DCC*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*802E8FD0 002E5DD0*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*802E8FD4 002E5DD4*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*802E8FD8 002E5DD8*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802E8FDC 002E5DDC*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*802E8FE0 002E5DE0*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802E8FE4 002E5DE4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*802E8FE8 002E5DE8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*802E8FEC 002E5DEC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802E8FF0 002E5DF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802E8FF4 002E5DF4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802E8FF8 002E5DF8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802E8FFC 002E5DFC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*802E9000 002E5E00*/ PPC::Runtime::ASM::blr();
}