//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022C824.hpp"



void fn_800C40E4(PPC::Runtime::GCContext* context)
{
/*800C40E4 000C0EE4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800C40E8 000C0EE8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800C40EC 000C0EEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800C40F0 000C0EF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*800C40F4 000C0EF4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C40F8 000C0EF8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800C40FC 000C0EFC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r3));
/*800C4100 000C0F00*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r3));
/*800C4104 000C0F04*/ PPC::Runtime::ASM::bl(fn_8022C824);
/*800C4108 000C0F08*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*800C410C 000C0F0C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800C4110 000C0F10*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF418 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800C4114 000C0F14*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x23c, context->r31));
/*800C4118 000C0F18*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800C411C 000C0F1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800C4120 000C0F20*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800C4124 000C0F24*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800C4128 000C0F28*/ PPC::Runtime::ASM::blr();
}