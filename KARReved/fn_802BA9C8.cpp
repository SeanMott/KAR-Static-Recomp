//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802BA97C.hpp"



void fn_802BA9C8(PPC::Runtime::GCContext* context)
{
/*802BA9C8 002B77C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802BA9CC 002B77CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802BA9D0 002B77D0*/ PPC::Runtime::ASM::li(context->r4, lbl_805D8A28 @ Get_MemoryOffset_SDA21);
/*802BA9D4 002B77D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802BA9D8 002B77D8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802BA9DC 002B77DC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802BA9E0 002B77E0*/ PPC::Runtime::ASM::bl(fn_802BA97C);
/*802BA9E4 002B77E4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804C1058 @ Get_MemoryOffset_HighBit);
/*802BA9E8 002B77E8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802BA9EC 002B77EC*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804C1058 @ Get_MemoryOffset_LowBit);
/*802BA9F0 002B77F0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802BA9F4 002B77F4*/ PPC::Runtime::ASM::addi(context->r4, context->r5, 0x10);
/*802BA9F8 002B77F8*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x58);
/*802BA9FC 002B77FC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802BAA00 002B7800*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*802BAA04 002B7804*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802BAA08 002B7808*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802BAA0C 002B780C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802BAA10 002B7810*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802BAA14 002B7814*/ PPC::Runtime::ASM::blr();
}