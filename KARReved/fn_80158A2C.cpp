//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138B10.hpp"



void fn_80158A2C(PPC::Runtime::GCContext* context)
{
/*80158A2C 0015582C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80158A30 00155830*/ PPC::Runtime::ASM::mflr(context->r0);
/*80158A34 00155834*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80158A38 00155838*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80158A3C 0015583C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80158A40 00155840*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80158A44 00155844*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80158A48 00155848*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80158A4C 0015584C*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*80158A50 00155850*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x75c);
/*80158A54 00155854*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80158A58 00155858*/ PPC::Runtime::ASM::add(context->r3, context->r5, context->r0);
/*80158A5C 0015585C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80158A60 00155860*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80158A64 00155864*/ PPC::Runtime::ASM::beq(.L_80158A94);
/*80158A68 00155868*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*80158A6C 0015586C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r31);
/*80158A70 00155870*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*80158A74 00155874*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r4));
/*80158A78 00155878*/ PPC::Runtime::ASM::blt(.L_80158A94);
/*80158A7C 0015587C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80158A80 00155880*/ PPC::Runtime::ASM::extsb(context->r4, context->r31);
/*80158A84 00155884*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0810 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80158A88 00155888*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80158A8C 0015588C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80158A90 00155890*/ PPC::Runtime::ASM::bl(fn_80138B10);
RUNTIME_PPC_JUMP_LABEL(.L_80158A94, 0x80158A94) //this is a jump label
/*80158A94 00155894*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80158A98 00155898*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80158A9C 0015589C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80158AA0 001558A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80158AA4 001558A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80158AA8 001558A8*/ PPC::Runtime::ASM::blr();
}