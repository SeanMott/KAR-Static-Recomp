//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801D7F44(PPC::Runtime::GCContext* context)
{
/*801D7F44 001D4D44*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801D7F48 001D4D48*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D7F4C 001D4D4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801D7F50 001D4D50*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801D7F54 001D4D54*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*801D7F58 001D4D58*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D7F5C 001D4D5C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*801D7F60 001D4D60*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801D7F64 001D4D64*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x324);
/*801D7F68 001D4D68*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801D7F6C 001D4D6C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f31);
/*801D7F70 001D4D70*/ PPC::Runtime::ASM::bge(.L_801D7F88);
/*801D7F74 001D4D74*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1BAC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D7F78 001D4D78*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
/*801D7F7C 001D4D7C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801D7F80 001D4D80*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801D7F84 001D4D84*/ PPC::Runtime::ASM::b(.L_801D7FC0);
RUNTIME_PPC_JUMP_LABEL(.L_801D7F88, 0x801D7F88) //this is a jump label
/*801D7F88 001D4D88*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1BA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D7F8C 001D4D8C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801D7F90 001D4D90*/ PPC::Runtime::ASM::ble(.L_801D7FC0);
/*801D7F94 001D4D94*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f31);
/*801D7F98 001D4D98*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801D7F9C 001D4D9C*/ PPC::Runtime::ASM::fdivs(context->f1, context->f0, context->f1);
/*801D7FA0 001D4DA0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f1);
/*801D7FA4 001D4DA4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801D7FA8 001D4DA8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801D7FAC 001D4DAC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801D7FB0 001D4DB0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801D7FB4 001D4DB4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
/*801D7FB8 001D4DB8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801D7FBC 001D4DBC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801D7FC0, 0x801D7FC0) //this is a jump label
/*801D7FC0 001D4DC0*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*801D7FC4 001D4DC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801D7FC8 001D4DC8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801D7FCC 001D4DCC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D7FD0 001D4DD0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D7FD4 001D4DD4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801D7FD8 001D4DD8*/ PPC::Runtime::ASM::blr();
}