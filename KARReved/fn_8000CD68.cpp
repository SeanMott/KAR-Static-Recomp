//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8000CD68(PPC::Runtime::GCContext* context)
{
/*8000CD68 00009B68*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000CD6C 00009B6C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000CD70 00009B70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000CD74 00009B74*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000CD78 00009B78*/ PPC::Runtime::ASM::li(context->r31, STRUCT_BYTE4_COUNT_1805DD540 @ Get_MemoryOffset_SDA21);
/*8000CD7C 00009B7C*/ PPC::Runtime::ASM::bl(OSGetResetCode);
/*8000CD80 00009B80*/ PPC::Runtime::ASM::lis(context->r4, 0x8000);
/*8000CD84 00009B84*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8000CD88 00009B88*/ PPC::Runtime::ASM::subf(context->r3, context->r3, context->r4);
/*8000CD8C 00009B8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8000CD90 00009B90*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r3);
/*8000CD94 00009B94*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 5);
/*8000CD98 00009B98*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*8000CD9C 00009B9C*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*8000CDA0 00009BA0*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
/*8000CDA4 00009BA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8000CDA8 00009BA8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000CDAC 00009BAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000CDB0 00009BB0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000CDB4 00009BB4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000CDB8 00009BB8*/ PPC::Runtime::ASM::blr();
}