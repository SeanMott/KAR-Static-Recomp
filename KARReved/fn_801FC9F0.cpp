//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_giveEnemyDamage.hpp"
#include "fn_80202634.hpp"
#include "fn_8020BCD8.hpp"
#include "fn_giveEnemyDamage.hpp"



void fn_801FC9F0(PPC::Runtime::GCContext* context)
{
/*801FC9F0 001F97F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FC9F4 001F97F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FC9F8 001F97F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FC9FC 001F97FC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801FCA00 001F9800*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801FCA04 001F9804*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801FCA08 001F9808*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*801FCA0C 001F980C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4b);
/*801FCA10 001F9810*/ PPC::Runtime::ASM::bge(.L_801FCA1C);
/*801FCA14 001F9814*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x48);
/*801FCA18 001F9818*/ PPC::Runtime::ASM::bge(.L_801FCA9C);
RUNTIME_PPC_JUMP_LABEL(.L_801FCA1C, 0x801FCA1C) //this is a jump label
/*801FCA1C 001F981C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x410, context->r30));
/*801FCA20 001F9820*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2220 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FCA24 001F9824*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*801FCA28 001F9828*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x1c);
/*801FCA2C 001F982C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*801FCA30 001F9830*/ PPC::Runtime::ASM::fcmpu(cr0, context->f2, context->f0);
/*801FCA34 001F9834*/ PPC::Runtime::ASM::beq(.L_801FCA8C);
/*801FCA38 001F9838*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E220C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FCA3C 001F983C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801FCA40 001F9840*/ PPC::Runtime::ASM::bge(.L_801FCA48);
/*801FCA44 001F9844*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2230 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_801FCA48, 0x801FCA48) //this is a jump label
/*801FCA48 001F9848*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FCA4C 001F984C*/ PPC::Runtime::ASM::bl(fn_giveEnemyDamage);
/*801FCA50 001F9850*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa14, context->r30));
/*801FCA54 001F9854*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FCA58 001F9858*/ PPC::Runtime::ASM::bl(fn_80202634);
/*801FCA5C 001F985C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xad0, context->r30));
/*801FCA60 001F9860*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*801FCA64 001F9864*/ PPC::Runtime::ASM::beq(.L_801FCA7C);
/*801FCA68 001F9868*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FCA6C 001F986C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801FCA70 001F9870*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801FCA74 001F9874*/ PPC::Runtime::ASM::bctrl();
/*801FCA78 001F9878*/ PPC::Runtime::ASM::b(.L_801FCA9C);
RUNTIME_PPC_JUMP_LABEL(.L_801FCA7C, 0x801FCA7C) //this is a jump label
/*801FCA7C 001F987C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FCA80 001F9880*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801FCA84 001F9884*/ PPC::Runtime::ASM::bl(fn_8020BCD8);
/*801FCA88 001F9888*/ PPC::Runtime::ASM::b(.L_801FCA9C);
RUNTIME_PPC_JUMP_LABEL(.L_801FCA8C, 0x801FCA8C) //this is a jump label
/*801FCA8C 001F988C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801FCA90 001F9890*/ PPC::Runtime::ASM::beq(.L_801FCA9C);
/*801FCA94 001F9894*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801FCA98 001F9898*/ PPC::Runtime::ASM::bl(fn_giveEnemyDamage);
RUNTIME_PPC_JUMP_LABEL(.L_801FCA9C, 0x801FCA9C) //this is a jump label
/*801FCA9C 001F989C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801FCAA0 001F98A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a0, context->r30));
/*801FCAA4 001F98A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FCAA8 001F98A8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801FCAAC 001F98AC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801FCAB0 001F98B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FCAB4 001F98B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FCAB8 001F98B8*/ PPC::Runtime::ASM::blr();
}