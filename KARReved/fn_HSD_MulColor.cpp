//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_HSD_MulColor(PPC::Runtime::GCContext* context)
{
/*80417D4C 00414B4C*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80417D50 00414B50*/ PPC::Runtime::ASM::lis(context->r6, 0x8081);
/*80417D54 00414B54*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80417D58 00414B58*/ PPC::Runtime::ASM::subi(context->r8, context->r6, 0x7f7f);
/*80417D5C 00414B5C*/ PPC::Runtime::ASM::mullw(context->r0, context->r7, context->r0);
/*80417D60 00414B60*/ PPC::Runtime::ASM::mulhwu(context->r0, context->r8, context->r0);
/*80417D64 00414B64*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 8, 17);
/*80417D68 00414B68*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80417D6C 00414B6C*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r3));
/*80417D70 00414B70*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*80417D74 00414B74*/ PPC::Runtime::ASM::mullw(context->r0, context->r6, context->r0);
/*80417D78 00414B78*/ PPC::Runtime::ASM::mulhwu(context->r0, context->r8, context->r0);
/*80417D7C 00414B7C*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 8, 17);
/*80417D80 00414B80*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r5));
/*80417D84 00414B84*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*80417D88 00414B88*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*80417D8C 00414B8C*/ PPC::Runtime::ASM::mullw(context->r0, context->r6, context->r0);
/*80417D90 00414B90*/ PPC::Runtime::ASM::mulhwu(context->r0, context->r8, context->r0);
/*80417D94 00414B94*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 8, 17);
/*80417D98 00414B98*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r5));
/*80417D9C 00414B9C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r3));
/*80417DA0 00414BA0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r4));
/*80417DA4 00414BA4*/ PPC::Runtime::ASM::mullw(context->r0, context->r3, context->r0);
/*80417DA8 00414BA8*/ PPC::Runtime::ASM::mulhwu(context->r0, context->r8, context->r0);
/*80417DAC 00414BAC*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 8, 17);
/*80417DB0 00414BB0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r5));
/*80417DB4 00414BB4*/ PPC::Runtime::ASM::blr();
}