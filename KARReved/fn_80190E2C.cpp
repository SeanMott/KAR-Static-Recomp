//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80190E2C(PPC::Runtime::GCContext* context)
{
/*80190E2C 0018DC2C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a8, context->r3));
/*80190E30 0018DC30*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80190E34 0018DC34*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ad, context->r3));
/*80190E38 0018DC38*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r3));
/*80190E3C 0018DC3C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b0, context->r3));
/*80190E40 0018DC40*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 6, 25, 25);
/*80190E44 0018DC44*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b0, context->r3));
/*80190E48 0018DC48*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b0, context->r3));
/*80190E4C 0018DC4C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 5, 26, 26);
/*80190E50 0018DC50*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b0, context->r3));
/*80190E54 0018DC54*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b0, context->r3));
/* 80190E58 0018DC58  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*80190E5C 0018DC5C*/ PPC::Runtime::ASM::beqlr();
/*80190E60 0018DC60*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ae, context->r3));
/*80190E64 0018DC64*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD810 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80190E68 0018DC68*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80190E6C 0018DC6C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80190E70 0018DC70*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4af, context->r3));
/*80190E74 0018DC74*/ PPC::Runtime::ASM::blr();
}