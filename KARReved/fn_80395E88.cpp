//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80395FBC.hpp"
#include "fn_80378568.hpp"



void fn_80395E88(PPC::Runtime::GCContext* context)
{
/*80395E88 00392C88*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80395E8C 00392C8C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80395E90 00392C90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80395E94 00392C94*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80395E98 00392C98*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80395E9C 00392C9C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*80395EA0 00392CA0*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*80395EA4 00392CA4*/ PPC::Runtime::ASM::bne(.L_80395EB4);
/*80395EA8 00392CA8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4FA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80395EAC 00392CAC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80395EB0 00392CB0*/ PPC::Runtime::ASM::b(.L_80395F78);
RUNTIME_PPC_JUMP_LABEL(.L_80395EB4, 0x80395EB4) //this is a jump label
/*80395EB4 00392CB4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80395EB8 00392CB8*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80395EBC 00392CBC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80395EC0 00392CC0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80395EC4 00392CC4*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E4FB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80395EC8 00392CC8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80395ECC 00392CCC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80395ED0 00392CD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80395ED4 00392CD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80395ED8 00392CD8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80395EDC 00392CDC*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f1);
/*80395EE0 00392CE0*/ PPC::Runtime::ASM::bl(fn_80395FBC);
/*80395EE4 00392CE4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80395EE8 00392CE8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80395EEC 00392CEC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80395EF0 00392CF0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r12));
/*80395EF4 00392CF4*/ PPC::Runtime::ASM::fmuls(context->f1, context->f0, context->f1);
/*80395EF8 00392CF8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80395EFC 00392CFC*/ PPC::Runtime::ASM::bctrl();
/*80395F00 00392D00*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80395F04 00392D04*/ PPC::Runtime::ASM::bl(fn_80378568);
/*80395F08 00392D08*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80395F0C 00392D0C*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80395F10 00392D10*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/*80395F14 00392D14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80395F18 00392D18*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E4FB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80395F1C 00392D1C*/ PPC::Runtime::ASM::slwi(context->r3, context->r3, 3);
/*80395F20 00392D20*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80395F24 00392D24*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*80395F28 00392D28*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80395F2C 00392D2C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80395F30 00392D30*/ PPC::Runtime::ASM::lfsx(context->f2, context->r4, context->r3);
/*80395F34 00392D34*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80395F38 00392D38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80395F3C 00392D3C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*80395F40 00392D40*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80395F44 00392D44*/ PPC::Runtime::ASM::bne(.L_80395F78);
/*80395F48 00392D48*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80395F4C 00392D4C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80395F50 00392D50*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80395F54 00392D54*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80395F58 00392D58*/ PPC::Runtime::ASM::bne(.L_80395F78);
/*80395F5C 00392D5C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80395F60 00392D60*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80395F64 00392D64*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4FA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80395F68 00392D68*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80395F6C 00392D6C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r12));
/*80395F70 00392D70*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80395F74 00392D74*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80395F78, 0x80395F78) //this is a jump label
/*80395F78 00392D78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80395F7C 00392D7C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80395F80 00392D80*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80395F84 00392D84*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80395F88 00392D88*/ PPC::Runtime::ASM::blr();
}