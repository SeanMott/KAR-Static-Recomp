//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801CAE48(PPC::Runtime::GCContext* context)
{
/*801CAE48 001C7C48*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801CAE4C 001C7C4C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x970, context->r3));
/*801CAE50 001C7C50*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x974, context->r3));
/*801CAE54 001C7C54*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x978, context->r3));
/*801CAE58 001C7C58*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x97c, context->r3));
/*801CAE5C 001C7C5C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x980, context->r3));
/*801CAE60 001C7C60*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x984, context->r3));
/*801CAE64 001C7C64*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x988, context->r3));
/*801CAE68 001C7C68*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98c, context->r3));
/*801CAE6C 001C7C6C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x990, context->r3));
/*801CAE70 001C7C70*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9dc, context->r3));
/*801CAE74 001C7C74*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x994, context->r3));
/*801CAE78 001C7C78*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x8);
/*801CAE7C 001C7C7C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x998, context->r3));
/*801CAE80 001C7C80*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x99c, context->r3));
/*801CAE84 001C7C84*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a0, context->r3));
/*801CAE88 001C7C88*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a4, context->r3));
/*801CAE8C 001C7C8C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9a8, context->r3));
/*801CAE90 001C7C90*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9ac, context->r3));
/*801CAE94 001C7C94*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9b0, context->r3));
/*801CAE98 001C7C98*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9b4, context->r3));
/*801CAE9C 001C7C9C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9e0, context->r3));
/*801CAEA0 001C7CA0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9b8, context->r3));
/*801CAEA4 001C7CA4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9bc, context->r3));
/*801CAEA8 001C7CA8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c0, context->r3));
/*801CAEAC 001C7CAC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c4, context->r3));
/*801CAEB0 001C7CB0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c8, context->r3));
/*801CAEB4 001C7CB4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9cc, context->r3));
/*801CAEB8 001C7CB8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9d0, context->r3));
/*801CAEBC 001C7CBC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9d4, context->r3));
/*801CAEC0 001C7CC0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9d8, context->r3));
/*801CAEC4 001C7CC4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9dc, context->r5));
/*801CAEC8 001C7CC8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc35, context->r3));
/*801CAECC 001C7CCC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 0, 31, 31);
/*801CAED0 001C7CD0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc35, context->r3));
/*801CAED4 001C7CD4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r3));
/*801CAED8 001C7CD8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*801CAEDC 001C7CDC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc36, context->r3));
/*801CAEE0 001C7CE0*/ PPC::Runtime::ASM::blr();
}