//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FC398.hpp"



void fn_80215CA0(PPC::Runtime::GCContext* context)
{
/*80215CA0 00212AA0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80215CA4 00212AA4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80215CA8 00212AA8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E25F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80215CAC 00212AAC*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*80215CB0 00212AB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80215CB4 00212AB4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80215CB8 00212AB8*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80215CBC 00212ABC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E25F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80215CC0 00212AC0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80215CC4 00212AC4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80215CC8 00212AC8*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*80215CCC 00212ACC*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*80215CD0 00212AD0*/ PPC::Runtime::ASM::bl(fn_HSD_Randi);
/*80215CD4 00212AD4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x3);
/*80215CD8 00212AD8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4a, context->r31));
/*80215CDC 00212ADC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80215CE0 00212AE0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80215CE4 00212AE4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80215CE8 00212AE8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80215CEC 00212AEC*/ PPC::Runtime::ASM::blr();
}