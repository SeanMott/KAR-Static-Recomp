//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80447A4C(PPC::Runtime::GCContext* context)
{
/*80447A4C 0044484C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80447A50 00444850*/ PPC::Runtime::ASM::mflr(context->r0);
/*80447A54 00444854*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80447A58 00444858*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE4E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80447A5C 0044485C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80447A60 00444860*/ PPC::Runtime::ASM::bctrl();
/*80447A64 00444864*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80447A68 00444868*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80447A6C 0044486C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80447A70 00444870*/ PPC::Runtime::ASM::blr();
}