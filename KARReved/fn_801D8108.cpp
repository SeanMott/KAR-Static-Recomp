//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801D8108(PPC::Runtime::GCContext* context)
{
/*801D8108 001D4F08*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801D810C 001D4F0C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D8110 001D4F10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D8114 001D4F14*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D8118 001D4F18*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801D811C 001D4F1C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x33c);
/*801D8120 001D4F20*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801D8124 001D4F24*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1BA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D8128 001D4F28*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801D812C 001D4F2C*/ PPC::Runtime::ASM::ble(.L_801D817C);
/*801D8130 001D4F30*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x49c, context->r31));
/*801D8134 001D4F34*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1BAC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801D8138 001D4F38*/ PPC::Runtime::ASM::fsubs(context->f2, context->f1, context->f2);
/*801D813C 001D4F3C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*801D8140 001D4F40*/ PPC::Runtime::ASM::bge(.L_801D8154);
/*801D8144 001D4F44*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x344, context->r31));
/*801D8148 001D4F48*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x340, context->r31));
/*801D814C 001D4F4C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r31));
/*801D8150 001D4F50*/ PPC::Runtime::ASM::b(.L_801D817C);
RUNTIME_PPC_JUMP_LABEL(.L_801D8154, 0x801D8154) //this is a jump label
/*801D8154 001D4F54*/ PPC::Runtime::ASM::fdivs(context->f1, context->f2, context->f1);
/*801D8158 001D4F58*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r31));
/*801D815C 001D4F5C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801D8160 001D4F60*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r31));
/*801D8164 001D4F64*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x340, context->r31));
/*801D8168 001D4F68*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801D816C 001D4F6C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x340, context->r31));
/*801D8170 001D4F70*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x344, context->r31));
/*801D8174 001D4F74*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801D8178 001D4F78*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x344, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801D817C, 0x801D817C) //this is a jump label
/*801D817C 001D4F7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D8180 001D4F80*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D8184 001D4F84*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D8188 001D4F88*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801D818C 001D4F8C*/ PPC::Runtime::ASM::blr();
}