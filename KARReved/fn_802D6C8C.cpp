//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802DE0E4.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_80296264.hpp"



void fn_802D6C8C(PPC::Runtime::GCContext* context)
{
/*802D6C8C 002D3A8C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*802D6C90 002D3A90*/ PPC::Runtime::ASM::mflr(context->r0);
/*802D6C94 002D3A94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802D6C98 002D3A98*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802D6C9C 002D3A9C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*802D6CA0 002D3AA0*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802D6CA4 002D3AA4*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*802D6CA8 002D3AA8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D6CAC 002D3AAC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802D6CB0 002D3AB0*/ PPC::Runtime::ASM::bl(fn_802DE0E4);
/*802D6CB4 002D3AB4*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20fc, context->r3));
/*802D6CB8 002D3AB8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D6CBC 002D3ABC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802D6CC0 002D3AC0*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802D6CC4 002D3AC4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D6CC8 002D3AC8*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*802D6CCC 002D3ACC*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*802D6CD0 002D3AD0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D6CD4 002D3AD4*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802D6CD8 002D3AD8*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f31);
/*802D6CDC 002D3ADC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D6CE0 002D3AE0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*802D6CE4 002D3AE4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f30, context->f0);
/*802D6CE8 002D3AE8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802D6CEC 002D3AEC*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*802D6CF0 002D3AF0*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802D6CF4 002D3AF4*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*802D6CF8 002D3AF8*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802D6CFC 002D3AFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802D6D00 002D3B00*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D6D04 002D3B04*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802D6D08 002D3B08*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*802D6D0C 002D3B0C*/ PPC::Runtime::ASM::blr();
}