//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8007E93C.hpp"
#include "fn_8007E964.hpp"



void fn_8007E8CC(PPC::Runtime::GCContext* context)
{
/*8007E8CC 0007B6CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8007E8D0 0007B6D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8007E8D4 0007B6D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007E8D8 0007B6D8*/ PPC::Runtime::ASM::bl(fn_8007E93C);
/*8007E8DC 0007B6DC*/ PPC::Runtime::ASM::bl(fn_8007E964);
/*8007E8E0 0007B6E0*/ PPC::Runtime::ASM::li(context->r5, SkipAddress_69 @ Get_MemoryOffset_SDA21);
/*8007E8E4 0007B6E4*/ PPC::Runtime::ASM::li(context->r3, 0xff);
/*8007E8E8 0007B6E8*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r5));
/*8007E8EC 0007B6EC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8007E8F0 0007B6F0*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r0, 7, 24, 24);
/*8007E8F4 0007B6F4*/ PPC::Runtime::ASM::stb(context->r3, SkipAddress_69 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007E8F8 0007B6F8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8007E8FC 0007B6FC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD648 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007E900 0007B700*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r5));
/*8007E904 0007B704*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r5));
/*8007E908 0007B708*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8007E90C 0007B70C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r3));
/*8007E910 0007B710*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x40);
/*8007E914 0007B714*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r3));
/*8007E918 0007B718*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD648 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8007E91C 0007B71C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8007E920 0007B720*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r3));
/*8007E924 0007B724*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x80);
/*8007E928 0007B728*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r3));
/*8007E92C 0007B72C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007E930 0007B730*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8007E934 0007B734*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8007E938 0007B738*/ PPC::Runtime::ASM::blr();
}