//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80055AA8.hpp"
#include "fn_800550BC.hpp"



void fn_80138C90(PPC::Runtime::GCContext* context)
{
/*80138C90 00135A90*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*80138C94 00135A94*/ PPC::Runtime::ASM::mflr(context->r0);
/*80138C98 00135A98*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80138C9C 00135A9C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80138CA0 00135AA0*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*80138CA4 00135AA4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80138CA8 00135AA8*/ PPC::Runtime::ASM::xoris(context->r4, context->r4, 0x8000);
/*80138CAC 00135AAC*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80138CB0 00135AB0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80138CB4 00135AB4*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80138CB8 00135AB8*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E0170 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80138CBC 00135ABC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80138CC0 00135AC0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80138CC4 00135AC4*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80138CC8 00135AC8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f1);
/*80138CCC 00135ACC*/ PPC::Runtime::ASM::bl(fn_80055AA8);
/*80138CD0 00135AD0*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80138CD4 00135AD4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80138CD8 00135AD8*/ PPC::Runtime::ASM::li(context->r4, 0x80);
/*80138CDC 00135ADC*/ PPC::Runtime::ASM::bl(fn_800550BC);
/*80138CE0 00135AE0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80138CE4 00135AE4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*80138CE8 00135AE8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*80138CEC 00135AEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80138CF0 00135AF0*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80138CF4 00135AF4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80138CF8 00135AF8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80138CFC 00135AFC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80138D00 00135B00*/ PPC::Runtime::ASM::blr();
}