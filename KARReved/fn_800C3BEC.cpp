//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022C824.hpp"



void fn_800C3BEC(PPC::Runtime::GCContext* context)
{
/*800C3BEC 000C09EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800C3BF0 000C09F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*800C3BF4 000C09F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800C3BF8 000C09F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800C3BFC 000C09FC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C3C00 000C0A00*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800C3C04 000C0A04*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r3));
/*800C3C08 000C0A08*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r3));
/*800C3C0C 000C0A0C*/ PPC::Runtime::ASM::bl(fn_8022C824);
/*800C3C10 000C0A10*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*800C3C14 000C0A14*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C3C18 000C0A18*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF3D0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800C3C1C 000C0A1C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x240, context->r31));
/*800C3C20 000C0A20*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C3C24 000C0A24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800C3C28 000C0A28*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800C3C2C 000C0A2C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800C3C30 000C0A30*/ PPC::Runtime::ASM::blr();
}