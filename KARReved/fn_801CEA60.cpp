//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801CEA60(PPC::Runtime::GCContext* context)
{
/*801CEA60 001CB860*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801CEA64 001CB864*/ PPC::Runtime::ASM::mflr(context->r0);
/*801CEA68 001CB868*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801CEA6C 001CB86C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801CEA70 001CB870*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801CEA74 001CB874*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6dc, context->r3));
/*801CEA78 001CB878*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801CEA7C 001CB87C*/ PPC::Runtime::ASM::beq(.L_801CEB6C);
/*801CEA80 001CB880*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x6c4);
/*801CEA84 001CB884*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801CEA88 001CB888*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6dc, context->r31));
/*801CEA8C 001CB88C*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*801CEA90 001CB890*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801CEA94 001CB894*/ PPC::Runtime::ASM::xoris(context->r3, context->r4, 0x8000);
/*801CEA98 001CB898*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*801CEA9C 001CB89C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801CEAA0 001CB8A0*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E1A58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CEAA4 001CB8A4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801CEAA8 001CB8A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6dc, context->r31));
/*801CEAAC 001CB8AC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*801CEAB0 001CB8B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6dc, context->r31));
/*801CEAB4 001CB8B4*/ PPC::Runtime::ASM::fdivs(context->f0, context->f1, context->f0);
/*801CEAB8 001CB8B8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801CEABC 001CB8BC*/ PPC::Runtime::ASM::fsubs(context->f2, context->f1, context->f0);
/*801CEAC0 001CB8C0*/ PPC::Runtime::ASM::beq(.L_801CEAD0);
/*801CEAC4 001CB8C4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1A40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CEAC8 001CB8C8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801CEACC 001CB8CC*/ PPC::Runtime::ASM::bge(.L_801CEB44);
RUNTIME_PPC_JUMP_LABEL(.L_801CEAD0, 0x801CEAD0) //this is a jump label
/*801CEAD0 001CB8D0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc3a, context->r31));
/* 801CEAD4 001CB8D4  54 00 F7 FF */ extrwi. context->r0 , context->r0 , 1 , 29
/*801CEAD8 001CB8D8*/ PPC::Runtime::ASM::beq(.L_801CEB30);
/*801CEADC 001CB8DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801CEAE0 001CB8E0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6d4, context->r31));
/*801CEAE4 001CB8E4*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801CEAE8 001CB8E8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f3);
/*801CEAEC 001CB8EC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6d0, context->r31));
/*801CEAF0 001CB8F0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
/*801CEAF4 001CB8F4*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6d8, context->r31));
/*801CEAF8 001CB8F8*/ PPC::Runtime::ASM::fmadds(context->f0, context->f5, context->f2, context->f0);
/*801CEAFC 001CB8FC*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f4, context->f0);
/*801CEB00 001CB900*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*801CEB04 001CB904*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f0);
/*801CEB08 001CB908*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f0);
/*801CEB0C 001CB90C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*801CEB10 001CB910*/ PPC::Runtime::ASM::fadds(context->f2, context->f5, context->f2);
/*801CEB14 001CB914*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801CEB18 001CB918*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801CEB1C 001CB91C*/ PPC::Runtime::ASM::fadds(context->f1, context->f2, context->f1);
/*801CEB20 001CB920*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801CEB24 001CB924*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
/*801CEB28 001CB928*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*801CEB2C 001CB92C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801CEB30, 0x801CEB30) //this is a jump label
/*801CEB30 001CB930*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1A30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801CEB34 001CB934*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6cc, context->r31));
/*801CEB38 001CB938*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c8, context->r31));
/*801CEB3C 001CB93C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c4, context->r31));
/*801CEB40 001CB940*/ PPC::Runtime::ASM::b(.L_801CEB6C);
RUNTIME_PPC_JUMP_LABEL(.L_801CEB44, 0x801CEB44) //this is a jump label
/*801CEB44 001CB944*/ PPC::Runtime::ASM::fdivs(context->f1, context->f2, context->f1);
/*801CEB48 001CB948*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c4, context->r31));
/*801CEB4C 001CB94C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801CEB50 001CB950*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c4, context->r31));
/*801CEB54 001CB954*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c8, context->r31));
/*801CEB58 001CB958*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801CEB5C 001CB95C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c8, context->r31));
/*801CEB60 001CB960*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6cc, context->r31));
/*801CEB64 001CB964*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*801CEB68 001CB968*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6cc, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801CEB6C, 0x801CEB6C) //this is a jump label
/*801CEB6C 001CB96C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801CEB70 001CB970*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801CEB74 001CB974*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801CEB78 001CB978*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801CEB7C 001CB97C*/ PPC::Runtime::ASM::blr();
}